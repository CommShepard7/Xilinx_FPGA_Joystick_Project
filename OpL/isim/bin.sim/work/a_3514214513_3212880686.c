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
static const char *ng0 = "/home/eadjeba/Xilinx/fournitures/OpL/SlaveOpl.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_13554554585326073636_503743352(char *, char *, unsigned int , unsigned int );
char *ieee_p_2592010699_sub_16439989833316239837_503743352(char *, char *, char *, char *, char *, char *);
char *ieee_p_2592010699_sub_16439989833707593767_503743352(char *, char *, char *, char *, char *, char *);
char *ieee_p_2592010699_sub_16447329934917513135_503743352(char *, char *, char *, char *, char *, char *);
unsigned char ieee_p_2592010699_sub_2763492388968962707_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_3514214513_3212880686_p_0(char *t0)
{
    char t18[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    int t9;
    int t10;
    int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    char *t17;
    char *t19;
    char *t20;

LAB0:    xsi_set_current_line(36, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 992U);
    t3 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 4672);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(37, ng0);
    t1 = (t0 + 4768);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((int *)t8) = 7;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(38, ng0);
    t1 = (t0 + 4832);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((int *)t7) = 0;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 2632U);
    t5 = *((char **)t2);
    t9 = *((int *)t5);
    if (t9 == 0)
        goto LAB8;

LAB11:    if (t9 == 1)
        goto LAB9;

LAB12:
LAB10:    xsi_set_current_line(62, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t9 = *((int *)t2);
    t3 = (t9 > 0);
    if (t3 != 0)
        goto LAB20;

LAB22:    xsi_set_current_line(65, ng0);
    t1 = (t0 + 4768);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((int *)t7) = 7;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(66, ng0);
    t1 = (t0 + 4832);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((int *)t7) = 0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(68, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t1 = (t0 + 7688U);
    t5 = (t0 + 1832U);
    t6 = *((char **)t5);
    t5 = (t0 + 7704U);
    t7 = ieee_p_2592010699_sub_16447329934917513135_503743352(IEEE_P_2592010699, t18, t2, t1, t6, t5);
    t8 = (t18 + 12U);
    t12 = *((unsigned int *)t8);
    t13 = (1U * t12);
    t3 = (8U != t13);
    if (t3 == 1)
        goto LAB23;

LAB24:    t15 = (t0 + 5024);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t19 = (t17 + 56U);
    t20 = *((char **)t19);
    memcpy(t20, t7, 8U);
    xsi_driver_first_trans_fast(t15);
    xsi_set_current_line(69, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t1 = (t0 + 7688U);
    t5 = (t0 + 1832U);
    t6 = *((char **)t5);
    t5 = (t0 + 7704U);
    t7 = ieee_p_2592010699_sub_16439989833316239837_503743352(IEEE_P_2592010699, t18, t2, t1, t6, t5);
    t8 = (t18 + 12U);
    t12 = *((unsigned int *)t8);
    t13 = (1U * t12);
    t3 = (8U != t13);
    if (t3 == 1)
        goto LAB25;

LAB26:    t15 = (t0 + 5088);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t19 = (t17 + 56U);
    t20 = *((char **)t19);
    memcpy(t20, t7, 8U);
    xsi_driver_first_trans_fast(t15);
    xsi_set_current_line(70, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t1 = (t0 + 7688U);
    t5 = (t0 + 1832U);
    t6 = *((char **)t5);
    t5 = (t0 + 7704U);
    t7 = ieee_p_2592010699_sub_16439989833707593767_503743352(IEEE_P_2592010699, t18, t2, t1, t6, t5);
    t8 = (t18 + 12U);
    t12 = *((unsigned int *)t8);
    t13 = (1U * t12);
    t3 = (8U != t13);
    if (t3 == 1)
        goto LAB27;

LAB28:    t15 = (t0 + 5152);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t19 = (t17 + 56U);
    t20 = *((char **)t19);
    memcpy(t20, t7, 8U);
    xsi_driver_first_trans_fast(t15);

LAB21:
LAB7:    goto LAB3;

LAB8:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 1192U);
    t6 = *((char **)t2);
    t4 = *((unsigned char *)t6);
    t2 = (t0 + 2472U);
    t7 = *((char **)t2);
    t10 = *((int *)t7);
    t11 = (t10 - 7);
    t12 = (t11 * -1);
    t13 = (1 * t12);
    t14 = (0U + t13);
    t2 = (t0 + 4896);
    t8 = (t2 + 56U);
    t15 = *((char **)t8);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    *((unsigned char *)t17) = t4;
    xsi_driver_first_trans_delta(t2, t14, 1, 0LL);
    xsi_set_current_line(44, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t9 = *((int *)t2);
    t3 = (t9 > 0);
    if (t3 != 0)
        goto LAB14;

LAB16:    xsi_set_current_line(47, ng0);
    t1 = (t0 + 4768);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((int *)t7) = 7;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(48, ng0);
    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t9 = *((int *)t2);
    t10 = (t9 + 1);
    t1 = (t0 + 4832);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((int *)t8) = t10;
    xsi_driver_first_trans_fast(t1);

LAB15:    goto LAB7;

LAB9:    xsi_set_current_line(52, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 2472U);
    t5 = *((char **)t1);
    t9 = *((int *)t5);
    t10 = (t9 - 7);
    t12 = (t10 * -1);
    t13 = (1 * t12);
    t14 = (0U + t13);
    t1 = (t0 + 4960);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t15 = *((char **)t8);
    *((unsigned char *)t15) = t3;
    xsi_driver_first_trans_delta(t1, t14, 1, 0LL);
    xsi_set_current_line(54, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t9 = *((int *)t2);
    t3 = (t9 > 0);
    if (t3 != 0)
        goto LAB17;

LAB19:    xsi_set_current_line(57, ng0);
    t1 = (t0 + 4768);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((int *)t7) = 7;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(58, ng0);
    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t9 = *((int *)t2);
    t10 = (t9 + 1);
    t1 = (t0 + 4832);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((int *)t8) = t10;
    xsi_driver_first_trans_fast(t1);

LAB18:    goto LAB7;

LAB13:;
LAB14:    xsi_set_current_line(45, ng0);
    t1 = (t0 + 2472U);
    t5 = *((char **)t1);
    t10 = *((int *)t5);
    t11 = (t10 - 1);
    t1 = (t0 + 4768);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t15 = *((char **)t8);
    *((int *)t15) = t11;
    xsi_driver_first_trans_fast(t1);
    goto LAB15;

LAB17:    xsi_set_current_line(55, ng0);
    t1 = (t0 + 2472U);
    t5 = *((char **)t1);
    t10 = *((int *)t5);
    t11 = (t10 - 1);
    t1 = (t0 + 4768);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t15 = *((char **)t8);
    *((int *)t15) = t11;
    xsi_driver_first_trans_fast(t1);
    goto LAB18;

LAB20:    xsi_set_current_line(63, ng0);
    t1 = (t0 + 2472U);
    t5 = *((char **)t1);
    t10 = *((int *)t5);
    t11 = (t10 - 1);
    t1 = (t0 + 4768);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t15 = *((char **)t8);
    *((int *)t15) = t11;
    xsi_driver_first_trans_fast(t1);
    goto LAB21;

LAB23:    xsi_size_not_matching(8U, t13, 0);
    goto LAB24;

LAB25:    xsi_size_not_matching(8U, t13, 0);
    goto LAB26;

LAB27:    xsi_size_not_matching(8U, t13, 0);
    goto LAB28;

}

static void work_a_3514214513_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    int t9;
    int t10;
    int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    xsi_set_current_line(80, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 992U);
    t3 = ieee_p_2592010699_sub_13554554585326073636_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 4688);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(81, ng0);
    t1 = (t0 + 5216);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((int *)t8) = 7;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(82, ng0);
    t1 = (t0 + 5280);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((int *)t7) = 0;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(84, ng0);
    t2 = (t0 + 2952U);
    t5 = *((char **)t2);
    t9 = *((int *)t5);
    if (t9 == 0)
        goto LAB8;

LAB11:    if (t9 == 1)
        goto LAB9;

LAB12:
LAB10:    xsi_set_current_line(106, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t1 = (t0 + 2792U);
    t5 = *((char **)t1);
    t9 = *((int *)t5);
    t10 = (t9 - 7);
    t12 = (t10 * -1);
    xsi_vhdl_check_range_of_index(7, 0, -1, t9);
    t13 = (1U * t12);
    t14 = (0 + t13);
    t1 = (t2 + t14);
    t3 = *((unsigned char *)t1);
    t6 = (t0 + 5344);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t15 = (t8 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = t3;
    xsi_driver_first_trans_fast_port(t6);
    xsi_set_current_line(108, ng0);
    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    t9 = *((int *)t2);
    t3 = (t9 > 0);
    if (t3 != 0)
        goto LAB20;

LAB22:    xsi_set_current_line(111, ng0);
    t1 = (t0 + 5216);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((int *)t7) = 7;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(112, ng0);
    t1 = (t0 + 5280);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((int *)t7) = 0;
    xsi_driver_first_trans_fast(t1);

LAB21:
LAB7:    goto LAB3;

LAB8:    xsi_set_current_line(86, ng0);
    t2 = (t0 + 1992U);
    t6 = *((char **)t2);
    t2 = (t0 + 2792U);
    t7 = *((char **)t2);
    t10 = *((int *)t7);
    t11 = (t10 - 7);
    t12 = (t11 * -1);
    xsi_vhdl_check_range_of_index(7, 0, -1, t10);
    t13 = (1U * t12);
    t14 = (0 + t13);
    t2 = (t6 + t14);
    t4 = *((unsigned char *)t2);
    t8 = (t0 + 5344);
    t15 = (t8 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    *((unsigned char *)t18) = t4;
    xsi_driver_first_trans_fast_port(t8);
    xsi_set_current_line(88, ng0);
    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    t9 = *((int *)t2);
    t3 = (t9 > 0);
    if (t3 != 0)
        goto LAB14;

LAB16:    xsi_set_current_line(91, ng0);
    t1 = (t0 + 5216);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((int *)t7) = 7;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(92, ng0);
    t1 = (t0 + 2952U);
    t2 = *((char **)t1);
    t9 = *((int *)t2);
    t10 = (t9 + 1);
    t1 = (t0 + 5280);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((int *)t8) = t10;
    xsi_driver_first_trans_fast(t1);

LAB15:    goto LAB7;

LAB9:    xsi_set_current_line(96, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t1 = (t0 + 2792U);
    t5 = *((char **)t1);
    t9 = *((int *)t5);
    t10 = (t9 - 7);
    t12 = (t10 * -1);
    xsi_vhdl_check_range_of_index(7, 0, -1, t9);
    t13 = (1U * t12);
    t14 = (0 + t13);
    t1 = (t2 + t14);
    t3 = *((unsigned char *)t1);
    t6 = (t0 + 5344);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t15 = (t8 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = t3;
    xsi_driver_first_trans_fast_port(t6);
    xsi_set_current_line(98, ng0);
    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    t9 = *((int *)t2);
    t3 = (t9 > 0);
    if (t3 != 0)
        goto LAB17;

LAB19:    xsi_set_current_line(101, ng0);
    t1 = (t0 + 5216);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((int *)t7) = 7;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(102, ng0);
    t1 = (t0 + 2952U);
    t2 = *((char **)t1);
    t9 = *((int *)t2);
    t10 = (t9 + 1);
    t1 = (t0 + 5280);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((int *)t8) = t10;
    xsi_driver_first_trans_fast(t1);

LAB18:    goto LAB7;

LAB13:;
LAB14:    xsi_set_current_line(89, ng0);
    t1 = (t0 + 2792U);
    t5 = *((char **)t1);
    t10 = *((int *)t5);
    t11 = (t10 - 1);
    t1 = (t0 + 5216);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t15 = *((char **)t8);
    *((int *)t15) = t11;
    xsi_driver_first_trans_fast(t1);
    goto LAB15;

LAB17:    xsi_set_current_line(99, ng0);
    t1 = (t0 + 2792U);
    t5 = *((char **)t1);
    t10 = *((int *)t5);
    t11 = (t10 - 1);
    t1 = (t0 + 5216);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t15 = *((char **)t8);
    *((int *)t15) = t11;
    xsi_driver_first_trans_fast(t1);
    goto LAB18;

LAB20:    xsi_set_current_line(109, ng0);
    t1 = (t0 + 2792U);
    t5 = *((char **)t1);
    t10 = *((int *)t5);
    t11 = (t10 - 1);
    t1 = (t0 + 5216);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t15 = *((char **)t8);
    *((int *)t15) = t11;
    xsi_driver_first_trans_fast(t1);
    goto LAB21;

}


extern void work_a_3514214513_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3514214513_3212880686_p_0,(void *)work_a_3514214513_3212880686_p_1};
	xsi_register_didat("work_a_3514214513_3212880686", "isim/bin.sim/work/a_3514214513_3212880686.didat");
	xsi_register_executes(pe);
}
