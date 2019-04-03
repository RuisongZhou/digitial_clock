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
static const char *ng0 = "F:/FPGAcode/digital_clock/clock.v";
static int ng1[] = {0, 0};
static int ng2[] = {9, 0};
static int ng3[] = {5, 0};
static int ng4[] = {119, 0};
static int ng5[] = {1, 0};



static void Initial_54_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(54, ng0);

LAB2:    xsi_set_current_line(55, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3048);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(56, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3208);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(57, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3368);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 11);

LAB1:    return;
}

static void Always_61_1(char *t0)
{
    char t6[8];
    char t20[8];
    char t42[8];
    char t45[8];
    char t56[8];
    char t72[8];
    char t80[8];
    char t112[8];
    char t124[8];
    char t137[8];
    char t153[8];
    char t161[8];
    char t193[8];
    char t205[8];
    char t218[8];
    char t234[8];
    char t242[8];
    char t284[8];
    char t294[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    unsigned int t43;
    unsigned int t44;
    char *t46;
    char *t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    char *t55;
    char *t57;
    char *t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    char *t71;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    char *t79;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    char *t84;
    char *t85;
    char *t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    char *t94;
    char *t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    int t104;
    int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    char *t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    char *t119;
    char *t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    char *t125;
    char *t126;
    char *t127;
    char *t128;
    char *t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    char *t136;
    char *t138;
    char *t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    unsigned int t151;
    char *t152;
    char *t154;
    unsigned int t155;
    unsigned int t156;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    char *t160;
    unsigned int t162;
    unsigned int t163;
    unsigned int t164;
    char *t165;
    char *t166;
    char *t167;
    unsigned int t168;
    unsigned int t169;
    unsigned int t170;
    unsigned int t171;
    unsigned int t172;
    unsigned int t173;
    unsigned int t174;
    char *t175;
    char *t176;
    unsigned int t177;
    unsigned int t178;
    unsigned int t179;
    unsigned int t180;
    unsigned int t181;
    unsigned int t182;
    unsigned int t183;
    unsigned int t184;
    int t185;
    int t186;
    unsigned int t187;
    unsigned int t188;
    unsigned int t189;
    unsigned int t190;
    unsigned int t191;
    unsigned int t192;
    char *t194;
    unsigned int t195;
    unsigned int t196;
    unsigned int t197;
    unsigned int t198;
    unsigned int t199;
    char *t200;
    char *t201;
    unsigned int t202;
    unsigned int t203;
    unsigned int t204;
    char *t206;
    char *t207;
    char *t208;
    char *t209;
    char *t210;
    unsigned int t211;
    unsigned int t212;
    unsigned int t213;
    unsigned int t214;
    unsigned int t215;
    unsigned int t216;
    char *t217;
    char *t219;
    char *t220;
    unsigned int t221;
    unsigned int t222;
    unsigned int t223;
    unsigned int t224;
    unsigned int t225;
    unsigned int t226;
    unsigned int t227;
    unsigned int t228;
    unsigned int t229;
    unsigned int t230;
    unsigned int t231;
    unsigned int t232;
    char *t233;
    char *t235;
    unsigned int t236;
    unsigned int t237;
    unsigned int t238;
    unsigned int t239;
    unsigned int t240;
    char *t241;
    unsigned int t243;
    unsigned int t244;
    unsigned int t245;
    char *t246;
    char *t247;
    char *t248;
    unsigned int t249;
    unsigned int t250;
    unsigned int t251;
    unsigned int t252;
    unsigned int t253;
    unsigned int t254;
    unsigned int t255;
    char *t256;
    char *t257;
    unsigned int t258;
    unsigned int t259;
    unsigned int t260;
    unsigned int t261;
    unsigned int t262;
    unsigned int t263;
    unsigned int t264;
    unsigned int t265;
    int t266;
    int t267;
    unsigned int t268;
    unsigned int t269;
    unsigned int t270;
    unsigned int t271;
    unsigned int t272;
    unsigned int t273;
    char *t274;
    unsigned int t275;
    unsigned int t276;
    unsigned int t277;
    unsigned int t278;
    unsigned int t279;
    char *t280;
    char *t281;
    char *t282;
    char *t283;
    char *t285;
    char *t286;
    char *t287;
    char *t288;
    unsigned int t289;
    unsigned int t290;
    unsigned int t291;
    unsigned int t292;
    unsigned int t293;
    char *t295;
    char *t296;
    char *t297;
    char *t298;
    unsigned int t299;
    unsigned int t300;
    unsigned int t301;
    unsigned int t302;
    unsigned int t303;
    char *t304;
    char *t305;
    char *t306;
    unsigned int t307;
    unsigned int t308;
    unsigned int t309;
    unsigned int t310;
    unsigned int t311;
    unsigned int t312;
    unsigned int t313;
    unsigned int t314;
    char *t315;

LAB0:    t1 = (t0 + 4536U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 5104);
    *((int *)t2) = 1;
    t3 = (t0 + 4568);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(61, ng0);

LAB5:    xsi_set_current_line(63, ng0);
    t4 = (t0 + 1688U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t4 = (t6 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 0);
    t13 = (t12 & 1);
    *((unsigned int *)t4) = t13;
    t14 = (t6 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (~(t15));
    t17 = *((unsigned int *)t6);
    t18 = (t17 & t16);
    t19 = (t18 != 0);
    if (t19 > 0)
        goto LAB6;

LAB7:
LAB8:    xsi_set_current_line(68, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 1);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 1);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    t5 = (t6 + 4);
    t15 = *((unsigned int *)t5);
    t16 = (~(t15));
    t17 = *((unsigned int *)t6);
    t18 = (t17 & t16);
    t19 = (t18 != 0);
    if (t19 > 0)
        goto LAB22;

LAB23:
LAB24:    xsi_set_current_line(73, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t7 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 0);
    *((unsigned int *)t6) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 0);
    *((unsigned int *)t5) = t11;
    t12 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t12 & 15U);
    t13 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t13 & 15U);
    t14 = ((char*)((ng2)));
    memset(t20, 0, 8);
    t21 = (t6 + 4);
    t22 = (t14 + 4);
    t15 = *((unsigned int *)t6);
    t16 = *((unsigned int *)t14);
    t17 = (t15 ^ t16);
    t18 = *((unsigned int *)t21);
    t19 = *((unsigned int *)t22);
    t25 = (t18 ^ t19);
    t26 = (t17 | t25);
    t27 = *((unsigned int *)t21);
    t28 = *((unsigned int *)t22);
    t29 = (t27 | t28);
    t33 = (~(t29));
    t34 = (t26 & t33);
    if (t34 != 0)
        goto LAB41;

LAB38:    if (t29 != 0)
        goto LAB40;

LAB39:    *((unsigned int *)t20) = 1;

LAB41:    memset(t42, 0, 8);
    t24 = (t20 + 4);
    t35 = *((unsigned int *)t24);
    t36 = (~(t35));
    t37 = *((unsigned int *)t20);
    t38 = (t37 & t36);
    t39 = (t38 & 1U);
    if (t39 != 0)
        goto LAB42;

LAB43:    if (*((unsigned int *)t24) != 0)
        goto LAB44;

LAB45:    t31 = (t42 + 4);
    t40 = *((unsigned int *)t42);
    t43 = *((unsigned int *)t31);
    t44 = (t40 || t43);
    if (t44 > 0)
        goto LAB46;

LAB47:    memcpy(t80, t42, 8);

LAB48:    memset(t112, 0, 8);
    t113 = (t80 + 4);
    t114 = *((unsigned int *)t113);
    t115 = (~(t114));
    t116 = *((unsigned int *)t80);
    t117 = (t116 & t115);
    t118 = (t117 & 1U);
    if (t118 != 0)
        goto LAB60;

LAB61:    if (*((unsigned int *)t113) != 0)
        goto LAB62;

LAB63:    t120 = (t112 + 4);
    t121 = *((unsigned int *)t112);
    t122 = *((unsigned int *)t120);
    t123 = (t121 || t122);
    if (t123 > 0)
        goto LAB64;

LAB65:    memcpy(t161, t112, 8);

LAB66:    memset(t193, 0, 8);
    t194 = (t161 + 4);
    t195 = *((unsigned int *)t194);
    t196 = (~(t195));
    t197 = *((unsigned int *)t161);
    t198 = (t197 & t196);
    t199 = (t198 & 1U);
    if (t199 != 0)
        goto LAB78;

LAB79:    if (*((unsigned int *)t194) != 0)
        goto LAB80;

LAB81:    t201 = (t193 + 4);
    t202 = *((unsigned int *)t193);
    t203 = *((unsigned int *)t201);
    t204 = (t202 || t203);
    if (t204 > 0)
        goto LAB82;

LAB83:    memcpy(t242, t193, 8);

LAB84:    t274 = (t242 + 4);
    t275 = *((unsigned int *)t274);
    t276 = (~(t275));
    t277 = *((unsigned int *)t242);
    t278 = (t277 & t276);
    t279 = (t278 != 0);
    if (t279 > 0)
        goto LAB96;

LAB97:
LAB98:    xsi_set_current_line(80, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t7 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 0);
    *((unsigned int *)t6) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 0);
    *((unsigned int *)t5) = t11;
    t12 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t12 & 15U);
    t13 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t13 & 15U);
    t14 = ((char*)((ng2)));
    memset(t20, 0, 8);
    t21 = (t6 + 4);
    t22 = (t14 + 4);
    t15 = *((unsigned int *)t6);
    t16 = *((unsigned int *)t14);
    t17 = (t15 ^ t16);
    t18 = *((unsigned int *)t21);
    t19 = *((unsigned int *)t22);
    t25 = (t18 ^ t19);
    t26 = (t17 | t25);
    t27 = *((unsigned int *)t21);
    t28 = *((unsigned int *)t22);
    t29 = (t27 | t28);
    t33 = (~(t29));
    t34 = (t26 & t33);
    if (t34 != 0)
        goto LAB124;

LAB121:    if (t29 != 0)
        goto LAB123;

LAB122:    *((unsigned int *)t20) = 1;

LAB124:    memset(t42, 0, 8);
    t24 = (t20 + 4);
    t35 = *((unsigned int *)t24);
    t36 = (~(t35));
    t37 = *((unsigned int *)t20);
    t38 = (t37 & t36);
    t39 = (t38 & 1U);
    if (t39 != 0)
        goto LAB125;

LAB126:    if (*((unsigned int *)t24) != 0)
        goto LAB127;

LAB128:    t31 = (t42 + 4);
    t40 = *((unsigned int *)t42);
    t43 = *((unsigned int *)t31);
    t44 = (t40 || t43);
    if (t44 > 0)
        goto LAB129;

LAB130:    memcpy(t80, t42, 8);

LAB131:    t113 = (t80 + 4);
    t114 = *((unsigned int *)t113);
    t115 = (~(t114));
    t116 = *((unsigned int *)t80);
    t117 = (t116 & t115);
    t118 = (t117 != 0);
    if (t118 > 0)
        goto LAB143;

LAB144:
LAB145:    xsi_set_current_line(88, ng0);
    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t4, 11, t5, 32);
    t7 = (t0 + 3368);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 11);
    goto LAB2;

LAB6:    xsi_set_current_line(63, ng0);

LAB9:    xsi_set_current_line(64, ng0);
    t21 = (t0 + 3048);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    memset(t20, 0, 8);
    t24 = (t23 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t23);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB13;

LAB11:    if (*((unsigned int *)t24) == 0)
        goto LAB10;

LAB12:    t30 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t30) = 1;

LAB13:    t31 = (t20 + 4);
    t32 = (t23 + 4);
    t33 = *((unsigned int *)t23);
    t34 = (~(t33));
    *((unsigned int *)t20) = t34;
    *((unsigned int *)t31) = 0;
    if (*((unsigned int *)t32) != 0)
        goto LAB15;

LAB14:    t39 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t39 & 1U);
    t40 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t40 & 1U);
    t41 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t41, t20, 0, 0, 1, 0LL);
    xsi_set_current_line(65, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t4 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (~(t8));
    t10 = *((unsigned int *)t4);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB19;

LAB17:    if (*((unsigned int *)t5) == 0)
        goto LAB16;

LAB18:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;

LAB19:    t14 = (t6 + 4);
    t21 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t15 = (~(t13));
    *((unsigned int *)t6) = t15;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t21) != 0)
        goto LAB21;

LAB20:    t25 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t25 & 1U);
    t26 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t26 & 1U);
    t22 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t22, t6, 0, 0, 1, 0LL);
    goto LAB8;

LAB10:    *((unsigned int *)t20) = 1;
    goto LAB13;

LAB15:    t35 = *((unsigned int *)t20);
    t36 = *((unsigned int *)t32);
    *((unsigned int *)t20) = (t35 | t36);
    t37 = *((unsigned int *)t31);
    t38 = *((unsigned int *)t32);
    *((unsigned int *)t31) = (t37 | t38);
    goto LAB14;

LAB16:    *((unsigned int *)t6) = 1;
    goto LAB19;

LAB21:    t16 = *((unsigned int *)t6);
    t17 = *((unsigned int *)t21);
    *((unsigned int *)t6) = (t16 | t17);
    t18 = *((unsigned int *)t14);
    t19 = *((unsigned int *)t21);
    *((unsigned int *)t14) = (t18 | t19);
    goto LAB20;

LAB22:    xsi_set_current_line(68, ng0);

LAB25:    xsi_set_current_line(69, ng0);
    t7 = (t0 + 3208);
    t14 = (t7 + 56U);
    t21 = *((char **)t14);
    memset(t20, 0, 8);
    t22 = (t21 + 4);
    t25 = *((unsigned int *)t22);
    t26 = (~(t25));
    t27 = *((unsigned int *)t21);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB29;

LAB27:    if (*((unsigned int *)t22) == 0)
        goto LAB26;

LAB28:    t23 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t23) = 1;

LAB29:    t24 = (t20 + 4);
    t30 = (t21 + 4);
    t33 = *((unsigned int *)t21);
    t34 = (~(t33));
    *((unsigned int *)t20) = t34;
    *((unsigned int *)t24) = 0;
    if (*((unsigned int *)t30) != 0)
        goto LAB31;

LAB30:    t39 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t39 & 1U);
    t40 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t40 & 1U);
    t31 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t31, t20, 0, 0, 1, 0LL);
    xsi_set_current_line(70, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t4 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (~(t8));
    t10 = *((unsigned int *)t4);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB35;

LAB33:    if (*((unsigned int *)t5) == 0)
        goto LAB32;

LAB34:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;

LAB35:    t14 = (t6 + 4);
    t21 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t15 = (~(t13));
    *((unsigned int *)t6) = t15;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t21) != 0)
        goto LAB37;

LAB36:    t25 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t25 & 1U);
    t26 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t26 & 1U);
    t22 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t22, t6, 0, 0, 1, 0LL);
    goto LAB24;

LAB26:    *((unsigned int *)t20) = 1;
    goto LAB29;

LAB31:    t35 = *((unsigned int *)t20);
    t36 = *((unsigned int *)t30);
    *((unsigned int *)t20) = (t35 | t36);
    t37 = *((unsigned int *)t24);
    t38 = *((unsigned int *)t30);
    *((unsigned int *)t24) = (t37 | t38);
    goto LAB30;

LAB32:    *((unsigned int *)t6) = 1;
    goto LAB35;

LAB37:    t16 = *((unsigned int *)t6);
    t17 = *((unsigned int *)t21);
    *((unsigned int *)t6) = (t16 | t17);
    t18 = *((unsigned int *)t14);
    t19 = *((unsigned int *)t21);
    *((unsigned int *)t14) = (t18 | t19);
    goto LAB36;

LAB40:    t23 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB41;

LAB42:    *((unsigned int *)t42) = 1;
    goto LAB45;

LAB44:    t30 = (t42 + 4);
    *((unsigned int *)t42) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB45;

LAB46:    t32 = (t0 + 2728);
    t41 = (t32 + 56U);
    t46 = *((char **)t41);
    memset(t45, 0, 8);
    t47 = (t45 + 4);
    t48 = (t46 + 4);
    t49 = *((unsigned int *)t46);
    t50 = (t49 >> 4);
    *((unsigned int *)t45) = t50;
    t51 = *((unsigned int *)t48);
    t52 = (t51 >> 4);
    *((unsigned int *)t47) = t52;
    t53 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t53 & 15U);
    t54 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t54 & 15U);
    t55 = ((char*)((ng3)));
    memset(t56, 0, 8);
    t57 = (t45 + 4);
    t58 = (t55 + 4);
    t59 = *((unsigned int *)t45);
    t60 = *((unsigned int *)t55);
    t61 = (t59 ^ t60);
    t62 = *((unsigned int *)t57);
    t63 = *((unsigned int *)t58);
    t64 = (t62 ^ t63);
    t65 = (t61 | t64);
    t66 = *((unsigned int *)t57);
    t67 = *((unsigned int *)t58);
    t68 = (t66 | t67);
    t69 = (~(t68));
    t70 = (t65 & t69);
    if (t70 != 0)
        goto LAB52;

LAB49:    if (t68 != 0)
        goto LAB51;

LAB50:    *((unsigned int *)t56) = 1;

LAB52:    memset(t72, 0, 8);
    t73 = (t56 + 4);
    t74 = *((unsigned int *)t73);
    t75 = (~(t74));
    t76 = *((unsigned int *)t56);
    t77 = (t76 & t75);
    t78 = (t77 & 1U);
    if (t78 != 0)
        goto LAB53;

LAB54:    if (*((unsigned int *)t73) != 0)
        goto LAB55;

LAB56:    t81 = *((unsigned int *)t42);
    t82 = *((unsigned int *)t72);
    t83 = (t81 & t82);
    *((unsigned int *)t80) = t83;
    t84 = (t42 + 4);
    t85 = (t72 + 4);
    t86 = (t80 + 4);
    t87 = *((unsigned int *)t84);
    t88 = *((unsigned int *)t85);
    t89 = (t87 | t88);
    *((unsigned int *)t86) = t89;
    t90 = *((unsigned int *)t86);
    t91 = (t90 != 0);
    if (t91 == 1)
        goto LAB57;

LAB58:
LAB59:    goto LAB48;

LAB51:    t71 = (t56 + 4);
    *((unsigned int *)t56) = 1;
    *((unsigned int *)t71) = 1;
    goto LAB52;

LAB53:    *((unsigned int *)t72) = 1;
    goto LAB56;

LAB55:    t79 = (t72 + 4);
    *((unsigned int *)t72) = 1;
    *((unsigned int *)t79) = 1;
    goto LAB56;

LAB57:    t92 = *((unsigned int *)t80);
    t93 = *((unsigned int *)t86);
    *((unsigned int *)t80) = (t92 | t93);
    t94 = (t42 + 4);
    t95 = (t72 + 4);
    t96 = *((unsigned int *)t42);
    t97 = (~(t96));
    t98 = *((unsigned int *)t94);
    t99 = (~(t98));
    t100 = *((unsigned int *)t72);
    t101 = (~(t100));
    t102 = *((unsigned int *)t95);
    t103 = (~(t102));
    t104 = (t97 & t99);
    t105 = (t101 & t103);
    t106 = (~(t104));
    t107 = (~(t105));
    t108 = *((unsigned int *)t86);
    *((unsigned int *)t86) = (t108 & t106);
    t109 = *((unsigned int *)t86);
    *((unsigned int *)t86) = (t109 & t107);
    t110 = *((unsigned int *)t80);
    *((unsigned int *)t80) = (t110 & t106);
    t111 = *((unsigned int *)t80);
    *((unsigned int *)t80) = (t111 & t107);
    goto LAB59;

LAB60:    *((unsigned int *)t112) = 1;
    goto LAB63;

LAB62:    t119 = (t112 + 4);
    *((unsigned int *)t112) = 1;
    *((unsigned int *)t119) = 1;
    goto LAB63;

LAB64:    t125 = (t0 + 2888);
    t126 = (t125 + 56U);
    t127 = *((char **)t126);
    memset(t124, 0, 8);
    t128 = (t124 + 4);
    t129 = (t127 + 4);
    t130 = *((unsigned int *)t127);
    t131 = (t130 >> 0);
    *((unsigned int *)t124) = t131;
    t132 = *((unsigned int *)t129);
    t133 = (t132 >> 0);
    *((unsigned int *)t128) = t133;
    t134 = *((unsigned int *)t124);
    *((unsigned int *)t124) = (t134 & 15U);
    t135 = *((unsigned int *)t128);
    *((unsigned int *)t128) = (t135 & 15U);
    t136 = ((char*)((ng2)));
    memset(t137, 0, 8);
    t138 = (t124 + 4);
    t139 = (t136 + 4);
    t140 = *((unsigned int *)t124);
    t141 = *((unsigned int *)t136);
    t142 = (t140 ^ t141);
    t143 = *((unsigned int *)t138);
    t144 = *((unsigned int *)t139);
    t145 = (t143 ^ t144);
    t146 = (t142 | t145);
    t147 = *((unsigned int *)t138);
    t148 = *((unsigned int *)t139);
    t149 = (t147 | t148);
    t150 = (~(t149));
    t151 = (t146 & t150);
    if (t151 != 0)
        goto LAB70;

LAB67:    if (t149 != 0)
        goto LAB69;

LAB68:    *((unsigned int *)t137) = 1;

LAB70:    memset(t153, 0, 8);
    t154 = (t137 + 4);
    t155 = *((unsigned int *)t154);
    t156 = (~(t155));
    t157 = *((unsigned int *)t137);
    t158 = (t157 & t156);
    t159 = (t158 & 1U);
    if (t159 != 0)
        goto LAB71;

LAB72:    if (*((unsigned int *)t154) != 0)
        goto LAB73;

LAB74:    t162 = *((unsigned int *)t112);
    t163 = *((unsigned int *)t153);
    t164 = (t162 & t163);
    *((unsigned int *)t161) = t164;
    t165 = (t112 + 4);
    t166 = (t153 + 4);
    t167 = (t161 + 4);
    t168 = *((unsigned int *)t165);
    t169 = *((unsigned int *)t166);
    t170 = (t168 | t169);
    *((unsigned int *)t167) = t170;
    t171 = *((unsigned int *)t167);
    t172 = (t171 != 0);
    if (t172 == 1)
        goto LAB75;

LAB76:
LAB77:    goto LAB66;

LAB69:    t152 = (t137 + 4);
    *((unsigned int *)t137) = 1;
    *((unsigned int *)t152) = 1;
    goto LAB70;

LAB71:    *((unsigned int *)t153) = 1;
    goto LAB74;

LAB73:    t160 = (t153 + 4);
    *((unsigned int *)t153) = 1;
    *((unsigned int *)t160) = 1;
    goto LAB74;

LAB75:    t173 = *((unsigned int *)t161);
    t174 = *((unsigned int *)t167);
    *((unsigned int *)t161) = (t173 | t174);
    t175 = (t112 + 4);
    t176 = (t153 + 4);
    t177 = *((unsigned int *)t112);
    t178 = (~(t177));
    t179 = *((unsigned int *)t175);
    t180 = (~(t179));
    t181 = *((unsigned int *)t153);
    t182 = (~(t181));
    t183 = *((unsigned int *)t176);
    t184 = (~(t183));
    t185 = (t178 & t180);
    t186 = (t182 & t184);
    t187 = (~(t185));
    t188 = (~(t186));
    t189 = *((unsigned int *)t167);
    *((unsigned int *)t167) = (t189 & t187);
    t190 = *((unsigned int *)t167);
    *((unsigned int *)t167) = (t190 & t188);
    t191 = *((unsigned int *)t161);
    *((unsigned int *)t161) = (t191 & t187);
    t192 = *((unsigned int *)t161);
    *((unsigned int *)t161) = (t192 & t188);
    goto LAB77;

LAB78:    *((unsigned int *)t193) = 1;
    goto LAB81;

LAB80:    t200 = (t193 + 4);
    *((unsigned int *)t193) = 1;
    *((unsigned int *)t200) = 1;
    goto LAB81;

LAB82:    t206 = (t0 + 2888);
    t207 = (t206 + 56U);
    t208 = *((char **)t207);
    memset(t205, 0, 8);
    t209 = (t205 + 4);
    t210 = (t208 + 4);
    t211 = *((unsigned int *)t208);
    t212 = (t211 >> 4);
    *((unsigned int *)t205) = t212;
    t213 = *((unsigned int *)t210);
    t214 = (t213 >> 4);
    *((unsigned int *)t209) = t214;
    t215 = *((unsigned int *)t205);
    *((unsigned int *)t205) = (t215 & 15U);
    t216 = *((unsigned int *)t209);
    *((unsigned int *)t209) = (t216 & 15U);
    t217 = ((char*)((ng3)));
    memset(t218, 0, 8);
    t219 = (t205 + 4);
    t220 = (t217 + 4);
    t221 = *((unsigned int *)t205);
    t222 = *((unsigned int *)t217);
    t223 = (t221 ^ t222);
    t224 = *((unsigned int *)t219);
    t225 = *((unsigned int *)t220);
    t226 = (t224 ^ t225);
    t227 = (t223 | t226);
    t228 = *((unsigned int *)t219);
    t229 = *((unsigned int *)t220);
    t230 = (t228 | t229);
    t231 = (~(t230));
    t232 = (t227 & t231);
    if (t232 != 0)
        goto LAB88;

LAB85:    if (t230 != 0)
        goto LAB87;

LAB86:    *((unsigned int *)t218) = 1;

LAB88:    memset(t234, 0, 8);
    t235 = (t218 + 4);
    t236 = *((unsigned int *)t235);
    t237 = (~(t236));
    t238 = *((unsigned int *)t218);
    t239 = (t238 & t237);
    t240 = (t239 & 1U);
    if (t240 != 0)
        goto LAB89;

LAB90:    if (*((unsigned int *)t235) != 0)
        goto LAB91;

LAB92:    t243 = *((unsigned int *)t193);
    t244 = *((unsigned int *)t234);
    t245 = (t243 & t244);
    *((unsigned int *)t242) = t245;
    t246 = (t193 + 4);
    t247 = (t234 + 4);
    t248 = (t242 + 4);
    t249 = *((unsigned int *)t246);
    t250 = *((unsigned int *)t247);
    t251 = (t249 | t250);
    *((unsigned int *)t248) = t251;
    t252 = *((unsigned int *)t248);
    t253 = (t252 != 0);
    if (t253 == 1)
        goto LAB93;

LAB94:
LAB95:    goto LAB84;

LAB87:    t233 = (t218 + 4);
    *((unsigned int *)t218) = 1;
    *((unsigned int *)t233) = 1;
    goto LAB88;

LAB89:    *((unsigned int *)t234) = 1;
    goto LAB92;

LAB91:    t241 = (t234 + 4);
    *((unsigned int *)t234) = 1;
    *((unsigned int *)t241) = 1;
    goto LAB92;

LAB93:    t254 = *((unsigned int *)t242);
    t255 = *((unsigned int *)t248);
    *((unsigned int *)t242) = (t254 | t255);
    t256 = (t193 + 4);
    t257 = (t234 + 4);
    t258 = *((unsigned int *)t193);
    t259 = (~(t258));
    t260 = *((unsigned int *)t256);
    t261 = (~(t260));
    t262 = *((unsigned int *)t234);
    t263 = (~(t262));
    t264 = *((unsigned int *)t257);
    t265 = (~(t264));
    t266 = (t259 & t261);
    t267 = (t263 & t265);
    t268 = (~(t266));
    t269 = (~(t267));
    t270 = *((unsigned int *)t248);
    *((unsigned int *)t248) = (t270 & t268);
    t271 = *((unsigned int *)t248);
    *((unsigned int *)t248) = (t271 & t269);
    t272 = *((unsigned int *)t242);
    *((unsigned int *)t242) = (t272 & t268);
    t273 = *((unsigned int *)t242);
    *((unsigned int *)t242) = (t273 & t269);
    goto LAB95;

LAB96:    xsi_set_current_line(73, ng0);

LAB99:    xsi_set_current_line(74, ng0);
    t280 = (t0 + 3368);
    t281 = (t280 + 56U);
    t282 = *((char **)t281);
    t283 = ((char*)((ng4)));
    memset(t284, 0, 8);
    t285 = (t282 + 4);
    if (*((unsigned int *)t285) != 0)
        goto LAB101;

LAB100:    t286 = (t283 + 4);
    if (*((unsigned int *)t286) != 0)
        goto LAB101;

LAB104:    if (*((unsigned int *)t282) < *((unsigned int *)t283))
        goto LAB103;

LAB102:    *((unsigned int *)t284) = 1;

LAB103:    t288 = (t284 + 4);
    t289 = *((unsigned int *)t288);
    t290 = (~(t289));
    t291 = *((unsigned int *)t284);
    t292 = (t291 & t290);
    t293 = (t292 != 0);
    if (t293 > 0)
        goto LAB105;

LAB106:
LAB107:    goto LAB98;

LAB101:    t287 = (t284 + 4);
    *((unsigned int *)t284) = 1;
    *((unsigned int *)t287) = 1;
    goto LAB103;

LAB105:    xsi_set_current_line(74, ng0);

LAB108:    xsi_set_current_line(75, ng0);
    t295 = (t0 + 3208);
    t296 = (t295 + 56U);
    t297 = *((char **)t296);
    memset(t294, 0, 8);
    t298 = (t297 + 4);
    t299 = *((unsigned int *)t298);
    t300 = (~(t299));
    t301 = *((unsigned int *)t297);
    t302 = (t301 & t300);
    t303 = (t302 & 1U);
    if (t303 != 0)
        goto LAB112;

LAB110:    if (*((unsigned int *)t298) == 0)
        goto LAB109;

LAB111:    t304 = (t294 + 4);
    *((unsigned int *)t294) = 1;
    *((unsigned int *)t304) = 1;

LAB112:    t305 = (t294 + 4);
    t306 = (t297 + 4);
    t307 = *((unsigned int *)t297);
    t308 = (~(t307));
    *((unsigned int *)t294) = t308;
    *((unsigned int *)t305) = 0;
    if (*((unsigned int *)t306) != 0)
        goto LAB114;

LAB113:    t313 = *((unsigned int *)t294);
    *((unsigned int *)t294) = (t313 & 1U);
    t314 = *((unsigned int *)t305);
    *((unsigned int *)t305) = (t314 & 1U);
    t315 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t315, t294, 0, 0, 1, 0LL);
    xsi_set_current_line(76, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t4 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (~(t8));
    t10 = *((unsigned int *)t4);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB118;

LAB116:    if (*((unsigned int *)t5) == 0)
        goto LAB115;

LAB117:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;

LAB118:    t14 = (t6 + 4);
    t21 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t15 = (~(t13));
    *((unsigned int *)t6) = t15;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t21) != 0)
        goto LAB120;

LAB119:    t25 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t25 & 1U);
    t26 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t26 & 1U);
    t22 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t22, t6, 0, 0, 1, 0LL);
    goto LAB107;

LAB109:    *((unsigned int *)t294) = 1;
    goto LAB112;

LAB114:    t309 = *((unsigned int *)t294);
    t310 = *((unsigned int *)t306);
    *((unsigned int *)t294) = (t309 | t310);
    t311 = *((unsigned int *)t305);
    t312 = *((unsigned int *)t306);
    *((unsigned int *)t305) = (t311 | t312);
    goto LAB113;

LAB115:    *((unsigned int *)t6) = 1;
    goto LAB118;

LAB120:    t16 = *((unsigned int *)t6);
    t17 = *((unsigned int *)t21);
    *((unsigned int *)t6) = (t16 | t17);
    t18 = *((unsigned int *)t14);
    t19 = *((unsigned int *)t21);
    *((unsigned int *)t14) = (t18 | t19);
    goto LAB119;

LAB123:    t23 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB124;

LAB125:    *((unsigned int *)t42) = 1;
    goto LAB128;

LAB127:    t30 = (t42 + 4);
    *((unsigned int *)t42) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB128;

LAB129:    t32 = (t0 + 2888);
    t41 = (t32 + 56U);
    t46 = *((char **)t41);
    memset(t45, 0, 8);
    t47 = (t45 + 4);
    t48 = (t46 + 4);
    t49 = *((unsigned int *)t46);
    t50 = (t49 >> 4);
    *((unsigned int *)t45) = t50;
    t51 = *((unsigned int *)t48);
    t52 = (t51 >> 4);
    *((unsigned int *)t47) = t52;
    t53 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t53 & 15U);
    t54 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t54 & 15U);
    t55 = ((char*)((ng3)));
    memset(t56, 0, 8);
    t57 = (t45 + 4);
    t58 = (t55 + 4);
    t59 = *((unsigned int *)t45);
    t60 = *((unsigned int *)t55);
    t61 = (t59 ^ t60);
    t62 = *((unsigned int *)t57);
    t63 = *((unsigned int *)t58);
    t64 = (t62 ^ t63);
    t65 = (t61 | t64);
    t66 = *((unsigned int *)t57);
    t67 = *((unsigned int *)t58);
    t68 = (t66 | t67);
    t69 = (~(t68));
    t70 = (t65 & t69);
    if (t70 != 0)
        goto LAB135;

LAB132:    if (t68 != 0)
        goto LAB134;

LAB133:    *((unsigned int *)t56) = 1;

LAB135:    memset(t72, 0, 8);
    t73 = (t56 + 4);
    t74 = *((unsigned int *)t73);
    t75 = (~(t74));
    t76 = *((unsigned int *)t56);
    t77 = (t76 & t75);
    t78 = (t77 & 1U);
    if (t78 != 0)
        goto LAB136;

LAB137:    if (*((unsigned int *)t73) != 0)
        goto LAB138;

LAB139:    t81 = *((unsigned int *)t42);
    t82 = *((unsigned int *)t72);
    t83 = (t81 & t82);
    *((unsigned int *)t80) = t83;
    t84 = (t42 + 4);
    t85 = (t72 + 4);
    t86 = (t80 + 4);
    t87 = *((unsigned int *)t84);
    t88 = *((unsigned int *)t85);
    t89 = (t87 | t88);
    *((unsigned int *)t86) = t89;
    t90 = *((unsigned int *)t86);
    t91 = (t90 != 0);
    if (t91 == 1)
        goto LAB140;

LAB141:
LAB142:    goto LAB131;

LAB134:    t71 = (t56 + 4);
    *((unsigned int *)t56) = 1;
    *((unsigned int *)t71) = 1;
    goto LAB135;

LAB136:    *((unsigned int *)t72) = 1;
    goto LAB139;

LAB138:    t79 = (t72 + 4);
    *((unsigned int *)t72) = 1;
    *((unsigned int *)t79) = 1;
    goto LAB139;

LAB140:    t92 = *((unsigned int *)t80);
    t93 = *((unsigned int *)t86);
    *((unsigned int *)t80) = (t92 | t93);
    t94 = (t42 + 4);
    t95 = (t72 + 4);
    t96 = *((unsigned int *)t42);
    t97 = (~(t96));
    t98 = *((unsigned int *)t94);
    t99 = (~(t98));
    t100 = *((unsigned int *)t72);
    t101 = (~(t100));
    t102 = *((unsigned int *)t95);
    t103 = (~(t102));
    t104 = (t97 & t99);
    t105 = (t101 & t103);
    t106 = (~(t104));
    t107 = (~(t105));
    t108 = *((unsigned int *)t86);
    *((unsigned int *)t86) = (t108 & t106);
    t109 = *((unsigned int *)t86);
    *((unsigned int *)t86) = (t109 & t107);
    t110 = *((unsigned int *)t80);
    *((unsigned int *)t80) = (t110 & t106);
    t111 = *((unsigned int *)t80);
    *((unsigned int *)t80) = (t111 & t107);
    goto LAB142;

LAB143:    xsi_set_current_line(80, ng0);

LAB146:    xsi_set_current_line(81, ng0);
    t119 = (t0 + 3368);
    t120 = (t119 + 56U);
    t125 = *((char **)t120);
    t126 = ((char*)((ng4)));
    memset(t112, 0, 8);
    t127 = (t125 + 4);
    if (*((unsigned int *)t127) != 0)
        goto LAB148;

LAB147:    t128 = (t126 + 4);
    if (*((unsigned int *)t128) != 0)
        goto LAB148;

LAB151:    if (*((unsigned int *)t125) < *((unsigned int *)t126))
        goto LAB150;

LAB149:    *((unsigned int *)t112) = 1;

LAB150:    t136 = (t112 + 4);
    t121 = *((unsigned int *)t136);
    t122 = (~(t121));
    t123 = *((unsigned int *)t112);
    t130 = (t123 & t122);
    t131 = (t130 != 0);
    if (t131 > 0)
        goto LAB152;

LAB153:
LAB154:    goto LAB145;

LAB148:    t129 = (t112 + 4);
    *((unsigned int *)t112) = 1;
    *((unsigned int *)t129) = 1;
    goto LAB150;

LAB152:    xsi_set_current_line(81, ng0);

LAB155:    xsi_set_current_line(82, ng0);
    t138 = (t0 + 3048);
    t139 = (t138 + 56U);
    t152 = *((char **)t139);
    memset(t124, 0, 8);
    t154 = (t152 + 4);
    t132 = *((unsigned int *)t154);
    t133 = (~(t132));
    t134 = *((unsigned int *)t152);
    t135 = (t134 & t133);
    t140 = (t135 & 1U);
    if (t140 != 0)
        goto LAB159;

LAB157:    if (*((unsigned int *)t154) == 0)
        goto LAB156;

LAB158:    t160 = (t124 + 4);
    *((unsigned int *)t124) = 1;
    *((unsigned int *)t160) = 1;

LAB159:    t165 = (t124 + 4);
    t166 = (t152 + 4);
    t141 = *((unsigned int *)t152);
    t142 = (~(t141));
    *((unsigned int *)t124) = t142;
    *((unsigned int *)t165) = 0;
    if (*((unsigned int *)t166) != 0)
        goto LAB161;

LAB160:    t147 = *((unsigned int *)t124);
    *((unsigned int *)t124) = (t147 & 1U);
    t148 = *((unsigned int *)t165);
    *((unsigned int *)t165) = (t148 & 1U);
    t167 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t167, t124, 0, 0, 1, 0LL);
    xsi_set_current_line(83, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t4 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (~(t8));
    t10 = *((unsigned int *)t4);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB165;

LAB163:    if (*((unsigned int *)t5) == 0)
        goto LAB162;

LAB164:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;

LAB165:    t14 = (t6 + 4);
    t21 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t15 = (~(t13));
    *((unsigned int *)t6) = t15;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t21) != 0)
        goto LAB167;

LAB166:    t25 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t25 & 1U);
    t26 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t26 & 1U);
    t22 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t22, t6, 0, 0, 1, 0LL);
    xsi_set_current_line(84, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3368);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 11);
    goto LAB154;

LAB156:    *((unsigned int *)t124) = 1;
    goto LAB159;

LAB161:    t143 = *((unsigned int *)t124);
    t144 = *((unsigned int *)t166);
    *((unsigned int *)t124) = (t143 | t144);
    t145 = *((unsigned int *)t165);
    t146 = *((unsigned int *)t166);
    *((unsigned int *)t165) = (t145 | t146);
    goto LAB160;

LAB162:    *((unsigned int *)t6) = 1;
    goto LAB165;

LAB167:    t16 = *((unsigned int *)t6);
    t17 = *((unsigned int *)t21);
    *((unsigned int *)t6) = (t16 | t17);
    t18 = *((unsigned int *)t14);
    t19 = *((unsigned int *)t21);
    *((unsigned int *)t14) = (t18 | t19);
    goto LAB166;

}

static void Always_98_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 4784U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(98, ng0);
    t2 = (t0 + 5120);
    *((int *)t2) = 1;
    t3 = (t0 + 4816);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(98, ng0);

LAB5:    xsi_set_current_line(99, ng0);
    t4 = (t0 + 1848U);
    t5 = *((char **)t4);
    t4 = (t0 + 2568);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 8);
    xsi_set_current_line(100, ng0);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    t2 = (t0 + 2728);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 8);
    xsi_set_current_line(101, ng0);
    t2 = (t0 + 2168U);
    t3 = *((char **)t2);
    t2 = (t0 + 2888);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 8);
    goto LAB2;

}


extern void work_m_00000000000788006088_2964965119_init()
{
	static char *pe[] = {(void *)Initial_54_0,(void *)Always_61_1,(void *)Always_98_2};
	xsi_register_didat("work_m_00000000000788006088_2964965119", "isim/testclock_isim_beh.exe.sim/work/m_00000000000788006088_2964965119.didat");
	xsi_register_executes(pe);
}
