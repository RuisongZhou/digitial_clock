`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:14:35 03/27/2019 
// Design Name: 
// Module Name:    top_module 
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
 * 顶层模块，用于将开发板上io与模块绑定及连接各底层模块
 * @input params:
 *      clk: 时钟信号
 *      reset: 重置
 *      EN: 使能信号
 *      settingButtion: 设置信号（按钮）
 *      chooseButtion： 选择设置（闹钟/时钟信号） 开关
 *		alarmOn: 开关闹钟
 *      chooseTimeMode: 选择时间模式
 *
 
 * @output params:     
 *      //time_mode:时间模式 12/24
 *      alarm_light: 闹钟指示灯
 *      time_light: AM / PM 指示灯
 *		BaoshiLight： 报整点时数
 *      seg_out: 开发板上的数码管
 *      an: 开发板上的数码管片选信号
 */
 
module top_module(
		input clk,
		input reset,
		input EN_siginal,
		input [1:0] settingButtion,
		input chooseButtion,
		input alarmOn,
		input chooseTimeMode,
		//output  time_mode,
		output  alarm_light,
		output  time_light,
		output  BaoshiLight,
		output  [7:0] seg_out,
		output  [7:0] an
    );
	 
	 wire clk_500ms;
	 wire clk_driver;
	 wire clk_1s;
	 
	 wire [7:0] clockHour;
	 wire [7:0] clockMin;
	 wire [7:0] clockSec;
	 wire [7:0] alarmHour;
	 wire [7:0] alarmMin;
	 
	 reg [1:0] clockSetting;
	 reg [1:0] alarmSetting;
	 
	 wire [2:0]pos;
	 wire [3:0]num;


	 //时钟分频
	 clk_divider clk_1(.clk(clk), .delay(100_000_000), .clk_divd(clk_1s));
	 clk_divider clk_2(.clk(clk), .delay(100_000), .clk_divd(clk_driver));
	 clk_divider clk_3(.clk(clk), .delay(50_000_000), .clk_divd(clk_500ms));
	 
	 //时钟信号
	 clock clock_1( .clk(clk_1s), 
					.clk_500ms(clk_500ms),
					.reset(reset),
					.en(EN_siginal), 
					.settingButton(clockSetting),
					.curHour(clockHour), 
					.curMin(clockMin),
					.curSec(clockSec)	);
	 
	//选择信号
	always@(posedge clk_driver) begin
		if(~chooseButtion) begin
			clockSetting = settingButtion;
			alarmSetting = 0;
		end

		else begin
			clockSetting = 0;
			alarmSetting = settingButtion;
		end
	end

	 
						
	 alarm alarm_1(.clk(clk_1s),
						.reset(reset),
						.alarmOn(alarmOn),
						.settingButton(alarmSetting[1:0]),
						.curHour(clockHour),
						.curMin(clockMin),
						.curSec(clockSec),
						.alarmLight(alarm_light),
						.outHour(alarmHour),
						.outMin(alarmMin)	);

	/*call time when time is at o'clock*/
	CallTime calltime(.clk(clk_1s), .Hour(clockHour), .Minute(clockMin), .Light(BaoshiLight));
	//AM/PM 显示
	time_set setting(.clk(clk_500ms), .curHour(clockHour), .time_light(time_light));
	/* display driver, output 7-segment led */
	display_driver ddriver(	.clk(clk_driver),
							.chooseButtion(chooseButtion),
							.clockHour(clockHour),
							.clockMin(clockMin),
							.clockSec(clockSec),
							.alarmHour(alarmHour),
							.alarmMin(alarmMin),
							.chooseMode(chooseTimeMode),
							//.time_mode(time_mode),
							.pos(pos),
							.num(num)	);
	/* 3-8 decoder module, control an */
	decoder_38 decd38(.pos(pos), .sel(an));
	
	/* seven segment driver module */
	seven_seg_driver ssd(.num(num), .point(0), .seg(seg_out));
	
	

endmodule
