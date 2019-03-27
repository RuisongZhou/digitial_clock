`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:59:01 03/03/2019 
// Design Name: 
// Module Name:    decoder_38 
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
/* 3-8译码器模块 */
module decoder_38(
    input [2:0]pos,
    output reg [7:0]sel);
    
    always@ (pos) begin
        case (pos)
            3'b000: sel = 8'b11111110;
            3'b001: sel = 8'b11111101;
            3'b010: sel = 8'b11111011;
            3'b011: sel = 8'b11110111;
            3'b100: sel = 8'b11101111;
            3'b101: sel = 8'b11011111;
            3'b110: sel = 8'b10111111;
            3'b111: sel = 8'b01111111;
            default: sel = 8'b11111111;
        endcase
    end
    
endmodule
