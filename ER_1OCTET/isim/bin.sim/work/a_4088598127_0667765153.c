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

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/eadjeba/Xilinx/fournitures/ER_1OCTET/er_1octet.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_2763492388968962707_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_4088598127_0667765153_p_0(char *t0)
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
    char *t12;
    char *t13;
    int t14;
    int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    int t19;
    static char *nl0[] = {&&LAB8, &&LAB9, &&LAB10};

LAB0:    xsi_set_current_line(34, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 1152U);
    t3 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 4184);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(36, ng0);
    t1 = (t0 + 2768U);
    t5 = *((char **)t1);
    t1 = (t5 + 0);
    *((int *)t1) = 7;
    xsi_set_current_line(38, ng0);
    t1 = xsi_get_transient_memory(8U);
    memset(t1, 0, 8U);
    t2 = t1;
    memset(t2, (unsigned char)0, 8U);
    t5 = (t0 + 2888U);
    t6 = *((char **)t5);
    t5 = (t6 + 0);
    memcpy(t5, t1, 8U);
    xsi_set_current_line(40, ng0);
    t1 = xsi_get_transient_memory(8U);
    memset(t1, 0, 8U);
    t2 = t1;
    memset(t2, (unsigned char)2, 8U);
    t5 = (t0 + 4264);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 8U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(42, ng0);
    t1 = (t0 + 4328);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(44, ng0);
    t1 = (t0 + 4392);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(46, ng0);
    t1 = (t0 + 4456);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(48, ng0);
    t1 = (t0 + 4520);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 2472U);
    t5 = *((char **)t2);
    t4 = *((unsigned char *)t5);
    t2 = (char *)((nl0) + t4);
    goto **((char **)t2);

LAB7:    goto LAB3;

LAB8:    xsi_set_current_line(56, ng0);
    t6 = (t0 + 1352U);
    t7 = *((char **)t6);
    t10 = *((unsigned char *)t7);
    t11 = (t10 == (unsigned char)3);
    if (t11 != 0)
        goto LAB11;

LAB13:    xsi_set_current_line(72, ng0);

LAB12:    goto LAB7;

LAB9:    xsi_set_current_line(78, ng0);
    t1 = (t0 + 2888U);
    t2 = *((char **)t1);
    t1 = (t0 + 2768U);
    t5 = *((char **)t1);
    t14 = *((int *)t5);
    t15 = (t14 - 7);
    t16 = (t15 * -1);
    xsi_vhdl_check_range_of_index(7, 0, -1, t14);
    t17 = (1U * t16);
    t18 = (0 + t17);
    t1 = (t2 + t18);
    t3 = *((unsigned char *)t1);
    t6 = (t0 + 4328);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t12 = *((char **)t9);
    *((unsigned char *)t12) = t3;
    xsi_driver_first_trans_fast_port(t6);
    xsi_set_current_line(80, ng0);
    t1 = (t0 + 4392);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(82, ng0);
    t1 = (t0 + 4520);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB7;

LAB10:    xsi_set_current_line(86, ng0);
    t1 = (t0 + 2768U);
    t2 = *((char **)t1);
    t14 = *((int *)t2);
    t3 = (t14 > 0);
    if (t3 != 0)
        goto LAB14;

LAB16:    xsi_set_current_line(100, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 2888U);
    t5 = *((char **)t1);
    t1 = (t0 + 2768U);
    t6 = *((char **)t1);
    t14 = *((int *)t6);
    t15 = (t14 - 7);
    t16 = (t15 * -1);
    xsi_vhdl_check_range_of_index(7, 0, -1, t14);
    t17 = (1U * t16);
    t18 = (0 + t17);
    t1 = (t5 + t18);
    *((unsigned char *)t1) = t3;
    xsi_set_current_line(102, ng0);
    t1 = (t0 + 2888U);
    t2 = *((char **)t1);
    t1 = (t0 + 4264);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(104, ng0);
    t1 = (t0 + 4392);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(106, ng0);
    t1 = (t0 + 4456);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(108, ng0);
    t1 = (t0 + 4520);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);

LAB15:    goto LAB7;

LAB11:    xsi_set_current_line(58, ng0);
    t6 = (t0 + 4456);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    t12 = (t9 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t6);
    xsi_set_current_line(60, ng0);
    t1 = (t0 + 4392);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(62, ng0);
    t1 = (t0 + 2768U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((int *)t1) = 7;
    xsi_set_current_line(64, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t1 = (t0 + 2888U);
    t5 = *((char **)t1);
    t1 = (t5 + 0);
    memcpy(t1, t2, 8U);
    xsi_set_current_line(66, ng0);
    t1 = (t0 + 2888U);
    t2 = *((char **)t1);
    t1 = (t0 + 2768U);
    t5 = *((char **)t1);
    t14 = *((int *)t5);
    t15 = (t14 - 7);
    t16 = (t15 * -1);
    xsi_vhdl_check_range_of_index(7, 0, -1, t14);
    t17 = (1U * t16);
    t18 = (0 + t17);
    t1 = (t2 + t18);
    t3 = *((unsigned char *)t1);
    t6 = (t0 + 4328);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t12 = *((char **)t9);
    *((unsigned char *)t12) = t3;
    xsi_driver_first_trans_fast_port(t6);
    xsi_set_current_line(68, ng0);
    t1 = (t0 + 4520);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB12;

LAB14:    xsi_set_current_line(88, ng0);
    t1 = (t0 + 1672U);
    t5 = *((char **)t1);
    t4 = *((unsigned char *)t5);
    t1 = (t0 + 2888U);
    t6 = *((char **)t1);
    t1 = (t0 + 2768U);
    t7 = *((char **)t1);
    t15 = *((int *)t7);
    t19 = (t15 - 7);
    t16 = (t19 * -1);
    xsi_vhdl_check_range_of_index(7, 0, -1, t15);
    t17 = (1U * t16);
    t18 = (0 + t17);
    t1 = (t6 + t18);
    *((unsigned char *)t1) = t4;
    xsi_set_current_line(90, ng0);
    t1 = (t0 + 2768U);
    t2 = *((char **)t1);
    t14 = *((int *)t2);
    t15 = (t14 - 1);
    t1 = (t0 + 2768U);
    t5 = *((char **)t1);
    t1 = (t5 + 0);
    *((int *)t1) = t15;
    xsi_set_current_line(92, ng0);
    t1 = (t0 + 4392);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(96, ng0);
    t1 = (t0 + 4520);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    goto LAB15;

}


extern void work_a_4088598127_0667765153_init()
{
	static char *pe[] = {(void *)work_a_4088598127_0667765153_p_0};
	xsi_register_didat("work_a_4088598127_0667765153", "isim/bin.sim/work/a_4088598127_0667765153.didat");
	xsi_register_executes(pe);
}
