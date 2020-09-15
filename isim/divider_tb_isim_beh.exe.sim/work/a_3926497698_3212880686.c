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

/* This file is designed for use with ISim build 0x8ef4fb42 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "E:/Computer Architecture/L8/src/divider.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_1242562249;

char *ieee_p_1242562249_sub_1547270861_1035706684(char *, char *, char *, char *, char *, char *);
unsigned char ieee_p_1242562249_sub_3472088553_1035706684(char *, char *, char *, char *, char *);


static void work_a_3926497698_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    unsigned char t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(66, ng0);
    t1 = (t0 + 684U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 568U);
    t4 = xsi_signal_has_event(t1);
    if (t4 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 3888);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(67, ng0);
    t1 = (t0 + 3996);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 1512U);
    t6 = *((char **)t2);
    t11 = *((unsigned char *)t6);
    t2 = (t0 + 3996);
    t7 = (t2 + 32U);
    t8 = *((char **)t7);
    t12 = (t8 + 40U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = t11;
    xsi_driver_first_trans_fast(t2);
    goto LAB3;

LAB7:    t2 = (t0 + 592U);
    t5 = *((char **)t2);
    t9 = *((unsigned char *)t5);
    t10 = (t9 == (unsigned char)3);
    t3 = t10;
    goto LAB9;

}

static void work_a_3926497698_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned char t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    int t20;
    int t21;
    static char *nl0[] = {&&LAB3, &&LAB4, &&LAB5};

LAB0:    xsi_set_current_line(77, ng0);
    t1 = (t0 + 1420U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (char *)((nl0) + t3);
    goto **((char **)t1);

LAB2:    t1 = (t0 + 3896);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(79, ng0);
    t4 = (t0 + 776U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    if (t7 != 0)
        goto LAB6;

LAB8:    xsi_set_current_line(86, ng0);
    t1 = (t0 + 4032);
    t2 = (t1 + 32U);
    t4 = *((char **)t2);
    t5 = (t4 + 40U);
    t8 = *((char **)t5);
    *((unsigned char *)t8) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);

LAB7:    goto LAB2;

LAB4:    xsi_set_current_line(90, ng0);
    t1 = (t0 + 4032);
    t2 = (t1 + 32U);
    t4 = *((char **)t2);
    t5 = (t4 + 40U);
    t8 = *((char **)t5);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB5:    xsi_set_current_line(93, ng0);
    t1 = (t0 + 1788U);
    t2 = *((char **)t1);
    t20 = *((int *)t2);
    t21 = (t20 + 1);
    t3 = (t21 == 4);
    if (t3 != 0)
        goto LAB12;

LAB14:    xsi_set_current_line(96, ng0);
    t1 = (t0 + 4032);
    t2 = (t1 + 32U);
    t4 = *((char **)t2);
    t5 = (t4 + 40U);
    t8 = *((char **)t5);
    *((unsigned char *)t8) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);

LAB13:    goto LAB2;

LAB6:    xsi_set_current_line(80, ng0);
    t4 = (t0 + 868U);
    t8 = *((char **)t4);
    t9 = (7 - 7);
    t10 = (t9 * 1U);
    t11 = (0 + t10);
    t4 = (t8 + t11);
    t12 = (t0 + 960U);
    t13 = *((char **)t12);
    t12 = ((IEEE_P_2592010699) + 2332);
    t14 = xsi_vhdl_lessthan(t12, t4, 4U, t13, 4U);
    if (t14 != 0)
        goto LAB9;

LAB11:    xsi_set_current_line(83, ng0);
    t1 = (t0 + 4032);
    t2 = (t1 + 32U);
    t4 = *((char **)t2);
    t5 = (t4 + 40U);
    t8 = *((char **)t5);
    *((unsigned char *)t8) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);

LAB10:    goto LAB7;

LAB9:    xsi_set_current_line(81, ng0);
    t15 = (t0 + 4032);
    t16 = (t15 + 32U);
    t17 = *((char **)t16);
    t18 = (t17 + 40U);
    t19 = *((char **)t18);
    *((unsigned char *)t19) = (unsigned char)1;
    xsi_driver_first_trans_fast(t15);
    goto LAB10;

LAB12:    xsi_set_current_line(94, ng0);
    t1 = (t0 + 4032);
    t4 = (t1 + 32U);
    t5 = *((char **)t4);
    t8 = (t5 + 40U);
    t12 = *((char **)t8);
    *((unsigned char *)t12) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB13;

}

static void work_a_3926497698_3212880686_p_2(char *t0)
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
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    xsi_set_current_line(103, ng0);
    t1 = (t0 + 1420U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)0);
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB5:    t9 = (t0 + 4068);
    t10 = (t9 + 32U);
    t11 = *((char **)t10);
    t12 = (t11 + 40U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t9);

LAB2:    t14 = (t0 + 3904);
    *((int *)t14) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 4068);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_3926497698_3212880686_p_3(char *t0)
{
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    char *t11;
    unsigned char t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;

LAB0:    xsi_set_current_line(105, ng0);
    t2 = (t0 + 1420U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)0);
    if (t5 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB8:    t18 = (t0 + 4104);
    t19 = (t18 + 32U);
    t20 = *((char **)t19);
    t21 = (t20 + 40U);
    t22 = *((char **)t21);
    *((unsigned char *)t22) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t18);

LAB2:    t23 = (t0 + 3912);
    *((int *)t23) = 1;

LAB1:    return;
LAB3:    t13 = (t0 + 4104);
    t14 = (t13 + 32U);
    t15 = *((char **)t14);
    t16 = (t15 + 40U);
    t17 = *((char **)t16);
    *((unsigned char *)t17) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t13);
    goto LAB2;

LAB5:    t2 = (t0 + 868U);
    t6 = *((char **)t2);
    t7 = (7 - 7);
    t8 = (t7 * 1U);
    t9 = (0 + t8);
    t2 = (t6 + t9);
    t10 = (t0 + 960U);
    t11 = *((char **)t10);
    t10 = ((IEEE_P_2592010699) + 2332);
    t12 = xsi_vhdl_greaterEqual(t10, t2, 4U, t11, 4U);
    t1 = t12;
    goto LAB7;

LAB9:    goto LAB2;

}

static void work_a_3926497698_3212880686_p_4(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    unsigned char t11;
    char *t12;
    char *t13;
    char *t14;
    int t15;
    int t16;
    static char *nl0[] = {&&LAB11, &&LAB13, &&LAB12};

LAB0:    xsi_set_current_line(111, ng0);
    t1 = (t0 + 684U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 568U);
    t4 = xsi_signal_has_event(t1);
    if (t4 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 3920);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(112, ng0);
    t1 = (t0 + 4140);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((int *)t8) = 0;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(114, ng0);
    t2 = (t0 + 1420U);
    t6 = *((char **)t2);
    t11 = *((unsigned char *)t6);
    t2 = (char *)((nl0) + t11);
    goto **((char **)t2);

LAB7:    t2 = (t0 + 592U);
    t5 = *((char **)t2);
    t9 = *((unsigned char *)t5);
    t10 = (t9 == (unsigned char)3);
    t3 = t10;
    goto LAB9;

LAB10:    goto LAB3;

LAB11:    xsi_set_current_line(116, ng0);
    t7 = (t0 + 4140);
    t8 = (t7 + 32U);
    t12 = *((char **)t8);
    t13 = (t12 + 40U);
    t14 = *((char **)t13);
    *((int *)t14) = 0;
    xsi_driver_first_trans_fast(t7);
    goto LAB10;

LAB12:    xsi_set_current_line(119, ng0);
    t1 = (t0 + 1788U);
    t2 = *((char **)t1);
    t15 = *((int *)t2);
    t16 = (t15 + 1);
    t1 = (t0 + 4140);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((int *)t8) = t16;
    xsi_driver_first_trans_fast(t1);
    goto LAB10;

LAB13:    goto LAB10;

}

static void work_a_3926497698_3212880686_p_5(char *t0)
{
    char t13[16];
    char t22[16];
    char t29[16];
    char t31[16];
    char t36[16];
    char t39[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned char t11;
    unsigned char t12;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    int t20;
    unsigned int t21;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t30;
    char *t32;
    char *t33;
    int t34;
    unsigned int t35;
    char *t37;
    int t38;
    char *t40;
    unsigned int t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    static char *nl0[] = {&&LAB11, &&LAB12, &&LAB13};

LAB0:    xsi_set_current_line(130, ng0);
    t1 = (t0 + 684U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 568U);
    t4 = xsi_signal_has_event(t1);
    if (t4 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 3928);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(131, ng0);
    t1 = xsi_get_transient_memory(9U);
    memset(t1, 0, 9U);
    t5 = t1;
    memset(t5, (unsigned char)2, 9U);
    t6 = (t0 + 4176);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 9U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(132, ng0);
    t1 = xsi_get_transient_memory(4U);
    memset(t1, 0, 4U);
    t2 = t1;
    memset(t2, (unsigned char)2, 4U);
    t5 = (t0 + 4212);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 4U);
    xsi_driver_first_trans_fast(t5);
    goto LAB3;

LAB5:    xsi_set_current_line(134, ng0);
    t2 = (t0 + 960U);
    t6 = *((char **)t2);
    t2 = (t0 + 4212);
    t7 = (t2 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    memcpy(t10, t6, 4U);
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(135, ng0);
    t1 = (t0 + 1420U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (char *)((nl0) + t3);
    goto **((char **)t1);

LAB7:    t2 = (t0 + 592U);
    t5 = *((char **)t2);
    t11 = *((unsigned char *)t5);
    t12 = (t11 == (unsigned char)3);
    t3 = t12;
    goto LAB9;

LAB10:    goto LAB3;

LAB11:    xsi_set_current_line(137, ng0);
    t5 = (t0 + 868U);
    t6 = *((char **)t5);
    t7 = ((IEEE_P_2592010699) + 2332);
    t8 = (t0 + 6632U);
    t5 = xsi_base_array_concat(t5, t13, t7, (char)99, (unsigned char)2, (char)97, t6, t8, (char)101);
    t9 = (t0 + 4176);
    t10 = (t9 + 32U);
    t14 = *((char **)t10);
    t15 = (t14 + 40U);
    t16 = *((char **)t15);
    memcpy(t16, t5, 9U);
    xsi_driver_first_trans_fast(t9);
    goto LAB10;

LAB12:    xsi_set_current_line(140, ng0);
    t1 = (t0 + 1604U);
    t2 = *((char **)t1);
    t17 = (8 - 7);
    t18 = (t17 * 1U);
    t19 = (0 + t18);
    t1 = (t2 + t19);
    t5 = (t0 + 4176);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 8U);
    xsi_driver_first_trans_delta(t5, 0U, 8U, 0LL);
    xsi_set_current_line(141, ng0);
    t1 = (t0 + 4176);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_delta(t1, 8U, 1, 0LL);
    goto LAB10;

LAB13:    xsi_set_current_line(144, ng0);
    t1 = (t0 + 1604U);
    t2 = *((char **)t1);
    t17 = (8 - 8);
    t18 = (t17 * 1U);
    t19 = (0 + t18);
    t1 = (t2 + t19);
    t5 = (t13 + 0U);
    t6 = (t5 + 0U);
    *((int *)t6) = 8;
    t6 = (t5 + 4U);
    *((int *)t6) = 4;
    t6 = (t5 + 8U);
    *((int *)t6) = -1;
    t20 = (4 - 8);
    t21 = (t20 * -1);
    t21 = (t21 + 1);
    t6 = (t5 + 12U);
    *((unsigned int *)t6) = t21;
    t6 = (t0 + 1696U);
    t7 = *((char **)t6);
    t8 = ((IEEE_P_1242562249) + 1724);
    t9 = (t0 + 6712U);
    t6 = xsi_base_array_concat(t6, t22, t8, (char)99, (unsigned char)2, (char)97, t7, t9, (char)101);
    t3 = ieee_p_1242562249_sub_3472088553_1035706684(IEEE_P_1242562249, t1, t13, t6, t22);
    if (t3 != 0)
        goto LAB14;

LAB16:
LAB15:    goto LAB10;

LAB14:    xsi_set_current_line(145, ng0);
    t10 = (t0 + 1880U);
    t14 = *((char **)t10);
    t21 = (4 - 4);
    t23 = (t21 * 1U);
    t24 = (0 + t23);
    t10 = (t14 + t24);
    t15 = (t0 + 1604U);
    t16 = *((char **)t15);
    t25 = (8 - 3);
    t26 = (t25 * 1U);
    t27 = (0 + t26);
    t15 = (t16 + t27);
    t30 = ((IEEE_P_1242562249) + 1724);
    t32 = (t31 + 0U);
    t33 = (t32 + 0U);
    *((int *)t33) = 4;
    t33 = (t32 + 4U);
    *((int *)t33) = 0;
    t33 = (t32 + 8U);
    *((int *)t33) = -1;
    t34 = (0 - 4);
    t35 = (t34 * -1);
    t35 = (t35 + 1);
    t33 = (t32 + 12U);
    *((unsigned int *)t33) = t35;
    t33 = (t36 + 0U);
    t37 = (t33 + 0U);
    *((int *)t37) = 3;
    t37 = (t33 + 4U);
    *((int *)t37) = 1;
    t37 = (t33 + 8U);
    *((int *)t37) = -1;
    t38 = (1 - 3);
    t35 = (t38 * -1);
    t35 = (t35 + 1);
    t37 = (t33 + 12U);
    *((unsigned int *)t37) = t35;
    t28 = xsi_base_array_concat(t28, t29, t30, (char)97, t10, t31, (char)97, t15, t36, (char)101);
    t40 = ((IEEE_P_1242562249) + 1724);
    t37 = xsi_base_array_concat(t37, t39, t40, (char)97, t28, t29, (char)99, (unsigned char)3, (char)101);
    t35 = (5U + 3U);
    t41 = (t35 + 1U);
    t4 = (9U != t41);
    if (t4 == 1)
        goto LAB17;

LAB18:    t42 = (t0 + 4176);
    t43 = (t42 + 32U);
    t44 = *((char **)t43);
    t45 = (t44 + 40U);
    t46 = *((char **)t45);
    memcpy(t46, t37, 9U);
    xsi_driver_first_trans_fast(t42);
    goto LAB15;

LAB17:    xsi_size_not_matching(9U, t41, 0);
    goto LAB18;

}

static void work_a_3926497698_3212880686_p_6(char *t0)
{
    char t1[16];
    char t7[16];
    char t13[16];
    char *t2;
    char *t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    char *t8;
    char *t9;
    int t10;
    unsigned int t11;
    char *t12;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned char t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;

LAB0:    xsi_set_current_line(153, ng0);

LAB3:    t2 = (t0 + 1604U);
    t3 = *((char **)t2);
    t4 = (8 - 8);
    t5 = (t4 * 1U);
    t6 = (0 + t5);
    t2 = (t3 + t6);
    t8 = (t7 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 8;
    t9 = (t8 + 4U);
    *((int *)t9) = 4;
    t9 = (t8 + 8U);
    *((int *)t9) = -1;
    t10 = (4 - 8);
    t11 = (t10 * -1);
    t11 = (t11 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t11;
    t9 = (t0 + 960U);
    t12 = *((char **)t9);
    t14 = ((IEEE_P_2592010699) + 2332);
    t15 = (t0 + 6648U);
    t9 = xsi_base_array_concat(t9, t13, t14, (char)99, (unsigned char)2, (char)97, t12, t15, (char)101);
    t16 = ieee_p_1242562249_sub_1547270861_1035706684(IEEE_P_1242562249, t1, t2, t7, t9, t13);
    t17 = (t1 + 12U);
    t11 = *((unsigned int *)t17);
    t18 = (1U * t11);
    t19 = (5U != t18);
    if (t19 == 1)
        goto LAB5;

LAB6:    t20 = (t0 + 4248);
    t21 = (t20 + 32U);
    t22 = *((char **)t21);
    t23 = (t22 + 40U);
    t24 = *((char **)t23);
    memcpy(t24, t16, 5U);
    xsi_driver_first_trans_fast(t20);

LAB2:    t25 = (t0 + 3936);
    *((int *)t25) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(5U, t18, 0);
    goto LAB6;

}

static void work_a_3926497698_3212880686_p_7(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    unsigned int t4;
    unsigned int t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    xsi_set_current_line(156, ng0);

LAB3:    t1 = (t0 + 1604U);
    t2 = *((char **)t1);
    t3 = (8 - 3);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t6 = (t0 + 4284);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 4U);
    xsi_driver_first_trans_fast_port(t6);

LAB2:    t11 = (t0 + 3944);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3926497698_3212880686_p_8(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    unsigned int t4;
    unsigned int t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    xsi_set_current_line(157, ng0);

LAB3:    t1 = (t0 + 1604U);
    t2 = *((char **)t1);
    t3 = (8 - 7);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t6 = (t0 + 4320);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 4U);
    xsi_driver_first_trans_fast_port(t6);

LAB2:    t11 = (t0 + 3952);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_3926497698_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3926497698_3212880686_p_0,(void *)work_a_3926497698_3212880686_p_1,(void *)work_a_3926497698_3212880686_p_2,(void *)work_a_3926497698_3212880686_p_3,(void *)work_a_3926497698_3212880686_p_4,(void *)work_a_3926497698_3212880686_p_5,(void *)work_a_3926497698_3212880686_p_6,(void *)work_a_3926497698_3212880686_p_7,(void *)work_a_3926497698_3212880686_p_8};
	xsi_register_didat("work_a_3926497698_3212880686", "isim/divider_tb_isim_beh.exe.sim/work/a_3926497698_3212880686.didat");
	xsi_register_executes(pe);
}
