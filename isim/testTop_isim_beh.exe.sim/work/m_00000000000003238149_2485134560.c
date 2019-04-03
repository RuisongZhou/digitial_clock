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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "F:/FPGAcode/digital_clock/calltime.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {0U, 0U};
static int ng3[] = {10, 0};
static int ng4[] = {1, 0};



static void Initial_37_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(37, ng0);

LAB2:    xsi_set_current_line(38, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1768);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
}

static void Always_41_1(char *t0)
{
    char t6[8];
    char t28[8];
    char t39[8];
    char t40[8];
    char t50[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t41;
    char *t42;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    char *t56;

LAB0:    t1 = (t0 + 3256U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 3576);
    *((int *)t2) = 1;
    t3 = (t0 + 3288);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(41, ng0);

LAB5:    xsi_set_current_line(42, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(53, ng0);

LAB30:    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);

LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(42, ng0);

LAB13:    xsi_set_current_line(43, ng0);
    t29 = (t0 + 1208U);
    t30 = *((char **)t29);
    memset(t28, 0, 8);
    t29 = (t28 + 4);
    t31 = (t30 + 4);
    t32 = *((unsigned int *)t30);
    t33 = (t32 >> 4);
    *((unsigned int *)t28) = t33;
    t34 = *((unsigned int *)t31);
    t35 = (t34 >> 4);
    *((unsigned int *)t29) = t35;
    t36 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t36 & 15U);
    t37 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t37 & 15U);
    t38 = ((char*)((ng3)));
    memset(t39, 0, 8);
    xsi_vlog_unsigned_multiply(t39, 32, t28, 32, t38, 32);
    t41 = (t0 + 1208U);
    t42 = *((char **)t41);
    memset(t40, 0, 8);
    t41 = (t40 + 4);
    t43 = (t42 + 4);
    t44 = *((unsigned int *)t42);
    t45 = (t44 >> 0);
    *((unsigned int *)t40) = t45;
    t46 = *((unsigned int *)t43);
    t47 = (t46 >> 0);
    *((unsigned int *)t41) = t47;
    t48 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t48 & 15U);
    t49 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t49 & 15U);
    memset(t50, 0, 8);
    xsi_vlog_unsigned_add(t50, 32, t39, 32, t40, 32);
    t51 = (t0 + 2088);
    xsi_vlogvar_assign_value(t51, t50, 0, 0, 8);
    xsi_set_current_line(44, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2088);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    t21 = (t0 + 2088);
    t22 = (t21 + 56U);
    t29 = *((char **)t22);
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 8, t8, 8, t29, 8);
    memset(t28, 0, 8);
    t30 = (t4 + 4);
    if (*((unsigned int *)t30) != 0)
        goto LAB15;

LAB14:    t31 = (t6 + 4);
    if (*((unsigned int *)t31) != 0)
        goto LAB15;

LAB18:    if (*((unsigned int *)t4) < *((unsigned int *)t6))
        goto LAB16;

LAB17:    t41 = (t28 + 4);
    t9 = *((unsigned int *)t41);
    t10 = (~(t9));
    t11 = *((unsigned int *)t28);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB19;

LAB20:    xsi_set_current_line(48, ng0);

LAB29:    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(50, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t4, 8, t5, 32);
    t7 = (t0 + 1928);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 8);

LAB21:    goto LAB12;

LAB15:    t38 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t38) = 1;
    goto LAB17;

LAB16:    *((unsigned int *)t28) = 1;
    goto LAB17;

LAB19:    xsi_set_current_line(44, ng0);

LAB22:    xsi_set_current_line(45, ng0);
    t42 = (t0 + 1768);
    t43 = (t42 + 56U);
    t51 = *((char **)t43);
    memset(t39, 0, 8);
    t52 = (t51 + 4);
    t14 = *((unsigned int *)t52);
    t15 = (~(t14));
    t16 = *((unsigned int *)t51);
    t17 = (t16 & t15);
    t18 = (t17 & 1U);
    if (t18 != 0)
        goto LAB26;

LAB24:    if (*((unsigned int *)t52) == 0)
        goto LAB23;

LAB25:    t53 = (t39 + 4);
    *((unsigned int *)t39) = 1;
    *((unsigned int *)t53) = 1;

LAB26:    t54 = (t39 + 4);
    t55 = (t51 + 4);
    t19 = *((unsigned int *)t51);
    t20 = (~(t19));
    *((unsigned int *)t39) = t20;
    *((unsigned int *)t54) = 0;
    if (*((unsigned int *)t55) != 0)
        goto LAB28;

LAB27:    t27 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t27 & 1U);
    t32 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t32 & 1U);
    t56 = (t0 + 1768);
    xsi_vlogvar_assign_value(t56, t39, 0, 0, 1);
    xsi_set_current_line(46, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t4, 8, t5, 32);
    t7 = (t0 + 1928);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 8);
    goto LAB21;

LAB23:    *((unsigned int *)t39) = 1;
    goto LAB26;

LAB28:    t23 = *((unsigned int *)t39);
    t24 = *((unsigned int *)t55);
    *((unsigned int *)t39) = (t23 | t24);
    t25 = *((unsigned int *)t54);
    t26 = *((unsigned int *)t55);
    *((unsigned int *)t54) = (t25 | t26);
    goto LAB27;

}


extern void work_m_00000000000003238149_2485134560_init()
{
	static char *pe[] = {(void *)Initial_37_0,(void *)Always_41_1};
	xsi_register_didat("work_m_00000000000003238149_2485134560", "isim/testTop_isim_beh.exe.sim/work/m_00000000000003238149_2485134560.didat");
	xsi_register_executes(pe);
}
