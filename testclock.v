`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:47:51 04/02/2019
// Design Name:   clock
// Module Name:   F:/FPGAcode/digital_clock/testclock.v
// Project Name:  digital_clock
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: clock
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module testclock;

	// Inputs
	reg clk;
	reg reset;
	reg en;
	reg [1:0] settingButton;

	// Outputs
	wire [7:0] curHour;
	wire [7:0] curMin;
	wire [7:0] curSec;
	parameter period = 10;
	// Instantiate the Unit Under Test (UUT)
	clock uut (
		.clk(clk), 
		.reset(reset), 
		.en(en), 
		.settingButton(settingButton), 
		.curHour(curHour), 
		.curMin(curMin), 
		.curSec(curSec)
	);
	
	always begin
		clk = 1'b0;
		#(period/2) clk = 1'b1;
		#(period/2);
	end
	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 1;
		en = 0;
		settingButton = 0;

		// Wait 100 ns for global reset to finish
		#100;
        en = 1;
		reset = 0;
		// Add stimulus here

	end
      
endmodule

