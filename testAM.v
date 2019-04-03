`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   10:30:00 04/03/2019
// Design Name:   time_set
// Module Name:   F:/FPGAcode/digital_clock/testAM.v
// Project Name:  digital_clock
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: time_set
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module testAM;

	// Inputs
	reg clk;
	reg [7:0] curHour;

	// Outputs
	wire time_light;
	parameter period = 10;
	// Instantiate the Unit Under Test (UUT)
	time_set uut (
		.clk(clk), 
		.curHour(curHour), 
		.time_light(time_light)
	);
	always begin
		clk = 1'b0;
		#(period/2) clk = 1'b1;
		#(period/2);
	end
	initial begin
		// Initialize Inputs
		clk = 0;
		curHour = 0;

		// Wait 100 ns for global reset to finish
		#100;
        curHour = 13;
		// Add stimulus here

	end
      
endmodule

