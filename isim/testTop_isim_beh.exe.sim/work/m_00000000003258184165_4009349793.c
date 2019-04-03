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
static const char *ng0 = "F:/FPGAcode/digital_clock/seven_seg_driver.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {192U, 0U};
static unsigned int ng3[] = {64U, 0U};
static int ng4[] = {1, 0};
static unsigned int ng5[] = {249U, 0U};
static unsigned int ng6[] = {121U, 0U};
static int ng7[] = {2, 0};
static unsigned int ng8[] = {164U, 0U};
static unsigned int ng9[] = {36U, 0U};
static int ng10[] = {3, 0};
static unsigned int ng11[] = {176U, 0U};
static unsigned int ng12[] = {48U, 0U};
static int ng13[] = {4, 0};
static unsigned int ng14[] = {153U, 0U};
static unsigned int ng15[] = {25U, 0U};
static int ng16[] = {5, 0};
static unsigned int ng17[] = {146U, 0U};
static unsigned int ng18[] = {18U, 0U};
static int ng19[] = {6, 0};
static unsigned int ng20[] = {130U, 0U};
static unsigned int ng21[] = {2U, 0U};
static int ng22[] = {7, 0};
static unsigned int ng23[] = {248U, 0U};
static unsigned int ng24[] = {120U, 0U};
static int ng25[] = {8, 0};
static unsigned int ng26[] = {128U, 0U};
static unsigned int ng27[] = {0U, 0U};
static int ng28[] = {9, 0};
static unsigned int ng29[] = {144U, 0U};
static unsigned int ng30[] = {16U, 0U};
static int ng31[] = {10, 0};
static unsigned int ng32[] = {137U, 0U};
static int ng33[] = {11, 0};
static unsigned int ng34[] = {134U, 0U};
static int ng35[] = {12, 0};
static unsigned int ng36[] = {199U, 0U};
static int ng37[] = {13, 0};
static unsigned int ng38[] = {255U, 0U};



static void Always_44_0(char *t0)
{
    char t9[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
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
    unsigned int t23;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;

LAB0:    t1 = (t0 + 2528U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 2848);
    *((int *)t2) = 1;
    t3 = (t0 + 2560);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(44, ng0);

LAB5:    xsi_set_current_line(45, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t4, 32);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng10)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng13)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng16)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng19)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t6 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng22)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t6 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng25)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t6 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng28)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t6 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng31)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t6 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng33)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t6 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng35)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t6 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng37)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t6 == 1)
        goto LAB33;

LAB34:
LAB36:
LAB35:    xsi_set_current_line(126, ng0);

LAB122:    xsi_set_current_line(127, ng0);
    t2 = ((char*)((ng38)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);

LAB37:    goto LAB2;

LAB7:    xsi_set_current_line(46, ng0);

LAB38:    xsi_set_current_line(47, ng0);
    t7 = (t0 + 1208U);
    t8 = *((char **)t7);
    t7 = ((char*)((ng1)));
    memset(t9, 0, 8);
    t10 = (t8 + 4);
    t11 = (t7 + 4);
    t12 = *((unsigned int *)t8);
    t13 = *((unsigned int *)t7);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t10);
    t16 = *((unsigned int *)t11);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t11);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB42;

LAB39:    if (t21 != 0)
        goto LAB41;

LAB40:    *((unsigned int *)t9) = 1;

LAB42:    t25 = (t9 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t9);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB43;

LAB44:    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);

LAB45:    goto LAB37;

LAB9:    xsi_set_current_line(52, ng0);

LAB46:    xsi_set_current_line(53, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng1)));
    memset(t9, 0, 8);
    t7 = (t4 + 4);
    t8 = (t3 + 4);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t3);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t7);
    t16 = *((unsigned int *)t8);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t7);
    t20 = *((unsigned int *)t8);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB50;

LAB47:    if (t21 != 0)
        goto LAB49;

LAB48:    *((unsigned int *)t9) = 1;

LAB50:    t11 = (t9 + 4);
    t26 = *((unsigned int *)t11);
    t27 = (~(t26));
    t28 = *((unsigned int *)t9);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB51;

LAB52:    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);

LAB53:    goto LAB37;

LAB11:    xsi_set_current_line(58, ng0);

LAB54:    xsi_set_current_line(59, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng1)));
    memset(t9, 0, 8);
    t7 = (t4 + 4);
    t8 = (t3 + 4);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t3);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t7);
    t16 = *((unsigned int *)t8);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t7);
    t20 = *((unsigned int *)t8);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB58;

LAB55:    if (t21 != 0)
        goto LAB57;

LAB56:    *((unsigned int *)t9) = 1;

LAB58:    t11 = (t9 + 4);
    t26 = *((unsigned int *)t11);
    t27 = (~(t26));
    t28 = *((unsigned int *)t9);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB59;

LAB60:    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);

LAB61:    goto LAB37;

LAB13:    xsi_set_current_line(64, ng0);

LAB62:    xsi_set_current_line(65, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng1)));
    memset(t9, 0, 8);
    t7 = (t4 + 4);
    t8 = (t3 + 4);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t3);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t7);
    t16 = *((unsigned int *)t8);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t7);
    t20 = *((unsigned int *)t8);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB66;

LAB63:    if (t21 != 0)
        goto LAB65;

LAB64:    *((unsigned int *)t9) = 1;

LAB66:    t11 = (t9 + 4);
    t26 = *((unsigned int *)t11);
    t27 = (~(t26));
    t28 = *((unsigned int *)t9);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB67;

LAB68:    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);

LAB69:    goto LAB37;

LAB15:    xsi_set_current_line(70, ng0);

LAB70:    xsi_set_current_line(71, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng1)));
    memset(t9, 0, 8);
    t7 = (t4 + 4);
    t8 = (t3 + 4);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t3);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t7);
    t16 = *((unsigned int *)t8);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t7);
    t20 = *((unsigned int *)t8);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB74;

LAB71:    if (t21 != 0)
        goto LAB73;

LAB72:    *((unsigned int *)t9) = 1;

LAB74:    t11 = (t9 + 4);
    t26 = *((unsigned int *)t11);
    t27 = (~(t26));
    t28 = *((unsigned int *)t9);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB75;

LAB76:    xsi_set_current_line(74, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);

LAB77:    goto LAB37;

LAB17:    xsi_set_current_line(76, ng0);

LAB78:    xsi_set_current_line(77, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng1)));
    memset(t9, 0, 8);
    t7 = (t4 + 4);
    t8 = (t3 + 4);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t3);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t7);
    t16 = *((unsigned int *)t8);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t7);
    t20 = *((unsigned int *)t8);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB82;

LAB79:    if (t21 != 0)
        goto LAB81;

LAB80:    *((unsigned int *)t9) = 1;

LAB82:    t11 = (t9 + 4);
    t26 = *((unsigned int *)t11);
    t27 = (~(t26));
    t28 = *((unsigned int *)t9);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB83;

LAB84:    xsi_set_current_line(80, ng0);
    t2 = ((char*)((ng18)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);

LAB85:    goto LAB37;

LAB19:    xsi_set_current_line(82, ng0);

LAB86:    xsi_set_current_line(83, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng1)));
    memset(t9, 0, 8);
    t7 = (t4 + 4);
    t8 = (t3 + 4);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t3);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t7);
    t16 = *((unsigned int *)t8);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t7);
    t20 = *((unsigned int *)t8);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB90;

LAB87:    if (t21 != 0)
        goto LAB89;

LAB88:    *((unsigned int *)t9) = 1;

LAB90:    t11 = (t9 + 4);
    t26 = *((unsigned int *)t11);
    t27 = (~(t26));
    t28 = *((unsigned int *)t9);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB91;

LAB92:    xsi_set_current_line(86, ng0);
    t2 = ((char*)((ng21)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);

LAB93:    goto LAB37;

LAB21:    xsi_set_current_line(88, ng0);

LAB94:    xsi_set_current_line(89, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng1)));
    memset(t9, 0, 8);
    t7 = (t4 + 4);
    t8 = (t3 + 4);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t3);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t7);
    t16 = *((unsigned int *)t8);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t7);
    t20 = *((unsigned int *)t8);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB98;

LAB95:    if (t21 != 0)
        goto LAB97;

LAB96:    *((unsigned int *)t9) = 1;

LAB98:    t11 = (t9 + 4);
    t26 = *((unsigned int *)t11);
    t27 = (~(t26));
    t28 = *((unsigned int *)t9);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB99;

LAB100:    xsi_set_current_line(92, ng0);
    t2 = ((char*)((ng24)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);

LAB101:    goto LAB37;

LAB23:    xsi_set_current_line(94, ng0);

LAB102:    xsi_set_current_line(95, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng1)));
    memset(t9, 0, 8);
    t7 = (t4 + 4);
    t8 = (t3 + 4);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t3);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t7);
    t16 = *((unsigned int *)t8);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t7);
    t20 = *((unsigned int *)t8);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB106;

LAB103:    if (t21 != 0)
        goto LAB105;

LAB104:    *((unsigned int *)t9) = 1;

LAB106:    t11 = (t9 + 4);
    t26 = *((unsigned int *)t11);
    t27 = (~(t26));
    t28 = *((unsigned int *)t9);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB107;

LAB108:    xsi_set_current_line(98, ng0);
    t2 = ((char*)((ng27)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);

LAB109:    goto LAB37;

LAB25:    xsi_set_current_line(100, ng0);

LAB110:    xsi_set_current_line(101, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng1)));
    memset(t9, 0, 8);
    t7 = (t4 + 4);
    t8 = (t3 + 4);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t3);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t7);
    t16 = *((unsigned int *)t8);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t7);
    t20 = *((unsigned int *)t8);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB114;

LAB111:    if (t21 != 0)
        goto LAB113;

LAB112:    *((unsigned int *)t9) = 1;

LAB114:    t11 = (t9 + 4);
    t26 = *((unsigned int *)t11);
    t27 = (~(t26));
    t28 = *((unsigned int *)t9);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB115;

LAB116:    xsi_set_current_line(104, ng0);
    t2 = ((char*)((ng30)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);

LAB117:    goto LAB37;

LAB27:    xsi_set_current_line(106, ng0);

LAB118:    xsi_set_current_line(108, ng0);
    t3 = ((char*)((ng32)));
    t4 = (t0 + 1608);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    goto LAB37;

LAB29:    xsi_set_current_line(111, ng0);

LAB119:    xsi_set_current_line(113, ng0);
    t3 = ((char*)((ng34)));
    t4 = (t0 + 1608);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    goto LAB37;

LAB31:    xsi_set_current_line(116, ng0);

LAB120:    xsi_set_current_line(118, ng0);
    t3 = ((char*)((ng36)));
    t4 = (t0 + 1608);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    goto LAB37;

LAB33:    xsi_set_current_line(122, ng0);

LAB121:    xsi_set_current_line(124, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 1608);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    goto LAB37;

LAB41:    t24 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB42;

LAB43:    xsi_set_current_line(48, ng0);
    t31 = ((char*)((ng2)));
    t32 = (t0 + 1608);
    xsi_vlogvar_assign_value(t32, t31, 0, 0, 8);
    goto LAB45;

LAB49:    t10 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB50;

LAB51:    xsi_set_current_line(54, ng0);
    t24 = ((char*)((ng5)));
    t25 = (t0 + 1608);
    xsi_vlogvar_assign_value(t25, t24, 0, 0, 8);
    goto LAB53;

LAB57:    t10 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB58;

LAB59:    xsi_set_current_line(60, ng0);
    t24 = ((char*)((ng8)));
    t25 = (t0 + 1608);
    xsi_vlogvar_assign_value(t25, t24, 0, 0, 8);
    goto LAB61;

LAB65:    t10 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB66;

LAB67:    xsi_set_current_line(66, ng0);
    t24 = ((char*)((ng11)));
    t25 = (t0 + 1608);
    xsi_vlogvar_assign_value(t25, t24, 0, 0, 8);
    goto LAB69;

LAB73:    t10 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB74;

LAB75:    xsi_set_current_line(72, ng0);
    t24 = ((char*)((ng14)));
    t25 = (t0 + 1608);
    xsi_vlogvar_assign_value(t25, t24, 0, 0, 8);
    goto LAB77;

LAB81:    t10 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB82;

LAB83:    xsi_set_current_line(78, ng0);
    t24 = ((char*)((ng17)));
    t25 = (t0 + 1608);
    xsi_vlogvar_assign_value(t25, t24, 0, 0, 8);
    goto LAB85;

LAB89:    t10 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB90;

LAB91:    xsi_set_current_line(84, ng0);
    t24 = ((char*)((ng20)));
    t25 = (t0 + 1608);
    xsi_vlogvar_assign_value(t25, t24, 0, 0, 8);
    goto LAB93;

LAB97:    t10 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB98;

LAB99:    xsi_set_current_line(90, ng0);
    t24 = ((char*)((ng23)));
    t25 = (t0 + 1608);
    xsi_vlogvar_assign_value(t25, t24, 0, 0, 8);
    goto LAB101;

LAB105:    t10 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB106;

LAB107:    xsi_set_current_line(96, ng0);
    t24 = ((char*)((ng26)));
    t25 = (t0 + 1608);
    xsi_vlogvar_assign_value(t25, t24, 0, 0, 8);
    goto LAB109;

LAB113:    t10 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB114;

LAB115:    xsi_set_current_line(102, ng0);
    t24 = ((char*)((ng29)));
    t25 = (t0 + 1608);
    xsi_vlogvar_assign_value(t25, t24, 0, 0, 8);
    goto LAB117;

}


extern void work_m_00000000003258184165_4009349793_init()
{
	static char *pe[] = {(void *)Always_44_0};
	xsi_register_didat("work_m_00000000003258184165_4009349793", "isim/testTop_isim_beh.exe.sim/work/m_00000000003258184165_4009349793.didat");
	xsi_register_executes(pe);
}
