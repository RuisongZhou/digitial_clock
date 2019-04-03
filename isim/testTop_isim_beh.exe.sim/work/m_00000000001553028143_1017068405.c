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
static const char *ng0 = "F:/FPGAcode/digital_clock/display_driver.v";
static int ng1[] = {10, 0};
static int ng2[] = {1, 0};
static int ng3[] = {12, 0};
static int ng4[] = {6, 0};
static int ng5[] = {0, 0};
static unsigned int ng6[] = {0U, 0U};
static unsigned int ng7[] = {1U, 0U};
static unsigned int ng8[] = {2U, 0U};
static unsigned int ng9[] = {3U, 0U};
static unsigned int ng10[] = {4U, 0U};
static unsigned int ng11[] = {255U, 0U};
static unsigned int ng12[] = {5U, 0U};
static unsigned int ng13[] = {6U, 0U};



static void Always_57_0(char *t0)
{
    char t4[8];
    char t29[8];
    char t40[8];
    char t41[8];
    char t51[8];
    char t90[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t30;
    char *t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    char *t42;
    char *t43;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;
    char *t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    int t72;
    int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    char *t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    char *t86;
    char *t87;
    char *t88;
    char *t89;
    char *t91;

LAB0:    t1 = (t0 + 4768U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 5336);
    *((int *)t2) = 1;
    t3 = (t0 + 4800);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(57, ng0);

LAB5:    xsi_set_current_line(58, ng0);
    t5 = (t0 + 1208U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t5) == 0)
        goto LAB6;

LAB8:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB9:    t13 = (t4 + 4);
    t14 = (t6 + 4);
    t15 = *((unsigned int *)t6);
    t16 = (~(t15));
    *((unsigned int *)t4) = t16;
    *((unsigned int *)t13) = 0;
    if (*((unsigned int *)t14) != 0)
        goto LAB11;

LAB10:    t21 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t21 & 1U);
    t22 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t22 & 1U);
    t23 = (t4 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t4);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB12;

LAB13:    xsi_set_current_line(75, ng0);

LAB44:    xsi_set_current_line(76, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 4);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 4);
    *((unsigned int *)t2) = t10;
    t11 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t11 & 15U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 15U);
    t6 = (t0 + 2888);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 4);
    xsi_set_current_line(77, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 0);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 0);
    *((unsigned int *)t2) = t10;
    t11 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t11 & 15U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 15U);
    t6 = (t0 + 3048);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 4);
    xsi_set_current_line(78, ng0);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 4);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 4);
    *((unsigned int *)t2) = t10;
    t11 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t11 & 15U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 15U);
    t6 = (t0 + 3208);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 4);
    xsi_set_current_line(79, ng0);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 0);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 0);
    *((unsigned int *)t2) = t10;
    t11 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t11 & 15U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 15U);
    t6 = (t0 + 3368);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 4);

LAB14:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB11:    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t14);
    *((unsigned int *)t4) = (t17 | t18);
    t19 = *((unsigned int *)t13);
    t20 = *((unsigned int *)t14);
    *((unsigned int *)t13) = (t19 | t20);
    goto LAB10;

LAB12:    xsi_set_current_line(58, ng0);

LAB15:    xsi_set_current_line(59, ng0);
    t30 = (t0 + 1368U);
    t31 = *((char **)t30);
    memset(t29, 0, 8);
    t30 = (t29 + 4);
    t32 = (t31 + 4);
    t33 = *((unsigned int *)t31);
    t34 = (t33 >> 4);
    *((unsigned int *)t29) = t34;
    t35 = *((unsigned int *)t32);
    t36 = (t35 >> 4);
    *((unsigned int *)t30) = t36;
    t37 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t37 & 15U);
    t38 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t38 & 15U);
    t39 = ((char*)((ng1)));
    memset(t40, 0, 8);
    xsi_vlog_unsigned_multiply(t40, 32, t29, 32, t39, 32);
    t42 = (t0 + 1368U);
    t43 = *((char **)t42);
    memset(t41, 0, 8);
    t42 = (t41 + 4);
    t44 = (t43 + 4);
    t45 = *((unsigned int *)t43);
    t46 = (t45 >> 0);
    *((unsigned int *)t41) = t46;
    t47 = *((unsigned int *)t44);
    t48 = (t47 >> 0);
    *((unsigned int *)t42) = t48;
    t49 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t49 & 15U);
    t50 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t50 & 15U);
    memset(t51, 0, 8);
    xsi_vlog_unsigned_add(t51, 32, t40, 32, t41, 32);
    t52 = (t0 + 3848);
    xsi_vlogvar_assign_value(t52, t51, 0, 0, 6);
    xsi_set_current_line(61, ng0);
    t2 = (t0 + 2168U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t4, 0, 8);
    t5 = (t3 + 4);
    t6 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t6);
    t15 = (t10 ^ t11);
    t16 = (t9 | t15);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t6);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB19;

LAB16:    if (t19 != 0)
        goto LAB18;

LAB17:    *((unsigned int *)t4) = 1;

LAB19:    memset(t29, 0, 8);
    t13 = (t4 + 4);
    t22 = *((unsigned int *)t13);
    t24 = (~(t22));
    t25 = *((unsigned int *)t4);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB20;

LAB21:    if (*((unsigned int *)t13) != 0)
        goto LAB22;

LAB23:    t23 = (t29 + 4);
    t28 = *((unsigned int *)t29);
    t33 = *((unsigned int *)t23);
    t34 = (t28 || t33);
    if (t34 > 0)
        goto LAB24;

LAB25:    memcpy(t51, t29, 8);

LAB26:    t80 = (t51 + 4);
    t81 = *((unsigned int *)t80);
    t82 = (~(t81));
    t83 = *((unsigned int *)t51);
    t84 = (t83 & t82);
    t85 = (t84 != 0);
    if (t85 > 0)
        goto LAB39;

LAB40:    xsi_set_current_line(66, ng0);

LAB43:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 4);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 4);
    *((unsigned int *)t2) = t10;
    t11 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t11 & 15U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 15U);
    t6 = (t0 + 2888);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 4);
    xsi_set_current_line(68, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 0);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 0);
    *((unsigned int *)t2) = t10;
    t11 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t11 & 15U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 15U);
    t6 = (t0 + 3048);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 4);

LAB41:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 4);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 4);
    *((unsigned int *)t2) = t10;
    t11 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t11 & 15U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 15U);
    t6 = (t0 + 3208);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 4);
    xsi_set_current_line(71, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 0);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 0);
    *((unsigned int *)t2) = t10;
    t11 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t11 & 15U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 15U);
    t6 = (t0 + 3368);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 4);
    xsi_set_current_line(72, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 4);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 4);
    *((unsigned int *)t2) = t10;
    t11 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t11 & 15U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 15U);
    t6 = (t0 + 3528);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 4);
    xsi_set_current_line(73, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 0);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 0);
    *((unsigned int *)t2) = t10;
    t11 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t11 & 15U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 15U);
    t6 = (t0 + 3688);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 4);
    goto LAB14;

LAB18:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB19;

LAB20:    *((unsigned int *)t29) = 1;
    goto LAB23;

LAB22:    t14 = (t29 + 4);
    *((unsigned int *)t29) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB23;

LAB24:    t30 = (t0 + 3848);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    t39 = ((char*)((ng3)));
    memset(t40, 0, 8);
    t42 = (t32 + 4);
    if (*((unsigned int *)t42) != 0)
        goto LAB28;

LAB27:    t43 = (t39 + 4);
    if (*((unsigned int *)t43) != 0)
        goto LAB28;

LAB31:    if (*((unsigned int *)t32) > *((unsigned int *)t39))
        goto LAB29;

LAB30:    memset(t41, 0, 8);
    t52 = (t40 + 4);
    t35 = *((unsigned int *)t52);
    t36 = (~(t35));
    t37 = *((unsigned int *)t40);
    t38 = (t37 & t36);
    t45 = (t38 & 1U);
    if (t45 != 0)
        goto LAB32;

LAB33:    if (*((unsigned int *)t52) != 0)
        goto LAB34;

LAB35:    t46 = *((unsigned int *)t29);
    t47 = *((unsigned int *)t41);
    t48 = (t46 & t47);
    *((unsigned int *)t51) = t48;
    t54 = (t29 + 4);
    t55 = (t41 + 4);
    t56 = (t51 + 4);
    t49 = *((unsigned int *)t54);
    t50 = *((unsigned int *)t55);
    t57 = (t49 | t50);
    *((unsigned int *)t56) = t57;
    t58 = *((unsigned int *)t56);
    t59 = (t58 != 0);
    if (t59 == 1)
        goto LAB36;

LAB37:
LAB38:    goto LAB26;

LAB28:    t44 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t44) = 1;
    goto LAB30;

LAB29:    *((unsigned int *)t40) = 1;
    goto LAB30;

LAB32:    *((unsigned int *)t41) = 1;
    goto LAB35;

LAB34:    t53 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t53) = 1;
    goto LAB35;

LAB36:    t60 = *((unsigned int *)t51);
    t61 = *((unsigned int *)t56);
    *((unsigned int *)t51) = (t60 | t61);
    t62 = (t29 + 4);
    t63 = (t41 + 4);
    t64 = *((unsigned int *)t29);
    t65 = (~(t64));
    t66 = *((unsigned int *)t62);
    t67 = (~(t66));
    t68 = *((unsigned int *)t41);
    t69 = (~(t68));
    t70 = *((unsigned int *)t63);
    t71 = (~(t70));
    t72 = (t65 & t67);
    t73 = (t69 & t71);
    t74 = (~(t72));
    t75 = (~(t73));
    t76 = *((unsigned int *)t56);
    *((unsigned int *)t56) = (t76 & t74);
    t77 = *((unsigned int *)t56);
    *((unsigned int *)t56) = (t77 & t75);
    t78 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t78 & t74);
    t79 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t79 & t75);
    goto LAB38;

LAB39:    xsi_set_current_line(61, ng0);

LAB42:    xsi_set_current_line(62, ng0);
    t86 = (t0 + 3848);
    t87 = (t86 + 56U);
    t88 = *((char **)t87);
    t89 = ((char*)((ng3)));
    memset(t90, 0, 8);
    xsi_vlog_unsigned_minus(t90, 32, t88, 6, t89, 32);
    t91 = (t0 + 3848);
    xsi_vlogvar_assign_value(t91, t90, 0, 0, 6);
    xsi_set_current_line(63, ng0);
    t2 = (t0 + 3848);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng1)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_divide(t4, 32, t5, 6, t6, 32);
    t12 = (t0 + 2888);
    xsi_vlogvar_assign_value(t12, t4, 0, 0, 4);
    xsi_set_current_line(64, ng0);
    t2 = (t0 + 3848);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng1)));
    t12 = (t0 + 2888);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memset(t4, 0, 8);
    xsi_vlog_unsigned_multiply(t4, 32, t6, 32, t14, 4);
    memset(t29, 0, 8);
    xsi_vlog_unsigned_minus(t29, 32, t5, 6, t4, 32);
    t23 = (t0 + 3048);
    xsi_vlogvar_assign_value(t23, t29, 0, 0, 4);
    goto LAB41;

}

static void Always_83_1(char *t0)
{
    char t8[8];
    char t33[8];
    char t34[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
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
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    int t32;

LAB0:    t1 = (t0 + 5016U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(83, ng0);
    t2 = (t0 + 5352);
    *((int *)t2) = 1;
    t3 = (t0 + 5048);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(83, ng0);

LAB5:    xsi_set_current_line(84, ng0);
    t4 = (t0 + 2568);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng4)));
    memset(t8, 0, 8);
    t9 = (t6 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB9;

LAB6:    if (t20 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t8) = 1;

LAB9:    t24 = (t8 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB10;

LAB11:
LAB12:    xsi_set_current_line(88, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB14:    t5 = ((char*)((ng6)));
    t32 = xsi_vlog_unsigned_case_compare(t4, 3, t5, 3);
    if (t32 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng7)));
    t32 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t32 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng8)));
    t32 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t32 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng9)));
    t32 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t32 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng10)));
    t32 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t32 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng12)));
    t32 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t32 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng13)));
    t32 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t32 == 1)
        goto LAB27;

LAB28:
LAB30:
LAB29:    xsi_set_current_line(110, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB31:    xsi_set_current_line(112, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng2)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 32, t5, 3, t6, 32);
    t7 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t7, t8, 0, 0, 3, 0LL);
    goto LAB2;

LAB8:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(84, ng0);

LAB13:    xsi_set_current_line(85, ng0);
    t30 = ((char*)((ng5)));
    t31 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t31, t30, 0, 0, 3, 0LL);
    goto LAB12;

LAB15:    xsi_set_current_line(89, ng0);

LAB32:    xsi_set_current_line(90, ng0);
    t6 = (t0 + 2888);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    t10 = (t0 + 2728);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 4);
    goto LAB31;

LAB17:    xsi_set_current_line(92, ng0);

LAB33:    xsi_set_current_line(93, ng0);
    t3 = (t0 + 3048);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 2728);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 4);
    goto LAB31;

LAB19:    xsi_set_current_line(95, ng0);

LAB34:    xsi_set_current_line(96, ng0);
    t3 = (t0 + 3208);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 2728);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 4);
    goto LAB31;

LAB21:    xsi_set_current_line(98, ng0);

LAB35:    xsi_set_current_line(99, ng0);
    t3 = (t0 + 3368);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 2728);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 4);
    goto LAB31;

LAB23:    xsi_set_current_line(101, ng0);

LAB36:    xsi_set_current_line(102, ng0);
    t3 = (t0 + 1208U);
    t5 = *((char **)t3);
    memset(t33, 0, 8);
    t3 = (t5 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t5);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB37;

LAB38:    if (*((unsigned int *)t3) != 0)
        goto LAB39;

LAB40:    t7 = (t33 + 4);
    t16 = *((unsigned int *)t33);
    t17 = *((unsigned int *)t7);
    t18 = (t16 || t17);
    if (t18 > 0)
        goto LAB41;

LAB42:    t19 = *((unsigned int *)t33);
    t20 = (~(t19));
    t21 = *((unsigned int *)t7);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB43;

LAB44:    if (*((unsigned int *)t7) > 0)
        goto LAB45;

LAB46:    if (*((unsigned int *)t33) > 0)
        goto LAB47;

LAB48:    memcpy(t8, t34, 8);

LAB49:    t30 = (t0 + 2728);
    xsi_vlogvar_assign_value(t30, t8, 0, 0, 4);
    goto LAB31;

LAB25:    xsi_set_current_line(104, ng0);

LAB50:    xsi_set_current_line(105, ng0);
    t3 = (t0 + 1208U);
    t5 = *((char **)t3);
    memset(t33, 0, 8);
    t3 = (t5 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t5);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB51;

LAB52:    if (*((unsigned int *)t3) != 0)
        goto LAB53;

LAB54:    t7 = (t33 + 4);
    t16 = *((unsigned int *)t33);
    t17 = *((unsigned int *)t7);
    t18 = (t16 || t17);
    if (t18 > 0)
        goto LAB55;

LAB56:    t19 = *((unsigned int *)t33);
    t20 = (~(t19));
    t21 = *((unsigned int *)t7);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB57;

LAB58:    if (*((unsigned int *)t7) > 0)
        goto LAB59;

LAB60:    if (*((unsigned int *)t33) > 0)
        goto LAB61;

LAB62:    memcpy(t8, t34, 8);

LAB63:    t30 = (t0 + 2728);
    xsi_vlogvar_assign_value(t30, t8, 0, 0, 4);
    goto LAB31;

LAB27:    xsi_set_current_line(107, ng0);

LAB64:    xsi_set_current_line(108, ng0);
    t3 = ((char*)((ng11)));
    t5 = (t0 + 2728);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 4);
    goto LAB31;

LAB37:    *((unsigned int *)t33) = 1;
    goto LAB40;

LAB39:    t6 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB40;

LAB41:    t9 = ((char*)((ng11)));
    goto LAB42;

LAB43:    t10 = (t0 + 3528);
    t23 = (t10 + 56U);
    t24 = *((char **)t23);
    memcpy(t34, t24, 8);
    goto LAB44;

LAB45:    xsi_vlog_unsigned_bit_combine(t8, 8, t9, 8, t34, 8);
    goto LAB49;

LAB47:    memcpy(t8, t9, 8);
    goto LAB49;

LAB51:    *((unsigned int *)t33) = 1;
    goto LAB54;

LAB53:    t6 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB54;

LAB55:    t9 = ((char*)((ng11)));
    goto LAB56;

LAB57:    t10 = (t0 + 3688);
    t23 = (t10 + 56U);
    t24 = *((char **)t23);
    memcpy(t34, t24, 8);
    goto LAB58;

LAB59:    xsi_vlog_unsigned_bit_combine(t8, 8, t9, 8, t34, 8);
    goto LAB63;

LAB61:    memcpy(t8, t9, 8);
    goto LAB63;

}


extern void work_m_00000000001553028143_1017068405_init()
{
	static char *pe[] = {(void *)Always_57_0,(void *)Always_83_1};
	xsi_register_didat("work_m_00000000001553028143_1017068405", "isim/testTop_isim_beh.exe.sim/work/m_00000000001553028143_1017068405.didat");
	xsi_register_executes(pe);
}
