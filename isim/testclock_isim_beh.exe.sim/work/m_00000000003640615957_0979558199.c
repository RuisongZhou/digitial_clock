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
static const char *ng0 = "F:/FPGAcode/digital_clock/counter_24.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {2, 0};
static int ng3[] = {9, 0};
static int ng4[] = {3, 0};
static unsigned int ng5[] = {1U, 0U};
static int ng6[] = {1, 0};



static void Always_13_0(char *t0)
{
    char t14[8];
    char t28[8];
    char t36[8];
    char t40[8];
    char t43[8];
    char t67[8];
    char t84[8];
    char t100[8];
    char t116[8];
    char t120[8];
    char t128[8];
    char t160[8];
    char t168[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t13;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t37;
    char *t38;
    char *t39;
    char *t41;
    char *t42;
    char *t44;
    char *t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;
    char *t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    char *t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    char *t74;
    char *t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    char *t80;
    char *t81;
    char *t82;
    char *t83;
    char *t85;
    char *t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    char *t99;
    char *t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    char *t107;
    char *t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    char *t112;
    char *t113;
    char *t114;
    char *t115;
    char *t117;
    char *t118;
    char *t119;
    char *t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    char *t127;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    char *t132;
    char *t133;
    char *t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    char *t142;
    char *t143;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    unsigned int t151;
    int t152;
    int t153;
    unsigned int t154;
    unsigned int t155;
    unsigned int t156;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    char *t161;
    unsigned int t162;
    unsigned int t163;
    unsigned int t164;
    unsigned int t165;
    unsigned int t166;
    char *t167;
    unsigned int t169;
    unsigned int t170;
    unsigned int t171;
    char *t172;
    char *t173;
    char *t174;
    unsigned int t175;
    unsigned int t176;
    unsigned int t177;
    unsigned int t178;
    unsigned int t179;
    unsigned int t180;
    unsigned int t181;
    char *t182;
    char *t183;
    unsigned int t184;
    unsigned int t185;
    unsigned int t186;
    int t187;
    unsigned int t188;
    unsigned int t189;
    unsigned int t190;
    int t191;
    unsigned int t192;
    unsigned int t193;
    unsigned int t194;
    unsigned int t195;
    char *t196;
    unsigned int t197;
    unsigned int t198;
    unsigned int t199;
    unsigned int t200;
    unsigned int t201;
    char *t202;
    char *t203;
    char *t204;

LAB0:    t1 = (t0 + 2848U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(13, ng0);
    t2 = (t0 + 3168);
    *((int *)t2) = 1;
    t3 = (t0 + 2880);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(13, ng0);

LAB5:    xsi_set_current_line(15, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(17, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t14, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB12;

LAB10:    if (*((unsigned int *)t2) == 0)
        goto LAB9;

LAB11:    t4 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t4) = 1;

LAB12:    t5 = (t14 + 4);
    t11 = (t3 + 4);
    t15 = *((unsigned int *)t3);
    t16 = (~(t15));
    *((unsigned int *)t14) = t16;
    *((unsigned int *)t5) = 0;
    if (*((unsigned int *)t11) != 0)
        goto LAB14;

LAB13:    t21 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t21 & 1U);
    t22 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t22 & 1U);
    t12 = (t14 + 4);
    t23 = *((unsigned int *)t12);
    t24 = (~(t23));
    t25 = *((unsigned int *)t14);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB15;

LAB16:    xsi_set_current_line(20, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t14, 0, 8);
    t11 = (t4 + 4);
    if (*((unsigned int *)t11) != 0)
        goto LAB19;

LAB18:    t12 = (t5 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB19;

LAB22:    if (*((unsigned int *)t4) > *((unsigned int *)t5))
        goto LAB20;

LAB21:    memset(t28, 0, 8);
    t29 = (t14 + 4);
    t6 = *((unsigned int *)t29);
    t7 = (~(t6));
    t8 = *((unsigned int *)t14);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t29) != 0)
        goto LAB25;

LAB26:    t31 = (t28 + 4);
    t15 = *((unsigned int *)t28);
    t16 = (!(t15));
    t17 = *((unsigned int *)t31);
    t18 = (t16 || t17);
    if (t18 > 0)
        goto LAB27;

LAB28:    memcpy(t43, t28, 8);

LAB29:    memset(t67, 0, 8);
    t68 = (t43 + 4);
    t69 = *((unsigned int *)t68);
    t70 = (~(t69));
    t71 = *((unsigned int *)t43);
    t72 = (t71 & t70);
    t73 = (t72 & 1U);
    if (t73 != 0)
        goto LAB42;

LAB43:    if (*((unsigned int *)t68) != 0)
        goto LAB44;

LAB45:    t75 = (t67 + 4);
    t76 = *((unsigned int *)t67);
    t77 = (!(t76));
    t78 = *((unsigned int *)t75);
    t79 = (t77 || t78);
    if (t79 > 0)
        goto LAB46;

LAB47:    memcpy(t168, t67, 8);

LAB48:    t196 = (t168 + 4);
    t197 = *((unsigned int *)t196);
    t198 = (~(t197));
    t199 = *((unsigned int *)t168);
    t200 = (t199 & t198);
    t201 = (t200 != 0);
    if (t201 > 0)
        goto LAB79;

LAB80:    xsi_set_current_line(22, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t14, 0, 8);
    t11 = (t4 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t15 = (t9 ^ t10);
    t16 = (t8 | t15);
    t17 = *((unsigned int *)t11);
    t18 = *((unsigned int *)t12);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB85;

LAB82:    if (t19 != 0)
        goto LAB84;

LAB83:    *((unsigned int *)t14) = 1;

LAB85:    memset(t28, 0, 8);
    t29 = (t14 + 4);
    t22 = *((unsigned int *)t29);
    t23 = (~(t22));
    t24 = *((unsigned int *)t14);
    t25 = (t24 & t23);
    t26 = (t25 & 1U);
    if (t26 != 0)
        goto LAB86;

LAB87:    if (*((unsigned int *)t29) != 0)
        goto LAB88;

LAB89:    t31 = (t28 + 4);
    t27 = *((unsigned int *)t28);
    t47 = *((unsigned int *)t31);
    t48 = (t27 || t47);
    if (t48 > 0)
        goto LAB90;

LAB91:    memcpy(t43, t28, 8);

LAB92:    t68 = (t43 + 4);
    t93 = *((unsigned int *)t68);
    t94 = (~(t93));
    t95 = *((unsigned int *)t43);
    t96 = (t95 & t94);
    t97 = (t96 != 0);
    if (t97 > 0)
        goto LAB105;

LAB106:    xsi_set_current_line(26, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t14, 0, 8);
    t11 = (t4 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t15 = (t9 ^ t10);
    t16 = (t8 | t15);
    t17 = *((unsigned int *)t11);
    t18 = *((unsigned int *)t12);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB112;

LAB109:    if (t19 != 0)
        goto LAB111;

LAB110:    *((unsigned int *)t14) = 1;

LAB112:    t29 = (t14 + 4);
    t22 = *((unsigned int *)t29);
    t23 = (~(t22));
    t24 = *((unsigned int *)t14);
    t25 = (t24 & t23);
    t26 = (t25 != 0);
    if (t26 > 0)
        goto LAB113;

LAB114:    xsi_set_current_line(30, ng0);

LAB117:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 4, 0LL);
    xsi_set_current_line(32, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_add(t14, 32, t4, 4, t5, 32);
    t11 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t11, t14, 0, 0, 4, 0LL);

LAB115:
LAB107:
LAB81:
LAB17:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(16, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 4, 0LL);
    t13 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t13, t11, 4, 0, 4, 0LL);
    goto LAB8;

LAB9:    *((unsigned int *)t14) = 1;
    goto LAB12;

LAB14:    t17 = *((unsigned int *)t14);
    t18 = *((unsigned int *)t11);
    *((unsigned int *)t14) = (t17 | t18);
    t19 = *((unsigned int *)t5);
    t20 = *((unsigned int *)t11);
    *((unsigned int *)t5) = (t19 | t20);
    goto LAB13;

LAB15:    xsi_set_current_line(18, ng0);
    t13 = (t0 + 1928);
    t29 = (t13 + 56U);
    t30 = *((char **)t29);
    t31 = (t0 + 1768);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    xsi_vlogtype_concat(t28, 8, 8, 2U, t33, 4, t30, 4);
    t34 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t34, t28, 0, 0, 4, 0LL);
    t35 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t35, t28, 4, 0, 4, 0LL);
    goto LAB17;

LAB19:    t13 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB21;

LAB20:    *((unsigned int *)t14) = 1;
    goto LAB21;

LAB23:    *((unsigned int *)t28) = 1;
    goto LAB26;

LAB25:    t30 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB26;

LAB27:    t32 = (t0 + 1928);
    t33 = (t32 + 56U);
    t34 = *((char **)t33);
    t35 = ((char*)((ng3)));
    memset(t36, 0, 8);
    t37 = (t34 + 4);
    if (*((unsigned int *)t37) != 0)
        goto LAB31;

LAB30:    t38 = (t35 + 4);
    if (*((unsigned int *)t38) != 0)
        goto LAB31;

LAB34:    if (*((unsigned int *)t34) > *((unsigned int *)t35))
        goto LAB32;

LAB33:    memset(t40, 0, 8);
    t41 = (t36 + 4);
    t19 = *((unsigned int *)t41);
    t20 = (~(t19));
    t21 = *((unsigned int *)t36);
    t22 = (t21 & t20);
    t23 = (t22 & 1U);
    if (t23 != 0)
        goto LAB35;

LAB36:    if (*((unsigned int *)t41) != 0)
        goto LAB37;

LAB38:    t24 = *((unsigned int *)t28);
    t25 = *((unsigned int *)t40);
    t26 = (t24 | t25);
    *((unsigned int *)t43) = t26;
    t44 = (t28 + 4);
    t45 = (t40 + 4);
    t46 = (t43 + 4);
    t27 = *((unsigned int *)t44);
    t47 = *((unsigned int *)t45);
    t48 = (t27 | t47);
    *((unsigned int *)t46) = t48;
    t49 = *((unsigned int *)t46);
    t50 = (t49 != 0);
    if (t50 == 1)
        goto LAB39;

LAB40:
LAB41:    goto LAB29;

LAB31:    t39 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB33;

LAB32:    *((unsigned int *)t36) = 1;
    goto LAB33;

LAB35:    *((unsigned int *)t40) = 1;
    goto LAB38;

LAB37:    t42 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t42) = 1;
    goto LAB38;

LAB39:    t51 = *((unsigned int *)t43);
    t52 = *((unsigned int *)t46);
    *((unsigned int *)t43) = (t51 | t52);
    t53 = (t28 + 4);
    t54 = (t40 + 4);
    t55 = *((unsigned int *)t53);
    t56 = (~(t55));
    t57 = *((unsigned int *)t28);
    t58 = (t57 & t56);
    t59 = *((unsigned int *)t54);
    t60 = (~(t59));
    t61 = *((unsigned int *)t40);
    t62 = (t61 & t60);
    t63 = (~(t58));
    t64 = (~(t62));
    t65 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t65 & t63);
    t66 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t66 & t64);
    goto LAB41;

LAB42:    *((unsigned int *)t67) = 1;
    goto LAB45;

LAB44:    t74 = (t67 + 4);
    *((unsigned int *)t67) = 1;
    *((unsigned int *)t74) = 1;
    goto LAB45;

LAB46:    t80 = (t0 + 1768);
    t81 = (t80 + 56U);
    t82 = *((char **)t81);
    t83 = ((char*)((ng2)));
    memset(t84, 0, 8);
    t85 = (t82 + 4);
    t86 = (t83 + 4);
    t87 = *((unsigned int *)t82);
    t88 = *((unsigned int *)t83);
    t89 = (t87 ^ t88);
    t90 = *((unsigned int *)t85);
    t91 = *((unsigned int *)t86);
    t92 = (t90 ^ t91);
    t93 = (t89 | t92);
    t94 = *((unsigned int *)t85);
    t95 = *((unsigned int *)t86);
    t96 = (t94 | t95);
    t97 = (~(t96));
    t98 = (t93 & t97);
    if (t98 != 0)
        goto LAB52;

LAB49:    if (t96 != 0)
        goto LAB51;

LAB50:    *((unsigned int *)t84) = 1;

LAB52:    memset(t100, 0, 8);
    t101 = (t84 + 4);
    t102 = *((unsigned int *)t101);
    t103 = (~(t102));
    t104 = *((unsigned int *)t84);
    t105 = (t104 & t103);
    t106 = (t105 & 1U);
    if (t106 != 0)
        goto LAB53;

LAB54:    if (*((unsigned int *)t101) != 0)
        goto LAB55;

LAB56:    t108 = (t100 + 4);
    t109 = *((unsigned int *)t100);
    t110 = *((unsigned int *)t108);
    t111 = (t109 || t110);
    if (t111 > 0)
        goto LAB57;

LAB58:    memcpy(t128, t100, 8);

LAB59:    memset(t160, 0, 8);
    t161 = (t128 + 4);
    t162 = *((unsigned int *)t161);
    t163 = (~(t162));
    t164 = *((unsigned int *)t128);
    t165 = (t164 & t163);
    t166 = (t165 & 1U);
    if (t166 != 0)
        goto LAB72;

LAB73:    if (*((unsigned int *)t161) != 0)
        goto LAB74;

LAB75:    t169 = *((unsigned int *)t67);
    t170 = *((unsigned int *)t160);
    t171 = (t169 | t170);
    *((unsigned int *)t168) = t171;
    t172 = (t67 + 4);
    t173 = (t160 + 4);
    t174 = (t168 + 4);
    t175 = *((unsigned int *)t172);
    t176 = *((unsigned int *)t173);
    t177 = (t175 | t176);
    *((unsigned int *)t174) = t177;
    t178 = *((unsigned int *)t174);
    t179 = (t178 != 0);
    if (t179 == 1)
        goto LAB76;

LAB77:
LAB78:    goto LAB48;

LAB51:    t99 = (t84 + 4);
    *((unsigned int *)t84) = 1;
    *((unsigned int *)t99) = 1;
    goto LAB52;

LAB53:    *((unsigned int *)t100) = 1;
    goto LAB56;

LAB55:    t107 = (t100 + 4);
    *((unsigned int *)t100) = 1;
    *((unsigned int *)t107) = 1;
    goto LAB56;

LAB57:    t112 = (t0 + 1928);
    t113 = (t112 + 56U);
    t114 = *((char **)t113);
    t115 = ((char*)((ng4)));
    memset(t116, 0, 8);
    t117 = (t114 + 4);
    if (*((unsigned int *)t117) != 0)
        goto LAB61;

LAB60:    t118 = (t115 + 4);
    if (*((unsigned int *)t118) != 0)
        goto LAB61;

LAB64:    if (*((unsigned int *)t114) < *((unsigned int *)t115))
        goto LAB63;

LAB62:    *((unsigned int *)t116) = 1;

LAB63:    memset(t120, 0, 8);
    t121 = (t116 + 4);
    t122 = *((unsigned int *)t121);
    t123 = (~(t122));
    t124 = *((unsigned int *)t116);
    t125 = (t124 & t123);
    t126 = (t125 & 1U);
    if (t126 != 0)
        goto LAB65;

LAB66:    if (*((unsigned int *)t121) != 0)
        goto LAB67;

LAB68:    t129 = *((unsigned int *)t100);
    t130 = *((unsigned int *)t120);
    t131 = (t129 & t130);
    *((unsigned int *)t128) = t131;
    t132 = (t100 + 4);
    t133 = (t120 + 4);
    t134 = (t128 + 4);
    t135 = *((unsigned int *)t132);
    t136 = *((unsigned int *)t133);
    t137 = (t135 | t136);
    *((unsigned int *)t134) = t137;
    t138 = *((unsigned int *)t134);
    t139 = (t138 != 0);
    if (t139 == 1)
        goto LAB69;

LAB70:
LAB71:    goto LAB59;

LAB61:    t119 = (t116 + 4);
    *((unsigned int *)t116) = 1;
    *((unsigned int *)t119) = 1;
    goto LAB63;

LAB65:    *((unsigned int *)t120) = 1;
    goto LAB68;

LAB67:    t127 = (t120 + 4);
    *((unsigned int *)t120) = 1;
    *((unsigned int *)t127) = 1;
    goto LAB68;

LAB69:    t140 = *((unsigned int *)t128);
    t141 = *((unsigned int *)t134);
    *((unsigned int *)t128) = (t140 | t141);
    t142 = (t100 + 4);
    t143 = (t120 + 4);
    t144 = *((unsigned int *)t100);
    t145 = (~(t144));
    t146 = *((unsigned int *)t142);
    t147 = (~(t146));
    t148 = *((unsigned int *)t120);
    t149 = (~(t148));
    t150 = *((unsigned int *)t143);
    t151 = (~(t150));
    t152 = (t145 & t147);
    t153 = (t149 & t151);
    t154 = (~(t152));
    t155 = (~(t153));
    t156 = *((unsigned int *)t134);
    *((unsigned int *)t134) = (t156 & t154);
    t157 = *((unsigned int *)t134);
    *((unsigned int *)t134) = (t157 & t155);
    t158 = *((unsigned int *)t128);
    *((unsigned int *)t128) = (t158 & t154);
    t159 = *((unsigned int *)t128);
    *((unsigned int *)t128) = (t159 & t155);
    goto LAB71;

LAB72:    *((unsigned int *)t160) = 1;
    goto LAB75;

LAB74:    t167 = (t160 + 4);
    *((unsigned int *)t160) = 1;
    *((unsigned int *)t167) = 1;
    goto LAB75;

LAB76:    t180 = *((unsigned int *)t168);
    t181 = *((unsigned int *)t174);
    *((unsigned int *)t168) = (t180 | t181);
    t182 = (t67 + 4);
    t183 = (t160 + 4);
    t184 = *((unsigned int *)t182);
    t185 = (~(t184));
    t186 = *((unsigned int *)t67);
    t187 = (t186 & t185);
    t188 = *((unsigned int *)t183);
    t189 = (~(t188));
    t190 = *((unsigned int *)t160);
    t191 = (t190 & t189);
    t192 = (~(t187));
    t193 = (~(t191));
    t194 = *((unsigned int *)t174);
    *((unsigned int *)t174) = (t194 & t192);
    t195 = *((unsigned int *)t174);
    *((unsigned int *)t174) = (t195 & t193);
    goto LAB78;

LAB79:    xsi_set_current_line(21, ng0);
    t202 = ((char*)((ng1)));
    t203 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t203, t202, 0, 0, 4, 0LL);
    t204 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t204, t202, 4, 0, 4, 0LL);
    goto LAB81;

LAB84:    t13 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB85;

LAB86:    *((unsigned int *)t28) = 1;
    goto LAB89;

LAB88:    t30 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB89;

LAB90:    t32 = (t0 + 1928);
    t33 = (t32 + 56U);
    t34 = *((char **)t33);
    t35 = ((char*)((ng4)));
    memset(t36, 0, 8);
    t37 = (t34 + 4);
    if (*((unsigned int *)t37) != 0)
        goto LAB94;

LAB93:    t38 = (t35 + 4);
    if (*((unsigned int *)t38) != 0)
        goto LAB94;

LAB97:    if (*((unsigned int *)t34) < *((unsigned int *)t35))
        goto LAB95;

LAB96:    memset(t40, 0, 8);
    t41 = (t36 + 4);
    t49 = *((unsigned int *)t41);
    t50 = (~(t49));
    t51 = *((unsigned int *)t36);
    t52 = (t51 & t50);
    t55 = (t52 & 1U);
    if (t55 != 0)
        goto LAB98;

LAB99:    if (*((unsigned int *)t41) != 0)
        goto LAB100;

LAB101:    t56 = *((unsigned int *)t28);
    t57 = *((unsigned int *)t40);
    t59 = (t56 & t57);
    *((unsigned int *)t43) = t59;
    t44 = (t28 + 4);
    t45 = (t40 + 4);
    t46 = (t43 + 4);
    t60 = *((unsigned int *)t44);
    t61 = *((unsigned int *)t45);
    t63 = (t60 | t61);
    *((unsigned int *)t46) = t63;
    t64 = *((unsigned int *)t46);
    t65 = (t64 != 0);
    if (t65 == 1)
        goto LAB102;

LAB103:
LAB104:    goto LAB92;

LAB94:    t39 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB96;

LAB95:    *((unsigned int *)t36) = 1;
    goto LAB96;

LAB98:    *((unsigned int *)t40) = 1;
    goto LAB101;

LAB100:    t42 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t42) = 1;
    goto LAB101;

LAB102:    t66 = *((unsigned int *)t43);
    t69 = *((unsigned int *)t46);
    *((unsigned int *)t43) = (t66 | t69);
    t53 = (t28 + 4);
    t54 = (t40 + 4);
    t70 = *((unsigned int *)t28);
    t71 = (~(t70));
    t72 = *((unsigned int *)t53);
    t73 = (~(t72));
    t76 = *((unsigned int *)t40);
    t77 = (~(t76));
    t78 = *((unsigned int *)t54);
    t79 = (~(t78));
    t58 = (t71 & t73);
    t62 = (t77 & t79);
    t87 = (~(t58));
    t88 = (~(t62));
    t89 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t89 & t87);
    t90 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t90 & t88);
    t91 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t91 & t87);
    t92 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t92 & t88);
    goto LAB104;

LAB105:    xsi_set_current_line(22, ng0);

LAB108:    xsi_set_current_line(23, ng0);
    t74 = (t0 + 1768);
    t75 = (t74 + 56U);
    t80 = *((char **)t75);
    t81 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t81, t80, 0, 0, 4, 0LL);
    xsi_set_current_line(24, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_add(t14, 4, t4, 4, t5, 4);
    t11 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t11, t14, 0, 0, 4, 0LL);
    goto LAB107;

LAB111:    t13 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB112;

LAB113:    xsi_set_current_line(26, ng0);

LAB116:    xsi_set_current_line(27, ng0);
    t30 = (t0 + 1768);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    t33 = ((char*)((ng5)));
    memset(t28, 0, 8);
    xsi_vlog_unsigned_add(t28, 4, t32, 4, t33, 4);
    t34 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t34, t28, 0, 0, 4, 0LL);
    xsi_set_current_line(28, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB115;

}


extern void work_m_00000000003640615957_0979558199_init()
{
	static char *pe[] = {(void *)Always_13_0};
	xsi_register_didat("work_m_00000000003640615957_0979558199", "isim/testclock_isim_beh.exe.sim/work/m_00000000003640615957_0979558199.didat");
	xsi_register_executes(pe);
}
