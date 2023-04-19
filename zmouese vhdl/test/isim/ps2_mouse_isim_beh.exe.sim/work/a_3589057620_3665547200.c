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
static const char *ng0 = "D:/work/special assig/ADSD/zmouese vhdl/ps2_mouse.vhd.vhd";



static void work_a_3589057620_3665547200_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned char t10;
    unsigned char t11;
    unsigned char t12;
    char *t13;
    unsigned char t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    int t20;
    int t21;
    int t22;
    int t23;
    int t24;
    int t25;
    unsigned int t26;
    int t27;
    int t28;
    int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    int t33;
    int t34;
    int t35;
    int t36;
    int t37;
    int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    int t42;
    int t43;
    int t44;
    char *t45;
    int t46;
    int t47;
    int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned char t51;
    static char *nl0[] = {&&LAB11, &&LAB12, &&LAB13, &&LAB14, &&LAB15, &&LAB16, &&LAB17};

LAB0:    xsi_set_current_line(80, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 992U);
    t4 = xsi_signal_has_event(t1);
    if (t4 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 4992);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(81, ng0);
    t1 = (t0 + 5072);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(82, ng0);
    t1 = xsi_get_transient_memory(24U);
    memset(t1, 0, 24U);
    t2 = t1;
    memset(t2, (unsigned char)2, 24U);
    t5 = (t0 + 5136);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 24U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(83, ng0);
    t1 = (t0 + 5200);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 2792U);
    t6 = *((char **)t2);
    t12 = *((unsigned char *)t6);
    t2 = (t0 + 5264);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t13 = *((char **)t9);
    *((unsigned char *)t13) = t12;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(87, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (char *)((nl0) + t3);
    goto **((char **)t1);

LAB7:    t2 = (t0 + 1032U);
    t5 = *((char **)t2);
    t10 = *((unsigned char *)t5);
    t11 = (t10 == (unsigned char)3);
    t3 = t11;
    goto LAB9;

LAB10:    goto LAB3;

LAB11:    xsi_set_current_line(90, ng0);
    t5 = (t0 + 2472U);
    t6 = *((char **)t5);
    t4 = *((unsigned char *)t6);
    t10 = (t4 == (unsigned char)2);
    if (t10 != 0)
        goto LAB18;

LAB20:    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB21;

LAB22:
LAB19:    goto LAB10;

LAB12:    xsi_set_current_line(100, ng0);
    t1 = (t0 + 2952U);
    t2 = *((char **)t1);
    t4 = *((unsigned char *)t2);
    t10 = (t4 == (unsigned char)2);
    if (t10 == 1)
        goto LAB26;

LAB27:    t3 = (unsigned char)0;

LAB28:    if (t3 != 0)
        goto LAB23;

LAB25:    xsi_set_current_line(107, ng0);
    t1 = (t0 + 5200);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);

LAB24:    goto LAB10;

LAB13:    xsi_set_current_line(111, ng0);
    t1 = (t0 + 2952U);
    t2 = *((char **)t1);
    t4 = *((unsigned char *)t2);
    t10 = (t4 == (unsigned char)2);
    if (t10 == 1)
        goto LAB41;

LAB42:    t3 = (unsigned char)0;

LAB43:    if (t3 != 0)
        goto LAB38;

LAB40:    xsi_set_current_line(118, ng0);
    t1 = (t0 + 5200);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB39:    goto LAB10;

LAB14:    xsi_set_current_line(122, ng0);
    t1 = (t0 + 2952U);
    t2 = *((char **)t1);
    t4 = *((unsigned char *)t2);
    t10 = (t4 == (unsigned char)2);
    if (t10 == 1)
        goto LAB56;

LAB57:    t3 = (unsigned char)0;

LAB58:    if (t3 != 0)
        goto LAB53;

LAB55:    xsi_set_current_line(129, ng0);
    t1 = (t0 + 5200);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);

LAB54:    goto LAB10;

LAB15:    xsi_set_current_line(133, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB68;

LAB70:    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB71;

LAB72:
LAB69:    goto LAB10;

LAB16:    xsi_set_current_line(143, ng0);
    t1 = (t0 + 2952U);
    t2 = *((char **)t1);
    t4 = *((unsigned char *)t2);
    t10 = (t4 == (unsigned char)2);
    if (t10 == 1)
        goto LAB76;

LAB77:    t3 = (unsigned char)0;

LAB78:    if (t3 != 0)
        goto LAB73;

LAB75:    xsi_set_current_line(150, ng0);
    t1 = (t0 + 5200);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)5;
    xsi_driver_first_trans_fast(t1);

LAB74:    goto LAB10;

LAB17:    xsi_set_current_line(154, ng0);
    t1 = (t0 + 2952U);
    t2 = *((char **)t1);
    t4 = *((unsigned char *)t2);
    t10 = (t4 == (unsigned char)2);
    if (t10 == 1)
        goto LAB91;

LAB92:    t3 = (unsigned char)0;

LAB93:    if (t3 != 0)
        goto LAB88;

LAB90:
LAB89:    xsi_set_current_line(163, ng0);
    t1 = (t0 + 2952U);
    t2 = *((char **)t1);
    t10 = *((unsigned char *)t2);
    t11 = (t10 == (unsigned char)3);
    if (t11 == 1)
        goto LAB105;

LAB106:    t4 = (unsigned char)0;

LAB107:    if (t4 == 1)
        goto LAB102;

LAB103:    t3 = (unsigned char)0;

LAB104:    if (t3 != 0)
        goto LAB99;

LAB101:
LAB100:    goto LAB10;

LAB18:    xsi_set_current_line(91, ng0);
    t5 = (t0 + 5328);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t13 = *((char **)t9);
    *((unsigned char *)t13) = (unsigned char)3;
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(92, ng0);
    t1 = (t0 + 8892);
    t5 = (t0 + 5392);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 9U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(93, ng0);
    t1 = (t0 + 5200);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB19;

LAB21:    xsi_set_current_line(95, ng0);
    t1 = (t0 + 5328);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(96, ng0);
    t1 = (t0 + 5200);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    goto LAB19;

LAB23:    xsi_set_current_line(101, ng0);
    t1 = (t0 + 2632U);
    t6 = *((char **)t1);
    t1 = (t0 + 8901);
    t14 = 1;
    if (8U == 8U)
        goto LAB32;

LAB33:    t14 = 0;

LAB34:    if (t14 != 0)
        goto LAB29;

LAB31:    xsi_set_current_line(104, ng0);
    t1 = (t0 + 5200);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);

LAB30:    goto LAB24;

LAB26:    t1 = (t0 + 2792U);
    t5 = *((char **)t1);
    t11 = *((unsigned char *)t5);
    t12 = (t11 == (unsigned char)3);
    t3 = t12;
    goto LAB28;

LAB29:    xsi_set_current_line(102, ng0);
    t13 = (t0 + 5200);
    t16 = (t13 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    *((unsigned char *)t19) = (unsigned char)2;
    xsi_driver_first_trans_fast(t13);
    goto LAB30;

LAB32:    t15 = 0;

LAB35:    if (t15 < 8U)
        goto LAB36;
    else
        goto LAB34;

LAB36:    t8 = (t6 + t15);
    t9 = (t1 + t15);
    if (*((unsigned char *)t8) != *((unsigned char *)t9))
        goto LAB33;

LAB37:    t15 = (t15 + 1);
    goto LAB35;

LAB38:    xsi_set_current_line(112, ng0);
    t1 = (t0 + 2632U);
    t6 = *((char **)t1);
    t1 = (t0 + 8909);
    t14 = 1;
    if (8U == 8U)
        goto LAB47;

LAB48:    t14 = 0;

LAB49:    if (t14 != 0)
        goto LAB44;

LAB46:    xsi_set_current_line(115, ng0);
    t1 = (t0 + 5200);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);

LAB45:    goto LAB39;

LAB41:    t1 = (t0 + 2792U);
    t5 = *((char **)t1);
    t11 = *((unsigned char *)t5);
    t12 = (t11 == (unsigned char)3);
    t3 = t12;
    goto LAB43;

LAB44:    xsi_set_current_line(113, ng0);
    t13 = (t0 + 5200);
    t16 = (t13 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    *((unsigned char *)t19) = (unsigned char)3;
    xsi_driver_first_trans_fast(t13);
    goto LAB45;

LAB47:    t15 = 0;

LAB50:    if (t15 < 8U)
        goto LAB51;
    else
        goto LAB49;

LAB51:    t8 = (t6 + t15);
    t9 = (t1 + t15);
    if (*((unsigned char *)t8) != *((unsigned char *)t9))
        goto LAB48;

LAB52:    t15 = (t15 + 1);
    goto LAB50;

LAB53:    xsi_set_current_line(123, ng0);
    t1 = (t0 + 2632U);
    t6 = *((char **)t1);
    t1 = (t0 + 8917);
    t14 = 1;
    if (8U == 8U)
        goto LAB62;

LAB63:    t14 = 0;

LAB64:    if (t14 != 0)
        goto LAB59;

LAB61:    xsi_set_current_line(126, ng0);
    t1 = (t0 + 5200);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);

LAB60:    goto LAB54;

LAB56:    t1 = (t0 + 2792U);
    t5 = *((char **)t1);
    t11 = *((unsigned char *)t5);
    t12 = (t11 == (unsigned char)3);
    t3 = t12;
    goto LAB58;

LAB59:    xsi_set_current_line(124, ng0);
    t13 = (t0 + 5200);
    t16 = (t13 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    *((unsigned char *)t19) = (unsigned char)4;
    xsi_driver_first_trans_fast(t13);
    goto LAB60;

LAB62:    t15 = 0;

LAB65:    if (t15 < 8U)
        goto LAB66;
    else
        goto LAB64;

LAB66:    t8 = (t6 + t15);
    t9 = (t1 + t15);
    if (*((unsigned char *)t8) != *((unsigned char *)t9))
        goto LAB63;

LAB67:    t15 = (t15 + 1);
    goto LAB65;

LAB68:    xsi_set_current_line(134, ng0);
    t1 = (t0 + 5328);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(135, ng0);
    t1 = (t0 + 8925);
    t5 = (t0 + 5392);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 9U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(136, ng0);
    t1 = (t0 + 5200);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)4;
    xsi_driver_first_trans_fast(t1);
    goto LAB69;

LAB71:    xsi_set_current_line(138, ng0);
    t1 = (t0 + 5328);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(139, ng0);
    t1 = (t0 + 5200);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)5;
    xsi_driver_first_trans_fast(t1);
    goto LAB69;

LAB73:    xsi_set_current_line(144, ng0);
    t1 = (t0 + 2632U);
    t6 = *((char **)t1);
    t1 = (t0 + 8934);
    t14 = 1;
    if (8U == 8U)
        goto LAB82;

LAB83:    t14 = 0;

LAB84:    if (t14 != 0)
        goto LAB79;

LAB81:    xsi_set_current_line(147, ng0);
    t1 = (t0 + 5200);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);

LAB80:    goto LAB74;

LAB76:    t1 = (t0 + 2792U);
    t5 = *((char **)t1);
    t11 = *((unsigned char *)t5);
    t12 = (t11 == (unsigned char)3);
    t3 = t12;
    goto LAB78;

LAB79:    xsi_set_current_line(145, ng0);
    t13 = (t0 + 5200);
    t16 = (t13 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    *((unsigned char *)t19) = (unsigned char)6;
    xsi_driver_first_trans_fast(t13);
    goto LAB80;

LAB82:    t15 = 0;

LAB85:    if (t15 < 8U)
        goto LAB86;
    else
        goto LAB84;

LAB86:    t8 = (t6 + t15);
    t9 = (t1 + t15);
    if (*((unsigned char *)t8) != *((unsigned char *)t9))
        goto LAB83;

LAB87:    t15 = (t15 + 1);
    goto LAB85;

LAB88:    xsi_set_current_line(155, ng0);
    t1 = (t0 + 5072);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(156, ng0);
    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t1 = (t0 + 3112U);
    t5 = *((char **)t1);
    t20 = *((int *)t5);
    t21 = (t20 * 8);
    t22 = (7 + t21);
    t1 = (t0 + 3112U);
    t6 = *((char **)t1);
    t23 = *((int *)t6);
    t24 = (t23 * 8);
    t25 = (t24 - t22);
    t15 = (t25 * -1);
    t15 = (t15 + 1);
    t26 = (1U * t15);
    t3 = (t26 != 8U);
    if (t3 == 1)
        goto LAB94;

LAB95:    t1 = (t0 + 3112U);
    t7 = *((char **)t1);
    t27 = *((int *)t7);
    t28 = (t27 * 8);
    t29 = (7 + t28);
    t30 = (23 - t29);
    t31 = (1U * t30);
    t32 = (0U + t31);
    t1 = (t0 + 5456);
    t8 = (t1 + 56U);
    t9 = *((char **)t8);
    t13 = (t9 + 56U);
    t16 = *((char **)t13);
    t17 = (t0 + 3112U);
    t18 = *((char **)t17);
    t33 = *((int *)t18);
    t34 = (t33 * 8);
    t35 = (7 + t34);
    t17 = (t0 + 3112U);
    t19 = *((char **)t17);
    t36 = *((int *)t19);
    t37 = (t36 * 8);
    t38 = (t37 - t35);
    t39 = (t38 * -1);
    t39 = (t39 + 1);
    t40 = (1U * t39);
    memcpy(t16, t2, t40);
    t17 = (t0 + 3112U);
    t41 = *((char **)t17);
    t42 = *((int *)t41);
    t43 = (t42 * 8);
    t44 = (7 + t43);
    t17 = (t0 + 3112U);
    t45 = *((char **)t17);
    t46 = *((int *)t45);
    t47 = (t46 * 8);
    t48 = (t47 - t44);
    t49 = (t48 * -1);
    t49 = (t49 + 1);
    t50 = (1U * t49);
    xsi_driver_first_trans_delta(t1, t32, t50, 0LL);
    xsi_set_current_line(157, ng0);
    t1 = (t0 + 3112U);
    t2 = *((char **)t1);
    t20 = *((int *)t2);
    t3 = (t20 == 0);
    if (t3 != 0)
        goto LAB96;

LAB98:    xsi_set_current_line(160, ng0);
    t1 = (t0 + 3112U);
    t2 = *((char **)t1);
    t20 = *((int *)t2);
    t21 = (t20 - 1);
    t1 = (t0 + 5520);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((int *)t8) = t21;
    xsi_driver_first_trans_fast(t1);

LAB97:    goto LAB89;

LAB91:    t1 = (t0 + 2792U);
    t5 = *((char **)t1);
    t11 = *((unsigned char *)t5);
    t12 = (t11 == (unsigned char)3);
    t3 = t12;
    goto LAB93;

LAB94:    xsi_size_not_matching(t26, 8U, 0);
    goto LAB95;

LAB96:    xsi_set_current_line(158, ng0);
    t1 = (t0 + 5520);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((int *)t8) = 2;
    xsi_driver_first_trans_fast(t1);
    goto LAB97;

LAB99:    xsi_set_current_line(164, ng0);
    t1 = (t0 + 3272U);
    t7 = *((char **)t1);
    t1 = (t0 + 5136);
    t8 = (t1 + 56U);
    t9 = *((char **)t8);
    t13 = (t9 + 56U);
    t16 = *((char **)t13);
    memcpy(t16, t7, 24U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(165, ng0);
    t1 = (t0 + 5072);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB100;

LAB102:    t1 = (t0 + 3112U);
    t6 = *((char **)t1);
    t20 = *((int *)t6);
    t51 = (t20 == 2);
    t3 = t51;
    goto LAB104;

LAB105:    t1 = (t0 + 2792U);
    t5 = *((char **)t1);
    t12 = *((unsigned char *)t5);
    t14 = (t12 == (unsigned char)3);
    t4 = t14;
    goto LAB107;

}


extern void work_a_3589057620_3665547200_init()
{
	static char *pe[] = {(void *)work_a_3589057620_3665547200_p_0};
	xsi_register_didat("work_a_3589057620_3665547200", "isim/ps2_mouse_isim_beh.exe.sim/work/a_3589057620_3665547200.didat");
	xsi_register_executes(pe);
}
