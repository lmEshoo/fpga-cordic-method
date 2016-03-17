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
static const char *ng0 = "//es-egr-03/Students/M/lmestar/cordic/cordics.vhd";
extern char *IEEE_P_3499444699;
extern char *IEEE_P_0774719531;

unsigned char ieee_p_0774719531_sub_2698824431_2162500114(char *, char *, char *, char *, char *);
unsigned char ieee_p_3499444699_sub_1770363729_3536714472(char *, char *, char *, int );
char *ieee_p_3499444699_sub_2254111597_3536714472(char *, char *, char *, char *, char *, char *);
unsigned char ieee_p_3499444699_sub_2368615388_3536714472(char *, char *, char *, int );
char *ieee_p_3499444699_sub_3158760445_3536714472(char *, char *, char *, char *, char *, char *);
char *ieee_p_3499444699_sub_3158832319_3536714472(char *, char *, char *, char *, char *, char *);
char *ieee_p_3499444699_sub_3327266423_3536714472(char *, char *, char *, char *, char *, char *);


static void work_a_0103653237_3212880686_p_0(char *t0)
{
    char t36[16];
    char t37[16];
    char t39[16];
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
    char *t17;
    int t18;
    char *t19;
    char *t20;
    int t21;
    char *t22;
    char *t23;
    int t24;
    char *t25;
    char *t26;
    int t27;
    char *t28;
    char *t29;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    unsigned int t38;
    unsigned int t40;

LAB0:    t1 = (t0 + 4112U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(29, ng0);

LAB6:    t2 = (t0 + 4928);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    t6 = (t0 + 4928);
    *((int *)t6) = 0;
    xsi_set_current_line(30, ng0);
    t2 = (t0 + 2472U);
    t4 = *((char **)t2);
    t2 = (t0 + 8169);
    t10 = xsi_mem_cmp(t2, t4, 4U);
    if (t10 == 1)
        goto LAB12;

LAB20:    t7 = (t0 + 8173);
    t12 = xsi_mem_cmp(t7, t4, 4U);
    if (t12 == 1)
        goto LAB13;

LAB21:    t13 = (t0 + 8177);
    t15 = xsi_mem_cmp(t13, t4, 4U);
    if (t15 == 1)
        goto LAB14;

LAB22:    t16 = (t0 + 8181);
    t18 = xsi_mem_cmp(t16, t4, 4U);
    if (t18 == 1)
        goto LAB15;

LAB23:    t19 = (t0 + 8185);
    t21 = xsi_mem_cmp(t19, t4, 4U);
    if (t21 == 1)
        goto LAB16;

LAB24:    t22 = (t0 + 8189);
    t24 = xsi_mem_cmp(t22, t4, 4U);
    if (t24 == 1)
        goto LAB17;

LAB25:    t25 = (t0 + 8193);
    t27 = xsi_mem_cmp(t25, t4, 4U);
    if (t27 == 1)
        goto LAB18;

LAB26:
LAB19:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 8295);
    t6 = (t0 + 5296);
    t7 = (t6 + 56U);
    t11 = *((char **)t7);
    t13 = (t11 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t2, 4U);
    xsi_driver_first_trans_fast(t6);

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

LAB12:    xsi_set_current_line(31, ng0);
    t28 = (t0 + 1192U);
    t29 = *((char **)t28);
    t3 = *((unsigned char *)t29);
    t5 = (t3 == (unsigned char)3);
    if (t5 != 0)
        goto LAB28;

LAB30:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 8243);
    t6 = (t0 + 5296);
    t7 = (t6 + 56U);
    t11 = *((char **)t7);
    t13 = (t11 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t2, 4U);
    xsi_driver_first_trans_fast(t6);

LAB29:    goto LAB11;

LAB13:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 2312U);
    t4 = *((char **)t2);
    t2 = (t0 + 8012U);
    t3 = ieee_p_3499444699_sub_1770363729_3536714472(IEEE_P_3499444699, t4, t2, 0);
    if (t3 != 0)
        goto LAB33;

LAB35:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 8251);
    t6 = (t0 + 5296);
    t7 = (t6 + 56U);
    t11 = *((char **)t7);
    t13 = (t11 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t2, 4U);
    xsi_driver_first_trans_fast(t6);

LAB34:    goto LAB11;

LAB14:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 2312U);
    t4 = *((char **)t2);
    t2 = (t0 + 8012U);
    t6 = (t0 + 8255);
    t11 = (t0 + 1512U);
    t13 = *((char **)t11);
    t14 = ((IEEE_P_3499444699) + 2728);
    t16 = (t39 + 0U);
    t17 = (t16 + 0U);
    *((int *)t17) = 0;
    t17 = (t16 + 4U);
    *((int *)t17) = 1;
    t17 = (t16 + 8U);
    *((int *)t17) = 1;
    t10 = (1 - 0);
    t38 = (t10 * 1);
    t38 = (t38 + 1);
    t17 = (t16 + 12U);
    *((unsigned int *)t17) = t38;
    t17 = (t0 + 7932U);
    t11 = xsi_base_array_concat(t11, t37, t14, (char)97, t6, t39, (char)97, t13, t17, (char)101);
    t19 = ieee_p_3499444699_sub_3158832319_3536714472(IEEE_P_3499444699, t36, t4, t2, t11, t37);
    t20 = (t36 + 12U);
    t38 = *((unsigned int *)t20);
    t40 = (1U * t38);
    t3 = (21U != t40);
    if (t3 == 1)
        goto LAB36;

LAB37:    t22 = (t0 + 5232);
    t23 = (t22 + 56U);
    t25 = *((char **)t23);
    t26 = (t25 + 56U);
    t28 = *((char **)t26);
    memcpy(t28, t19, 21U);
    xsi_driver_first_trans_fast(t22);
    xsi_set_current_line(45, ng0);
    t2 = (t0 + 2792U);
    t4 = *((char **)t2);
    t2 = (t0 + 8060U);
    t6 = (t0 + 2952U);
    t7 = *((char **)t6);
    t6 = (t0 + 8060U);
    t11 = (t0 + 2632U);
    t13 = *((char **)t11);
    t11 = (t0 + 8044U);
    t14 = ieee_p_3499444699_sub_3327266423_3536714472(IEEE_P_3499444699, t37, t7, t6, t13, t11);
    t16 = ieee_p_3499444699_sub_3158832319_3536714472(IEEE_P_3499444699, t36, t4, t2, t14, t37);
    t17 = (t36 + 12U);
    t38 = *((unsigned int *)t17);
    t40 = (1U * t38);
    t3 = (13U != t40);
    if (t3 == 1)
        goto LAB38;

LAB39:    t19 = (t0 + 5104);
    t20 = (t19 + 56U);
    t22 = *((char **)t20);
    t23 = (t22 + 56U);
    t25 = *((char **)t23);
    memcpy(t25, t16, 13U);
    xsi_driver_first_trans_fast(t19);
    xsi_set_current_line(46, ng0);
    t2 = (t0 + 2952U);
    t4 = *((char **)t2);
    t2 = (t0 + 8060U);
    t6 = (t0 + 2792U);
    t7 = *((char **)t6);
    t6 = (t0 + 8060U);
    t11 = (t0 + 2632U);
    t13 = *((char **)t11);
    t11 = (t0 + 8044U);
    t14 = ieee_p_3499444699_sub_3327266423_3536714472(IEEE_P_3499444699, t37, t7, t6, t13, t11);
    t16 = ieee_p_3499444699_sub_3158760445_3536714472(IEEE_P_3499444699, t36, t4, t2, t14, t37);
    t17 = (t36 + 12U);
    t38 = *((unsigned int *)t17);
    t40 = (1U * t38);
    t3 = (13U != t40);
    if (t3 == 1)
        goto LAB40;

LAB41:    t19 = (t0 + 5168);
    t20 = (t19 + 56U);
    t22 = *((char **)t20);
    t23 = (t22 + 56U);
    t25 = *((char **)t23);
    memcpy(t25, t16, 13U);
    xsi_driver_first_trans_fast(t19);
    xsi_set_current_line(47, ng0);
    t2 = (t0 + 2632U);
    t4 = *((char **)t2);
    t2 = (t0 + 8044U);
    t6 = (t0 + 8257);
    t11 = (t37 + 0U);
    t13 = (t11 + 0U);
    *((int *)t13) = 0;
    t13 = (t11 + 4U);
    *((int *)t13) = 3;
    t13 = (t11 + 8U);
    *((int *)t13) = 1;
    t10 = (3 - 0);
    t38 = (t10 * 1);
    t38 = (t38 + 1);
    t13 = (t11 + 12U);
    *((unsigned int *)t13) = t38;
    t13 = ieee_p_3499444699_sub_2254111597_3536714472(IEEE_P_3499444699, t36, t4, t2, t6, t37);
    t14 = (t36 + 12U);
    t38 = *((unsigned int *)t14);
    t40 = (1U * t38);
    t3 = (4U != t40);
    if (t3 == 1)
        goto LAB42;

LAB43:    t16 = (t0 + 5040);
    t17 = (t16 + 56U);
    t19 = *((char **)t17);
    t20 = (t19 + 56U);
    t22 = *((char **)t20);
    memcpy(t22, t13, 4U);
    xsi_driver_first_trans_fast(t16);
    xsi_set_current_line(47, ng0);
    t2 = (t0 + 8261);
    t6 = (t0 + 5296);
    t7 = (t6 + 56U);
    t11 = *((char **)t7);
    t13 = (t11 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t2, 4U);
    xsi_driver_first_trans_fast(t6);
    goto LAB11;

LAB15:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 2632U);
    t4 = *((char **)t2);
    t2 = (t0 + 8044U);
    t3 = ieee_p_3499444699_sub_2368615388_3536714472(IEEE_P_3499444699, t4, t2, 10);
    if (t3 != 0)
        goto LAB44;

LAB46:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 8269);
    t6 = (t0 + 5296);
    t7 = (t6 + 56U);
    t11 = *((char **)t7);
    t13 = (t11 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t2, 4U);
    xsi_driver_first_trans_fast(t6);

LAB45:    goto LAB11;

LAB16:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 2312U);
    t4 = *((char **)t2);
    t2 = (t0 + 8012U);
    t6 = (t0 + 8273);
    t11 = (t0 + 1512U);
    t13 = *((char **)t11);
    t14 = ((IEEE_P_3499444699) + 2728);
    t16 = (t39 + 0U);
    t17 = (t16 + 0U);
    *((int *)t17) = 0;
    t17 = (t16 + 4U);
    *((int *)t17) = 1;
    t17 = (t16 + 8U);
    *((int *)t17) = 1;
    t10 = (1 - 0);
    t38 = (t10 * 1);
    t38 = (t38 + 1);
    t17 = (t16 + 12U);
    *((unsigned int *)t17) = t38;
    t17 = (t0 + 7932U);
    t11 = xsi_base_array_concat(t11, t37, t14, (char)97, t6, t39, (char)97, t13, t17, (char)101);
    t19 = ieee_p_3499444699_sub_3158760445_3536714472(IEEE_P_3499444699, t36, t4, t2, t11, t37);
    t20 = (t36 + 12U);
    t38 = *((unsigned int *)t20);
    t40 = (1U * t38);
    t3 = (21U != t40);
    if (t3 == 1)
        goto LAB47;

LAB48:    t22 = (t0 + 5232);
    t23 = (t22 + 56U);
    t25 = *((char **)t23);
    t26 = (t25 + 56U);
    t28 = *((char **)t26);
    memcpy(t28, t19, 21U);
    xsi_driver_first_trans_fast(t22);
    xsi_set_current_line(55, ng0);
    t2 = (t0 + 2792U);
    t4 = *((char **)t2);
    t2 = (t0 + 8060U);
    t6 = (t0 + 2952U);
    t7 = *((char **)t6);
    t6 = (t0 + 8060U);
    t11 = (t0 + 2632U);
    t13 = *((char **)t11);
    t11 = (t0 + 8044U);
    t14 = ieee_p_3499444699_sub_3327266423_3536714472(IEEE_P_3499444699, t37, t7, t6, t13, t11);
    t16 = ieee_p_3499444699_sub_3158760445_3536714472(IEEE_P_3499444699, t36, t4, t2, t14, t37);
    t17 = (t36 + 12U);
    t38 = *((unsigned int *)t17);
    t40 = (1U * t38);
    t3 = (13U != t40);
    if (t3 == 1)
        goto LAB49;

LAB50:    t19 = (t0 + 5104);
    t20 = (t19 + 56U);
    t22 = *((char **)t20);
    t23 = (t22 + 56U);
    t25 = *((char **)t23);
    memcpy(t25, t16, 13U);
    xsi_driver_first_trans_fast(t19);
    xsi_set_current_line(56, ng0);
    t2 = (t0 + 2952U);
    t4 = *((char **)t2);
    t2 = (t0 + 8060U);
    t6 = (t0 + 2792U);
    t7 = *((char **)t6);
    t6 = (t0 + 8060U);
    t11 = (t0 + 2632U);
    t13 = *((char **)t11);
    t11 = (t0 + 8044U);
    t14 = ieee_p_3499444699_sub_3327266423_3536714472(IEEE_P_3499444699, t37, t7, t6, t13, t11);
    t16 = ieee_p_3499444699_sub_3158832319_3536714472(IEEE_P_3499444699, t36, t4, t2, t14, t37);
    t17 = (t36 + 12U);
    t38 = *((unsigned int *)t17);
    t40 = (1U * t38);
    t3 = (13U != t40);
    if (t3 == 1)
        goto LAB51;

LAB52:    t19 = (t0 + 5168);
    t20 = (t19 + 56U);
    t22 = *((char **)t20);
    t23 = (t22 + 56U);
    t25 = *((char **)t23);
    memcpy(t25, t16, 13U);
    xsi_driver_first_trans_fast(t19);
    xsi_set_current_line(57, ng0);
    t2 = (t0 + 2632U);
    t4 = *((char **)t2);
    t2 = (t0 + 8044U);
    t6 = (t0 + 8275);
    t11 = (t37 + 0U);
    t13 = (t11 + 0U);
    *((int *)t13) = 0;
    t13 = (t11 + 4U);
    *((int *)t13) = 3;
    t13 = (t11 + 8U);
    *((int *)t13) = 1;
    t10 = (3 - 0);
    t38 = (t10 * 1);
    t38 = (t38 + 1);
    t13 = (t11 + 12U);
    *((unsigned int *)t13) = t38;
    t13 = ieee_p_3499444699_sub_2254111597_3536714472(IEEE_P_3499444699, t36, t4, t2, t6, t37);
    t14 = (t36 + 12U);
    t38 = *((unsigned int *)t14);
    t40 = (1U * t38);
    t3 = (4U != t40);
    if (t3 == 1)
        goto LAB53;

LAB54:    t16 = (t0 + 5040);
    t17 = (t16 + 56U);
    t19 = *((char **)t17);
    t20 = (t19 + 56U);
    t22 = *((char **)t20);
    memcpy(t22, t13, 4U);
    xsi_driver_first_trans_fast(t16);
    xsi_set_current_line(57, ng0);
    t2 = (t0 + 8279);
    t6 = (t0 + 5296);
    t7 = (t6 + 56U);
    t11 = *((char **)t7);
    t13 = (t11 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t2, 4U);
    xsi_driver_first_trans_fast(t6);
    goto LAB11;

LAB17:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 2632U);
    t4 = *((char **)t2);
    t2 = (t0 + 8044U);
    t3 = ieee_p_3499444699_sub_2368615388_3536714472(IEEE_P_3499444699, t4, t2, 10);
    if (t3 != 0)
        goto LAB55;

LAB57:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 8287);
    t6 = (t0 + 5296);
    t7 = (t6 + 56U);
    t11 = *((char **)t7);
    t13 = (t11 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t2, 4U);
    xsi_driver_first_trans_fast(t6);

LAB56:    goto LAB11;

LAB18:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 8291);
    t6 = (t0 + 5296);
    t7 = (t6 + 56U);
    t11 = *((char **)t7);
    t13 = (t11 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t2, 4U);
    xsi_driver_first_trans_fast(t6);
    goto LAB11;

LAB27:;
LAB28:    xsi_set_current_line(32, ng0);
    t28 = (t0 + 8197);
    t31 = (t0 + 5040);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    memcpy(t35, t28, 4U);
    xsi_driver_first_trans_fast(t31);
    xsi_set_current_line(33, ng0);
    t2 = (t0 + 8201);
    t6 = (t0 + 5104);
    t7 = (t6 + 56U);
    t11 = *((char **)t7);
    t13 = (t11 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t2, 13U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(33, ng0);
    t2 = (t0 + 8214);
    t6 = (t0 + 5168);
    t7 = (t6 + 56U);
    t11 = *((char **)t7);
    t13 = (t11 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t2, 13U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(34, ng0);
    t2 = (t0 + 1672U);
    t4 = *((char **)t2);
    t2 = (t0 + 8227);
    t11 = ((IEEE_P_3499444699) + 2728);
    t13 = (t0 + 7948U);
    t14 = (t37 + 0U);
    t16 = (t14 + 0U);
    *((int *)t16) = 0;
    t16 = (t14 + 4U);
    *((int *)t16) = 11;
    t16 = (t14 + 8U);
    *((int *)t16) = 1;
    t10 = (11 - 0);
    t38 = (t10 * 1);
    t38 = (t38 + 1);
    t16 = (t14 + 12U);
    *((unsigned int *)t16) = t38;
    t7 = xsi_base_array_concat(t7, t36, t11, (char)97, t4, t13, (char)97, t2, t37, (char)101);
    t38 = (9U + 12U);
    t3 = (21U != t38);
    if (t3 == 1)
        goto LAB31;

LAB32:    t16 = (t0 + 5232);
    t17 = (t16 + 56U);
    t19 = *((char **)t17);
    t20 = (t19 + 56U);
    t22 = *((char **)t20);
    memcpy(t22, t7, 21U);
    xsi_driver_first_trans_fast(t16);
    xsi_set_current_line(35, ng0);
    t2 = (t0 + 8239);
    t6 = (t0 + 5296);
    t7 = (t6 + 56U);
    t11 = *((char **)t7);
    t13 = (t11 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t2, 4U);
    xsi_driver_first_trans_fast(t6);
    goto LAB29;

LAB31:    xsi_size_not_matching(21U, t38, 0);
    goto LAB32;

LAB33:    xsi_set_current_line(41, ng0);
    t6 = (t0 + 8247);
    t11 = (t0 + 5296);
    t13 = (t11 + 56U);
    t14 = *((char **)t13);
    t16 = (t14 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t6, 4U);
    xsi_driver_first_trans_fast(t11);
    goto LAB34;

LAB36:    xsi_size_not_matching(21U, t40, 0);
    goto LAB37;

LAB38:    xsi_size_not_matching(13U, t40, 0);
    goto LAB39;

LAB40:    xsi_size_not_matching(13U, t40, 0);
    goto LAB41;

LAB42:    xsi_size_not_matching(4U, t40, 0);
    goto LAB43;

LAB44:    xsi_set_current_line(49, ng0);
    t6 = (t0 + 2952U);
    t7 = *((char **)t6);
    t6 = (t0 + 5360);
    t11 = (t6 + 56U);
    t13 = *((char **)t11);
    t14 = (t13 + 56U);
    t16 = *((char **)t14);
    memcpy(t16, t7, 13U);
    xsi_driver_first_trans_fast_port(t6);
    xsi_set_current_line(50, ng0);
    t2 = (t0 + 2792U);
    t4 = *((char **)t2);
    t2 = (t0 + 5424);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t11 = (t7 + 56U);
    t13 = *((char **)t11);
    memcpy(t13, t4, 13U);
    xsi_driver_first_trans_fast_port(t2);
    xsi_set_current_line(51, ng0);
    t2 = (t0 + 8265);
    t6 = (t0 + 5296);
    t7 = (t6 + 56U);
    t11 = *((char **)t7);
    t13 = (t11 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t2, 4U);
    xsi_driver_first_trans_fast(t6);
    goto LAB45;

LAB47:    xsi_size_not_matching(21U, t40, 0);
    goto LAB48;

LAB49:    xsi_size_not_matching(13U, t40, 0);
    goto LAB50;

LAB51:    xsi_size_not_matching(13U, t40, 0);
    goto LAB52;

LAB53:    xsi_size_not_matching(4U, t40, 0);
    goto LAB54;

LAB55:    xsi_set_current_line(61, ng0);
    t6 = (t0 + 2952U);
    t7 = *((char **)t6);
    t6 = (t0 + 5360);
    t11 = (t6 + 56U);
    t13 = *((char **)t11);
    t14 = (t13 + 56U);
    t16 = *((char **)t14);
    memcpy(t16, t7, 13U);
    xsi_driver_first_trans_fast_port(t6);
    xsi_set_current_line(62, ng0);
    t2 = (t0 + 2792U);
    t4 = *((char **)t2);
    t2 = (t0 + 5424);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t11 = (t7 + 56U);
    t13 = *((char **)t11);
    memcpy(t13, t4, 13U);
    xsi_driver_first_trans_fast_port(t2);
    xsi_set_current_line(63, ng0);
    t2 = (t0 + 8283);
    t6 = (t0 + 5296);
    t7 = (t6 + 56U);
    t11 = *((char **)t7);
    t13 = (t11 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t2, 4U);
    xsi_driver_first_trans_fast(t6);
    goto LAB56;

}

static void work_a_0103653237_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(70, ng0);

LAB3:    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t1 = (t0 + 5488);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 4U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 4944);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_0103653237_3212880686_p_2(char *t0)
{
    char t5[16];
    char *t1;
    char *t2;
    char *t3;
    char *t6;
    char *t7;
    int t8;
    unsigned int t9;
    unsigned char t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;

LAB0:    xsi_set_current_line(71, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t1 = (t0 + 8028U);
    t3 = (t0 + 8299);
    t6 = (t5 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 0;
    t7 = (t6 + 4U);
    *((int *)t7) = 3;
    t7 = (t6 + 8U);
    *((int *)t7) = 1;
    t8 = (3 - 0);
    t9 = (t8 * 1);
    t9 = (t9 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t9;
    t10 = ieee_p_0774719531_sub_2698824431_2162500114(IEEE_P_0774719531, t2, t1, t3, t5);
    if (t10 != 0)
        goto LAB3;

LAB4:
LAB5:    t15 = (t0 + 5552);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    *((unsigned char *)t19) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t15);

LAB2:    t20 = (t0 + 4960);
    *((int *)t20) = 1;

LAB1:    return;
LAB3:    t7 = (t0 + 5552);
    t11 = (t7 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t7);
    goto LAB2;

LAB6:    goto LAB2;

}


extern void work_a_0103653237_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0103653237_3212880686_p_0,(void *)work_a_0103653237_3212880686_p_1,(void *)work_a_0103653237_3212880686_p_2};
	xsi_register_didat("work_a_0103653237_3212880686", "isim/CORDIC_isim_beh.exe.sim/work/a_0103653237_3212880686.didat");
	xsi_register_executes(pe);
}
