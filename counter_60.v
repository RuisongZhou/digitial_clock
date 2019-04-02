`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:56:18 03/27/2019 
// Design Name: 
// Module Name:    counter_60 
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
/*60分频计数器*/
module counter_60( 	input CP, 
					input EN, 
					input reset, 
					output reg [7:0] Cnt);
	
	wire [7:0] clock;
	reg c6_clk;
	initial begin
		c6_clk = 0;
		Cnt = 0;
	end
	
	always @(posedge CP) begin
		if(Cnt[3:0] == 9) begin
			c6_clk <= 1;
		end
		else begin
			c6_clk <= 0;
		end
	end
							
	//设置分钟
	counter_10 alarm_minute_0(.Cnt(clock[3:0]),.reset(reset),.EN(EN),.CP(CP));										
	counter_6  alarm_minute_1(.Cnt(clock[7:4]),.reset(reset),.EN(EN),.CP(c6_clk));
	
	always@(*) begin
		Cnt = clock;
	end

endmodule
