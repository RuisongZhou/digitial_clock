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
 *      clk: 时钟信号输入
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
	reg [7:0]count_sec;
	reg [7:0]count_min;
	reg EN_signal;
	initial begin
		min_clk = 1;
		hour_clk = 1;
		count_min = 0;
		count_sec = 0;
	end
	
	//分钟和小时的分频
	always @(posedge clk) begin
	
		if(count_sec == 30) begin
			count_sec = 0;
			min_clk = ~min_clk;
			count_min = count_min+1;
		end
		if(count_min == 60) begin
				count_min = 0;
				hour_clk = ~hour_clk;			
		end
		
		if(settingButton[0]) begin
			min_clk = ~min_clk;
			min_clk = ~min_clk;
			count_min = count_min+2;
		end

		if(settingButton[1]) begin
			hour_clk = ~hour_clk;
			hour_clk = ~hour_clk;
		end
		count_sec =count_sec+1;
		EN_signal = en;
	end
	
	//重置小时,分钟,秒
	counter_60 alarm_second(.CP(clk), .reset(reset), .EN(EN_signal),.Cnt(clockSec));
	
	counter_60 alarm_minute(.CP(min_clk), .reset(reset), .EN(EN_signal),.Cnt(clockMinute));
	
	counter_24 alarm_hour(.CntH(clockHour[7:4]),.CntL(clockHour[3:0]), .reset(reset),.EN(EN_signal), .CP(hour_clk));
	
	always @(*) begin
	  curHour = clockHour;
	  curMin = clockMinute;		
	  curSec = clockSec;
	end
endmodule
