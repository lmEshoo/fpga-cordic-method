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
static const char *ng0 = "//es-egr-03/Students/M/lmestar/cordic/look_up.vhd";



static void work_a_0016271624_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    unsigned char t5;
    char *t6;
    char *t7;
    unsigned char t8;
    unsigned char t9;
    int t10;
    char *t11;
    int t12;
    char *t13;
    char *t14;
    int t15;
    char *t16;
    int t18;
    char *t19;
    int t21;
    char *t22;
    int t24;
    char *t25;
    int t27;
    char *t28;
    int t30;
    char *t31;
    int t33;
    char *t34;
    int t36;
    char *t37;
    int t39;
    char *t40;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;

LAB0:    t1 = (t0 + 2512U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(19, ng0);

LAB6:    t2 = (t0 + 2832);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    t6 = (t0 + 2832);
    *((int *)t6) = 0;
    xsi_set_current_line(20, ng0);
    t2 = (t0 + 1192U);
    t4 = *((char **)t2);
    t2 = (t0 + 4629);
    t10 = xsi_mem_cmp(t2, t4, 4U);
    if (t10 == 1)
        goto LAB12;

LAB24:    t7 = (t0 + 4633);
    t12 = xsi_mem_cmp(t7, t4, 4U);
    if (t12 == 1)
        goto LAB13;

LAB25:    t13 = (t0 + 4637);
    t15 = xsi_mem_cmp(t13, t4, 4U);
    if (t15 == 1)
        goto LAB14;

LAB26:    t16 = (t0 + 4641);
    t18 = xsi_mem_cmp(t16, t4, 4U);
    if (t18 == 1)
        goto LAB15;

LAB27:    t19 = (t0 + 4645);
    t21 = xsi_mem_cmp(t19, t4, 4U);
    if (t21 == 1)
        goto LAB16;

LAB28:    t22 = (t0 + 4649);
    t24 = xsi_mem_cmp(t22, t4, 4U);
    if (t24 == 1)
        goto LAB17;

LAB29:    t25 = (t0 + 4653);
    t27 = xsi_mem_cmp(t25, t4, 4U);
    if (t27 == 1)
        goto LAB18;

LAB30:    t28 = (t0 + 4657);
    t30 = xsi_mem_cmp(t28, t4, 4U);
    if (t30 == 1)
        goto LAB19;

LAB31:    t31 = (t0 + 4661);
    t33 = xsi_mem_cmp(t31, t4, 4U);
    if (t33 == 1)
        goto LAB20;

LAB32:    t34 = (t0 + 4665);
    t36 = xsi_mem_cmp(t34, t4, 4U);
    if (t36 == 1)
        goto LAB21;

LAB33:    t37 = (t0 + 4669);
    t39 = xsi_mem_cmp(t37, t4, 4U);
    if (t39 == 1)
        goto LAB22;

LAB34:
LAB23:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 4882);
    t6 = (t0 + 2912);
    t7 = (t6 + 56U);
    t11 = *((char **)t7);
    t13 = (t11 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t2, 19U);
    xsi_driver_first_trans_fast_port(t6);

LAB11:    goto LAB2;

LAB5:    t4 = (t0 + 992U);
    t5 = xsi_signal_has_event(t4);
    if (t5 == 1)
        goto LAB8;

LAB9:    t3 = (unsigned char)0;

LAB10:    if (t3 == 1)
        goto LAB4;
    else
        goto LAB6;

LAB7:    goto LAB5;

LAB8:    t6 = (t0 + 1032U);
    t7 = *((char **)t6);
    t8 = *((unsigned char *)t7);
    t9 = (t8 == (unsigned char)3);
    t3 = t9;
    goto LAB10;

LAB12:    xsi_set_current_line(21, ng0);
    t40 = (t0 + 4673);
    t42 = (t0 + 2912);
    t43 = (t42 + 56U);
    t44 = *((char **)t43);
    t45 = (t44 + 56U);
    t46 = *((char **)t45);
    memcpy(t46, t40, 19U);
    xsi_driver_first_trans_fast_port(t42);
    goto LAB11;

LAB13:    xsi_set_current_line(22, ng0);
    t2 = (t0 + 4692);
    t6 = (t0 + 2912);
    t7 = (t6 + 56U);
    t11 = *((char **)t7);
    t13 = (t11 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t2, 19U);
    xsi_driver_first_trans_fast_port(t6);
    goto LAB11;

LAB14:    xsi_set_current_line(23, ng0);
    t2 = (t0 + 4711);
    t6 = (t0 + 2912);
    t7 = (t6 + 56U);
    t11 = *((char **)t7);
    t13 = (t11 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t2, 19U);
    xsi_driver_first_trans_fast_port(t6);
    goto LAB11;

LAB15:    xsi_set_current_line(24, ng0);
    t2 = (t0 + 4730);
    t6 = (t0 + 2912);
    t7 = (t6 + 56U);
    t11 = *((char **)t7);
    t13 = (t11 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t2, 19U);
    xsi_driver_first_trans_fast_port(t6);
    goto LAB11;

LAB16:    xsi_set_current_line(25, ng0);
    t2 = (t0 + 4749);
    t6 = (t0 + 2912);
    t7 = (t6 + 56U);
    t11 = *((char **)t7);
    t13 = (t11 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t2, 19U);
    xsi_driver_first_trans_fast_port(t6);
    goto LAB11;

LAB17:    xsi_set_current_line(26, ng0);
    t2 = (t0 + 4768);
    t6 = (t0 + 2912);
    t7 = (t6 + 56U);
    t11 = *((char **)t7);
    t13 = (t11 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t2, 19U);
    xsi_driver_first_trans_fast_port(t6);
    goto LAB11;

LAB18:    xsi_set_current_line(27, ng0);
    t2 = (t0 + 4787);
    t6 = (t0 + 2912);
    t7 = (t6 + 56U);
    t11 = *((char **)t7);
    t13 = (t11 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t2, 19U);
    xsi_driver_first_trans_fast_port(t6);
    goto LAB11;

LAB19:    xsi_set_current_line(28, ng0);
    t2 = (t0 + 4806);
    t6 = (t0 + 2912);
    t7 = (t6 + 56U);
    t11 = *((char **)t7);
    t13 = (t11 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t2, 19U);
    xsi_driver_first_trans_fast_port(t6);
    goto LAB11;

LAB20:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 4825);
    t6 = (t0 + 2912);
    t7 = (t6 + 56U);
    t11 = *((char **)t7);
    t13 = (t11 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t2, 19U);
    xsi_driver_first_trans_fast_port(t6);
    goto LAB11;

LAB21:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 4844);
    t6 = (t0 + 2912);
    t7 = (t6 + 56U);
    t11 = *((char **)t7);
    t13 = (t11 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t2, 19U);
    xsi_driver_first_trans_fast_port(t6);
    goto LAB11;

LAB22:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 4863);
    t6 = (t0 + 2912);
    t7 = (t6 + 56U);
    t11 = *((char **)t7);
    t13 = (t11 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t2, 19U);
    xsi_driver_first_trans_fast_port(t6);
    goto LAB11;

LAB35:;
}


extern void work_a_0016271624_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0016271624_3212880686_p_0};
	xsi_register_didat("work_a_0016271624_3212880686", "isim/CORDIC_isim_beh.exe.sim/work/a_0016271624_3212880686.didat");
	xsi_register_executes(pe);
}
