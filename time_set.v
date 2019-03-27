`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:25:50 03/27/2019 
// Design Name: 
// Module Name:    time_set 
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
module time_set(
	input clk,
	input [7:0] curHour,
	output reg  time_light
    );
	
	always@(posedge clk) begin
	
		if(curHour[3:0] >=2 && curHour[7:4] >=1)begin
			time_light = 1;
		end
		else begin
			time_light = 0;
		end
	end

endmodule
