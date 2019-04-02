`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:23:01 04/02/2019
// Design Name:   counter_10
// Module Name:   F:/FPGAcode/digital_clock/counter10test.v
// Project Name:  digital_clock
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: counter_10
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module counter10test;

	// Inputs
	reg CP;
	reg EN;
	reg reset;

	// Outputs
	wire [3:0] Cnt;
	parameter period = 10;
	// Instantiate the Unit Under Test (UUT)
	counter_10 uut (
		.CP(CP), 
		.EN(EN), 
		.reset(reset), 
		.Cnt(Cnt)
	);
	always begin
		CP = 1'b0;
		#(period/2) CP = 1'b1;
		#(period/2);
	end
	initial begin
		// Initialize Inputs
		CP = 0;
		EN = 0;
		reset = 1;

		// Wait 100 ns for global reset to finish
		#100;
        EN = 1;
		reset = 0;
		// Add stimulus here

	end
      
endmodule

