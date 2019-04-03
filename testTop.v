`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   10:34:31 04/03/2019
// Design Name:   top_module
// Module Name:   F:/FPGAcode/digital_clock/testTop.v
// Project Name:  digital_clock
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: top_module
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module testTop;

	// Inputs
	reg clk;
	reg reset;
	reg EN_siginal;
	reg [1:0] settingButtion;
	reg chooseButtion;
	reg alarmOn;
	reg chooseTimeMode;

	// Outputs
	wire alarm_light;
	wire time_light;
	wire BaoshiLight;
	wire [7:0] seg_out;
	wire [7:0] an;
	parameter period = 10;
	// Instantiate the Unit Under Test (UUT)
	top_module uut (
		.clk(clk), 
		.reset(reset), 
		.EN_siginal(EN_siginal), 
		.settingButtion(settingButtion), 
		.chooseButtion(chooseButtion), 
		.alarmOn(alarmOn), 
		.chooseTimeMode(chooseTimeMode), 
		.alarm_light(alarm_light), 
		.time_light(time_light), 
		.BaoshiLight(BaoshiLight), 
		.seg_out(seg_out), 
		.an(an)
	);
	always begin
		clk = 1'b0;
		#(period/2) clk = 1'b1;
		#(period/2);
	end
	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 0;
		EN_siginal = 0;
		settingButtion = 0;
		chooseButtion = 0;
		alarmOn = 0;
		chooseTimeMode = 0;

		// Wait 100 ns for global reset to finish
		#100;
        EN_siginal = 1;
		settingButtion[1] = 1;
		
		#500;
		settingButtion[1] = 0;
		// Add stimulus here

	end
      
endmodule

