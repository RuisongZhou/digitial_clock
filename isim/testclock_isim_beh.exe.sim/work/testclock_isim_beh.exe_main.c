/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000002022966974_0371345645_init();
    work_m_00000000002022966974_3916300681_init();
    work_m_00000000000381183218_1499717162_init();
    work_m_00000000003640615957_0979558199_init();
    work_m_00000000000788006088_2964965119_init();
    work_m_00000000000265464291_2894939827_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000000265464291_2894939827");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
