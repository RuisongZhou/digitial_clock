`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:30:52 03/27/2019 
// Design Name: 
// Module Name:    calltime 
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
/*整点报时模块*/
/* 
* @params:
* clk: 时钟信号
* Hour, Minute: 目前的时间
* light：信号灯,奇数秒点亮LED，偶数秒熄灭
*/
module CallTime(
    input clk,
    input [7:0] Hour,
    input [7:0] Minute,
    output reg Light
    );
	
	reg [7:0] counter;
	reg [7:0] curHour;
    initial begin
    Light = 0;
    end
    
    always @(posedge clk) begin
        if (Minute == 8'h00) begin
            curHour = Hour[7:4] * 10 + Hour[3:0];
            if (counter < curHour + curHour) begin
                Light = ~Light;
                counter = counter + 1;
            end
            else begin
                Light = 0;
                counter = counter + 1;
            end
        end
        else begin
            counter = 0;
        end
    end

endmodule
