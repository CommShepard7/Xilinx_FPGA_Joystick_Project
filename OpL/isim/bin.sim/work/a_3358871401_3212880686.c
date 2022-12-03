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
static const char *ng0 = "/home/eadjeba/Xilinx/fournitures/OpL/MasterOpl.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_2763492388968962707_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_3358871401_3212880686_p_0(char *t0)
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
    unsigned char t11;
    unsigned char t12;
    char *t13;
    int t14;
    int t15;
    int t16;
    int t17;
    unsigned char t18;
    static char *nl0[] = {&&LAB8, &&LAB9, &&LAB10};

LAB0:    xsi_set_current_line(75, ng0);
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
LAB3:    t1 = (t0 + 6304);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(77, ng0);
    t1 = xsi_get_transient_memory(8U);
    memset(t1, 0, 8U);
    t5 = t1;
    memset(t5, (unsigned char)2, 8U);
    t6 = (t0 + 6384);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 8U);
    xsi_driver_first_trans_fast_port(t6);
    xsi_set_current_line(78, ng0);
    t1 = xsi_get_transient_memory(8U);
    memset(t1, 0, 8U);
    t2 = t1;
    memset(t2, (unsigned char)2, 8U);
    t5 = (t0 + 6448);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 8U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(79, ng0);
    t1 = xsi_get_transient_memory(8U);
    memset(t1, 0, 8U);
    t2 = t1;
    memset(t2, (unsigned char)2, 8U);
    t5 = (t0 + 6512);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 8U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(80, ng0);
    t1 = (t0 + 6576);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(81, ng0);
    t1 = (t0 + 6640);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(82, ng0);
    t1 = (t0 + 6704);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(87, ng0);
    t2 = (t0 + 3112U);
    t5 = *((char **)t2);
    t4 = *((unsigned char *)t5);
    t2 = (char *)((nl0) + t4);
    goto **((char **)t2);

LAB7:    goto LAB3;

LAB8:    xsi_set_current_line(91, ng0);
    t6 = (t0 + 1352U);
    t7 = *((char **)t6);
    t11 = *((unsigned char *)t7);
    t12 = (t11 == (unsigned char)3);
    if (t12 != 0)
        goto LAB11;

LAB13:
LAB12:    goto LAB7;

LAB9:    xsi_set_current_line(106, ng0);
    t1 = (t0 + 4888U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB14;

LAB16:    xsi_set_current_line(123, ng0);
    t1 = (t0 + 4768U);
    t2 = *((char **)t1);
    t14 = *((int *)t2);
    t15 = (3 - 1);
    t4 = (t14 < t15);
    if (t4 == 1)
        goto LAB23;

LAB24:    t3 = (unsigned char)0;

LAB25:    if (t3 != 0)
        goto LAB20;

LAB22:    xsi_set_current_line(129, ng0);
    t1 = (t0 + 4768U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((int *)t1) = 1;
    xsi_set_current_line(132, ng0);
    t1 = (t0 + 4648U);
    t2 = *((char **)t1);
    t14 = *((int *)t2);
    if (t14 == 2)
        goto LAB27;

LAB30:    if (t14 == 3)
        goto LAB28;

LAB31:
LAB29:    xsi_set_current_line(148, ng0);

LAB26:
LAB21:
LAB15:    goto LAB7;

LAB10:    xsi_set_current_line(158, ng0);
    t1 = (t0 + 3272U);
    t2 = *((char **)t1);
    t4 = *((unsigned char *)t2);
    t11 = (t4 == (unsigned char)3);
    if (t11 == 1)
        goto LAB36;

LAB37:    t3 = (unsigned char)0;

LAB38:    if (t3 != 0)
        goto LAB33;

LAB35:    t1 = (t0 + 3272U);
    t2 = *((char **)t1);
    t4 = *((unsigned char *)t2);
    t11 = (t4 == (unsigned char)2);
    if (t11 == 1)
        goto LAB41;

LAB42:    t3 = (unsigned char)0;

LAB43:    if (t3 != 0)
        goto LAB39;

LAB40:
LAB34:    goto LAB7;

LAB11:    xsi_set_current_line(93, ng0);
    t6 = (t0 + 6640);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t13 = *((char **)t10);
    *((unsigned char *)t13) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t6);
    xsi_set_current_line(94, ng0);
    t1 = (t0 + 6576);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(95, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t1 = (t0 + 4408U);
    t5 = *((char **)t1);
    t1 = (t5 + 0);
    memcpy(t1, t2, 8U);
    xsi_set_current_line(96, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t1 = (t0 + 4528U);
    t5 = *((char **)t1);
    t1 = (t5 + 0);
    memcpy(t1, t2, 8U);
    xsi_set_current_line(97, ng0);
    t1 = (t0 + 4768U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((int *)t1) = 1;
    xsi_set_current_line(98, ng0);
    t1 = (t0 + 4648U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((int *)t1) = 1;
    xsi_set_current_line(99, ng0);
    t1 = (t0 + 4888U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((unsigned char *)t1) = (unsigned char)2;
    xsi_set_current_line(100, ng0);
    t1 = (t0 + 6704);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    goto LAB12;

LAB14:    xsi_set_current_line(108, ng0);
    t1 = (t0 + 4768U);
    t5 = *((char **)t1);
    t14 = *((int *)t5);
    t15 = (10 - 1);
    t11 = (t14 < t15);
    if (t11 != 0)
        goto LAB17;

LAB19:    xsi_set_current_line(114, ng0);
    t1 = (t0 + 4768U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((int *)t1) = 1;
    xsi_set_current_line(115, ng0);
    t1 = (t0 + 4408U);
    t2 = *((char **)t1);
    t1 = (t0 + 6768);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(116, ng0);
    t1 = (t0 + 6832);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(117, ng0);
    t1 = (t0 + 6704);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB18:    goto LAB15;

LAB17:    xsi_set_current_line(110, ng0);
    t1 = (t0 + 4768U);
    t6 = *((char **)t1);
    t16 = *((int *)t6);
    t17 = (t16 + 1);
    t1 = (t0 + 4768U);
    t7 = *((char **)t1);
    t1 = (t7 + 0);
    *((int *)t1) = t17;
    goto LAB18;

LAB20:    xsi_set_current_line(125, ng0);
    t1 = (t0 + 4768U);
    t6 = *((char **)t1);
    t16 = *((int *)t6);
    t17 = (t16 + 1);
    t1 = (t0 + 4768U);
    t7 = *((char **)t1);
    t1 = (t7 + 0);
    *((int *)t1) = t17;
    goto LAB21;

LAB23:    t1 = (t0 + 5008U);
    t5 = *((char **)t1);
    t11 = *((unsigned char *)t5);
    t12 = (t11 == (unsigned char)2);
    t3 = t12;
    goto LAB25;

LAB27:    xsi_set_current_line(136, ng0);
    t1 = (t0 + 4528U);
    t5 = *((char **)t1);
    t1 = (t0 + 6768);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t5, 8U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(137, ng0);
    t1 = (t0 + 6832);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(138, ng0);
    t1 = (t0 + 6704);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB26;

LAB28:    xsi_set_current_line(142, ng0);
    t1 = xsi_get_transient_memory(8U);
    memset(t1, 0, 8U);
    t2 = t1;
    memset(t2, (unsigned char)2, 8U);
    t5 = (t0 + 6768);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 8U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(143, ng0);
    t1 = (t0 + 6832);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(144, ng0);
    t1 = (t0 + 6704);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB26;

LAB32:;
LAB33:    xsi_set_current_line(160, ng0);
    t1 = (t0 + 6832);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB34;

LAB36:    t1 = (t0 + 3432U);
    t5 = *((char **)t1);
    t12 = *((unsigned char *)t5);
    t18 = (t12 == (unsigned char)3);
    t3 = t18;
    goto LAB38;

LAB39:    xsi_set_current_line(164, ng0);
    t1 = (t0 + 4648U);
    t6 = *((char **)t1);
    t14 = *((int *)t6);
    if (t14 == 1)
        goto LAB45;

LAB49:    if (t14 == 2)
        goto LAB46;

LAB50:    if (t14 == 3)
        goto LAB47;

LAB51:
LAB48:    xsi_set_current_line(191, ng0);

LAB44:    goto LAB34;

LAB41:    t1 = (t0 + 3432U);
    t5 = *((char **)t1);
    t12 = *((unsigned char *)t5);
    t18 = (t12 == (unsigned char)2);
    t3 = t18;
    goto LAB43;

LAB45:    xsi_set_current_line(168, ng0);
    t1 = (t0 + 3752U);
    t7 = *((char **)t1);
    t1 = (t0 + 6384);
    t8 = (t1 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t13 = *((char **)t10);
    memcpy(t13, t7, 8U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(169, ng0);
    t1 = (t0 + 4888U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((unsigned char *)t1) = (unsigned char)3;
    xsi_set_current_line(170, ng0);
    t1 = (t0 + 4648U);
    t2 = *((char **)t1);
    t14 = *((int *)t2);
    t15 = (t14 + 1);
    t1 = (t0 + 4648U);
    t5 = *((char **)t1);
    t1 = (t5 + 0);
    *((int *)t1) = t15;
    xsi_set_current_line(171, ng0);
    t1 = (t0 + 6704);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    goto LAB44;

LAB46:    xsi_set_current_line(175, ng0);
    t1 = (t0 + 3752U);
    t2 = *((char **)t1);
    t1 = (t0 + 6512);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(176, ng0);
    t1 = (t0 + 4888U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((unsigned char *)t1) = (unsigned char)3;
    xsi_set_current_line(177, ng0);
    t1 = (t0 + 4648U);
    t2 = *((char **)t1);
    t14 = *((int *)t2);
    t15 = (t14 + 1);
    t1 = (t0 + 4648U);
    t5 = *((char **)t1);
    t1 = (t5 + 0);
    *((int *)t1) = t15;
    xsi_set_current_line(178, ng0);
    t1 = (t0 + 6704);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    goto LAB44;

LAB47:    xsi_set_current_line(182, ng0);
    t1 = (t0 + 3752U);
    t2 = *((char **)t1);
    t1 = (t0 + 6448);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(183, ng0);
    t1 = (t0 + 4888U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((unsigned char *)t1) = (unsigned char)3;
    xsi_set_current_line(184, ng0);
    t1 = (t0 + 6640);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(185, ng0);
    t1 = (t0 + 6576);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(186, ng0);
    t1 = (t0 + 6832);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(187, ng0);
    t1 = (t0 + 6704);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB44;

LAB52:;
}


extern void work_a_3358871401_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3358871401_3212880686_p_0};
	xsi_register_didat("work_a_3358871401_3212880686", "isim/bin.sim/work/a_3358871401_3212880686.didat");
	xsi_register_executes(pe);
}
