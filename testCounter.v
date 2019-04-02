`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:59:09 04/02/2019
// Design Name:   counter_60
// Module Name:   F:/FPGAcode/digital_clock/testCounter.v
// Project Name:  digital_clock
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: counter_60
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module testCounter;

	// Inputs
	reg CP;
	reg EN;
	reg reset;
	parameter period = 10;
	// Outputs
	wire [7:0] Cnt;
	
	// Instantiate the Unit Under Test (UUT)
	counter_60 uut (
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
		reset = 0;

		// Wait 100 ns for global reset to finish
		#100;
        EN = 1;
		// Add stimulus here

	end
      
endmodule

