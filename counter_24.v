/**
 * Content: 24 bit counter
 * Author: RuisongZhou
 * Date: 3/36/2019
 */

`timescale 1ns / 1ps


module counter_24(CP, EN, reset, CntH, CntL);
   input reset, EN, CP;
	output reg [3:0] CntH, CntL;
    always @ (posedge CP or posedge reset) begin
	 
		if (reset)
			{CntH, CntL} <= 8'h00;
		else if (~EN)
		    {CntH, CntL} <= {CntH, CntL};
			 
		else if ((CntH>2)||(CntL > 9)||((CntH==2)&&(CntL >=3)))
            {CntH, CntL}  <= 8'h00;
		else if (CntH == 2 && CntL < 3) begin
            CntH <= CntH;
        	CntL <= CntL + 1'b1;
		end
		else if (CntL == 9) begin
			CntH <= CntH + 1'b1;
            CntL <= 4'b0000;
		end
		else begin
			CntH <= CntH;
            CntL <= CntL + 1;
		end
	end

endmodule //counter_24
