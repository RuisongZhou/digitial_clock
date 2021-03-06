`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:37:40 03/27/2019 
// Design Name: 
// Module Name:    clock 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
/*
 * 时钟模块
 * input params:
 *      clk: 时钟信号输入1s
 *		clk_500ms: 500ms时钟信号
 *      reset: 重置信号
 *		EN： 使能端
 *      settingButtion: 设置时钟
 *      
 *      
 * output params:
 *      curHour: 目前的小时
 *      curMin : 目前的分钟
 *		curSec : 目前的秒
 */
module clock(	input clk, 
				input clk_500ms,
				input reset,
				input en, 
				input [1:0] settingButton, 
			
				output reg [7:0] curHour, 
				output reg [7:0] curMin,
				output reg [7:0] curSec
		);
		
	wire [7:0] clockHour;
	wire [7:0] clockMinute;
	wire [7:0] clockSec;
	
	reg min_clk;
	reg hour_clk;

	initial begin
		min_clk = 0;	//初始化为1，这样进位会在第二个上升沿完成
		hour_clk = 0;
		//counter = 0;
	end
	
	//分钟和小时的分频
	always @(posedge clk) begin
		
		if(settingButton[0]) begin
			min_clk <= ~min_clk;
			min_clk <= ~min_clk;
		end

		if(settingButton[1]) begin
			hour_clk <= ~hour_clk;
			hour_clk <= ~hour_clk;
		end
		
		if(curMin[3:0] == 9 && curMin[7:4] == 5 && curSec[3:0] == 9 && curSec[7:4] == 5) begin
			hour_clk <= ~hour_clk;
			hour_clk <= ~hour_clk;	
		end
		
		if(curSec[3:0] == 9 && curSec[7:4] == 5) begin
			min_clk <= ~min_clk;
			min_clk <= ~min_clk;		
		end

	end

	//重置小时,分钟,秒
	counter_60 alarm_second(.CP(clk), .reset(reset), .EN(en),.Cnt(clockSec));
	
	counter_60 alarm_minute(.CP(min_clk), .reset(reset), .EN(en),.Cnt(clockMinute));
	
	counter_24 alarm_hour(.CntH(clockHour[7:4]),.CntL(clockHour[3:0]), .reset(reset),.EN(en), .CP(hour_clk));
	
	always @(*) begin
	  curHour = clockHour;
	  curMin = clockMinute;		
	  curSec = clockSec;
	end
endmodule
