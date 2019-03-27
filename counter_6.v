/**
 * Content: 6 bit counter
 * Author: RuisongZhou
 * Date: 3/36/2019
 */

`timescale 1ns / 1ps


module counter_6(CP, EN, reset, Cnt);
    input CP, EN, reset;
    output reg [3:0] Cnt;

    always @ (posedge CP or posedge reset) begin
        if (reset)
            Cnt <= 4'b0000;
        else if (~EN)
            Cnt <= Cnt;
        else if (Cnt == 4'b0101)
            Cnt <= 4'b0000;
        else
            Cnt <= Cnt + 1'b1;
    end
endmodule //counter_6
