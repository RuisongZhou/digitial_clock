/**
 * Content: 10 bit counter
 * Author: RuisongZhou
 * Date: 3/36/2019
 */


module counter_10(CP, EN, reset, Cnt);
    input CP, EN, reset;
    output reg [3:0] Cnt;

    always @ (posedge CP or posedge reset) begin
        if (reset)
            Cnt <= 4'b0000;
        else if (~EN)
            Cnt <= Cnt;
        else if (Cnt == 4'b1001)
            Cnt <= 4'b0000;
        else
            Cnt <= Cnt + 1'b1;
    end
endmodule //counter_10
