/**
content: Alarm
*/
/*
 * 闹钟模块
 * input params:
 *      clk: 时钟输入
 *      reset: 重置信号
 *		alarmOn： 闹钟开关
 *      settingButtion: 设置时钟
 *      curHour: 目前的小时
 *      curMin : 目前的分钟
 * output params:
 *      alarmLight: 闹钟状态LED
 *		  outHour ： 闹钟设置的时间
 *		  outMin ： 闹钟设置的时间
 */

module alarm(	input clk, 
				input reset,
				input alarmOn, 
				input [1:0] settingButton, 
				input [7:0] curHour,
				input [7:0] curMin,
				
				output reg [7:0] outHour, 
				output reg [7:0] outMin, 
				output reg alarmLight);
					
	wire [7:0] alarmClockHour;
	wire [7:0] alarmClockMinute;
	initial begin
		alarmLight = 0;
	end
	
	
	//按钮作为设置闹钟的使能端
	wire minL_en, minH_en, hour_en;
	assign minL_en = settingButton[0];
	assign minH_en = (settingButton[0] && alarmClockMinute[3:0]==4'h9);
	assign hour_en = settingButton[1];
	
	//设置小时和分钟
	counter_10 alarm_minute_0(.Cnt(alarmClockMinute[3:0]),.reset(reset),.EN(minL_en),.CP(clk));										
	counter_6  alarm_minute_1(.Cnt(alarmClockMinute[7:4]),.reset(reset),.EN(minH_en),.CP(clk));
	
	counter_24 alarm_hour(.CntH(alarmClockHour[7:4]),.CntL(alarmClockHour[3:0]), .reset(reset),.EN(hour_en), .CP(clk));
	
  

	always @(posedge clk) 
	begin
		if (alarmOn && (curMin == alarmClockMinute) && (curHour == alarmClockHour)) begin		 
			 // 此时闹钟状态为1
			 alarmLight = 1;
		end
		if (curMin != alarmClockMinute) begin
			// 闹钟响了一分钟，此时闹钟状态为0
			 alarmLight = 0;
		end
	end

	always @(*) begin
	  outHour = alarmClockHour;
	  outMin = alarmClockMinute;		
	end
	 
endmodule // Alarm
