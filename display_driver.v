`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:30:20 03/27/2019 
// Design Name: 
// Module Name:    display_driver 
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
 * 数码管显示驱动模块， 用于将数值转化为数码管输出
 * input params: 
 *      clk: 时钟信号
 *      clockHour, clockMin, clockSec : 时钟描述
 *		alarmHour, alarmMin : 闹钟描述
 *		chooseButtion : 时钟闹钟显示
 *		chooseMode: 选择时间形式12/24

 * output params:
		//time_mode: 12/24小时
 *      seg: 数码管显示信号
 *      seg_pos: 数码管片选信号
 */
module display_driver(
		input clk,
		input chooseButtion,
		input [7:0] clockHour,
		input [7:0] clockMin,
		input [7:0] clockSec,
		input [7:0] alarmHour,
		input [7:0] alarmMin,
		input chooseMode,
		//output reg time_mode,
		output reg [2:0]pos,
		output reg [3:0]num  
		);

	reg [3:0] d_num1;		
	reg [3:0] d_num2;
	reg [3:0] d_num3;
	reg [3:0] d_num4;
	reg [3:0] d_num5;
	reg [3:0] d_num6;
	reg [5:0] hours;

	always @(posedge clk) begin
	  if(~chooseButtion) begin
		hours = clockHour[7:4]*10 + clockHour[3:0];
		
		if(chooseMode == 1 && hours > 12) begin
			hours = hours-12;
			d_num1 = hours / 10;
			d_num2 = hours - 10*d_num1;
		end
		else begin
			d_num1 = clockHour[7:4];
			d_num2 = clockHour[3:0];
		end
		d_num3 = clockMin[7:4];
		d_num4 = clockMin[3:0];
		d_num5 = clockSec[7:4];
		d_num6 = clockSec[3:0];
	  end
	  else begin
		d_num1 = alarmHour[7:4];
		d_num2 = alarmHour[3:0];
		d_num3 = alarmMin[7:4];
		d_num4 = alarmMin[3:0];
	  end
	end

	always @(posedge clk) begin
		if (pos == 6) begin
		  pos <= 0;
		end

		case (pos)
		  3'd0: begin
		  	num = d_num1;
		  end
		  3'd1: begin
		  	num = d_num2;
		  end
		  3'd2: begin
		  	num = d_num3;
		  end
		  3'd3: begin
		  	num = d_num4;
		  end
		  3'd4: begin
		  	num = chooseButtion ? 8'b11111111 : d_num5;
		  end
		  3'd5: begin
		  	num = chooseButtion ? 8'b11111111 : d_num6;
		  end
		  3'd6: begin
			num = 8'b11111111;
		  end
		  default: num = 8'b11111111;
		endcase
		pos <= pos+1;
	end

endmodule
