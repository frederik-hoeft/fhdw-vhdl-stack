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
extern char *IEEE_P_2592010699;
extern char *UNISIM_P_3222816464;

unsigned char ieee_p_2592010699_sub_2763492388968962707_503743352(char *, char *, unsigned int , unsigned int );
unsigned char unisim_p_3222816464_sub_13603907777220050653_279109243(char *, char *, char *);
int unisim_p_3222816464_sub_1852110656102734653_279109243(char *, char *, char *);


char *unisim_a_0183094956_0190745412_sub_6906132381291017968_468007323(char *t1, char *t2, char *t3)
{
    char t4[248];
    char t5[24];
    char t6[32];
    char t15[4096];
    char t21[16];
    char t27[8];
    char *t0;
    char *t7;
    char *t8;
    int t9;
    unsigned int t10;
    char *t11;
    int t12;
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t22;
    char *t23;
    int t24;
    char *t25;
    char *t26;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    unsigned char t32;
    char *t33;
    int t34;
    int t35;
    int t36;
    int t37;
    char *t38;
    int t39;
    char *t40;
    char *t41;
    int t42;
    int t43;
    char *t44;
    int t45;
    int t46;
    int t47;
    char *t48;
    int t49;
    int t50;
    int t51;
    char *t52;
    int t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    int t61;
    int t62;
    char *t63;
    int t64;
    int t65;
    int t66;
    char *t67;
    int t68;
    int t69;
    int t70;
    unsigned int t71;
    unsigned int t72;

LAB0:    t7 = (t6 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 511;
    t8 = (t7 + 4U);
    *((int *)t8) = 0;
    t8 = (t7 + 8U);
    *((int *)t8) = -1;
    t9 = (0 - 511);
    t10 = (t9 * -1);
    t10 = (t10 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t10;
    t8 = (t6 + 16U);
    t11 = (t8 + 0U);
    *((int *)t11) = 7;
    t11 = (t8 + 4U);
    *((int *)t11) = 0;
    t11 = (t8 + 8U);
    *((int *)t11) = -1;
    t12 = (0 - 7);
    t10 = (t12 * -1);
    t10 = (t10 + 1);
    t11 = (t8 + 12U);
    *((unsigned int *)t11) = t10;
    t11 = (t4 + 4U);
    t13 = (t1 + 6656);
    t14 = (t11 + 88U);
    *((char **)t14) = t13;
    t16 = (t11 + 56U);
    *((char **)t16) = t15;
    xsi_type_set_default_value(t13, t15, 0);
    t17 = (t11 + 64U);
    t18 = (t13 + 72U);
    t19 = *((char **)t18);
    *((char **)t17) = t19;
    t20 = (t11 + 80U);
    *((unsigned int *)t20) = 4096U;
    t22 = (t21 + 0U);
    t23 = (t22 + 0U);
    *((int *)t23) = 7;
    t23 = (t22 + 4U);
    *((int *)t23) = 0;
    t23 = (t22 + 8U);
    *((int *)t23) = -1;
    t24 = (0 - 7);
    t10 = (t24 * -1);
    t10 = (t10 + 1);
    t23 = (t22 + 12U);
    *((unsigned int *)t23) = t10;
    t23 = (t4 + 124U);
    t25 = ((IEEE_P_2592010699) + 4000);
    t26 = (t23 + 88U);
    *((char **)t26) = t25;
    t28 = (t23 + 56U);
    *((char **)t28) = t27;
    xsi_type_set_default_value(t25, t27, t21);
    t29 = (t23 + 64U);
    *((char **)t29) = t21;
    t30 = (t23 + 80U);
    *((unsigned int *)t30) = 8U;
    t31 = (t5 + 4U);
    t32 = (t2 != 0);
    if (t32 == 1)
        goto LAB3;

LAB2:    t33 = (t5 + 12U);
    *((char **)t33) = t3;
    if (511 > 0)
        goto LAB8;

LAB9:    if (-1 == -1)
        goto LAB13;

LAB14:    t34 = 0;

LAB10:    if (511 > 0)
        goto LAB15;

LAB16:    if (-1 == -1)
        goto LAB20;

LAB21:    t35 = 511;

LAB17:    t36 = t35;
    t37 = t34;

LAB4:    if (t36 <= t37)
        goto LAB5;

LAB7:    t7 = (t11 + 56U);
    t8 = *((char **)t7);
    t32 = (4096U != 4096U);
    if (t32 == 1)
        goto LAB23;

LAB24:    t0 = xsi_get_transient_memory(4096U);
    memcpy(t0, t8, 4096U);

LAB1:    return t0;
LAB3:    *((char **)t31) = t2;
    goto LAB2;

LAB5:    t38 = (t3 + 0U);
    t39 = *((int *)t38);
    t40 = (t1 + 4328U);
    t41 = *((char **)t40);
    t42 = *((int *)t41);
    t43 = (t36 * t42);
    t40 = (t1 + 4328U);
    t44 = *((char **)t40);
    t45 = *((int *)t44);
    t46 = (t45 - 1);
    t47 = (t43 + t46);
    t10 = (t39 - t47);
    t40 = (t1 + 4328U);
    t48 = *((char **)t40);
    t49 = *((int *)t48);
    t50 = (t36 * t49);
    t40 = (t3 + 4U);
    t51 = *((int *)t40);
    t52 = (t3 + 8U);
    t53 = *((int *)t52);
    xsi_vhdl_check_range_of_slice(t39, t51, t53, t47, t50, -1);
    t54 = (t10 * 1U);
    t55 = (0 + t54);
    t56 = (t2 + t55);
    t57 = (t23 + 56U);
    t58 = *((char **)t57);
    t57 = (t58 + 0);
    t59 = (t1 + 4328U);
    t60 = *((char **)t59);
    t61 = *((int *)t60);
    t62 = (t36 * t61);
    t59 = (t1 + 4328U);
    t63 = *((char **)t59);
    t64 = *((int *)t63);
    t65 = (t64 - 1);
    t66 = (t62 + t65);
    t59 = (t1 + 4328U);
    t67 = *((char **)t59);
    t68 = *((int *)t67);
    t69 = (t36 * t68);
    t70 = (t69 - t66);
    t71 = (t70 * -1);
    t71 = (t71 + 1);
    t72 = (1U * t71);
    memcpy(t57, t56, t72);
    t7 = (t23 + 56U);
    t8 = *((char **)t7);
    t7 = (t11 + 56U);
    t13 = *((char **)t7);
    t9 = (t36 - 511);
    t10 = (t9 * -1);
    xsi_vhdl_check_range_of_index(511, 0, -1, t36);
    t54 = (8U * t10);
    t55 = (0 + t54);
    t7 = (t13 + t55);
    t14 = (t21 + 12U);
    t71 = *((unsigned int *)t14);
    t71 = (t71 * 1U);
    memcpy(t7, t8, t71);

LAB6:    if (t36 == t37)
        goto LAB7;

LAB22:    t9 = (t36 + 1);
    t36 = t9;
    goto LAB4;

LAB8:    if (-1 == 1)
        goto LAB11;

LAB12:    t34 = 511;
    goto LAB10;

LAB11:    t34 = 0;
    goto LAB10;

LAB13:    t34 = 511;
    goto LAB10;

LAB15:    if (-1 == 1)
        goto LAB18;

LAB19:    t35 = 0;
    goto LAB17;

LAB18:    t35 = 511;
    goto LAB17;

LAB20:    t35 = 0;
    goto LAB17;

LAB23:    xsi_size_not_matching(4096U, 4096U, 0);
    goto LAB24;

LAB25:;
}

static void unisim_a_0183094956_0190745412_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    unsigned char t4;
    char *t5;
    char *t6;
    int t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    unsigned char t11;
    unsigned char t12;
    int64 t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;

LAB0:    t1 = (t0 + 5784U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 1192U);
    t3 = *((char **)t2);
    t2 = (t0 + 10576U);
    t4 = unisim_p_3222816464_sub_13603907777220050653_279109243(UNISIM_P_3222816464, t3, t2);
    t5 = (t0 + 4568U);
    t6 = *((char **)t5);
    t5 = (t6 + 0);
    *((unsigned char *)t5) = t4;
    t2 = (t0 + 4568U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    if (t4 != 0)
        goto LAB4;

LAB6:
LAB5:    t2 = (t0 + 1312U);
    t4 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t2, 0U, 0U);
    if (t4 != 0)
        goto LAB7;

LAB9:
LAB8:
LAB30:    t2 = (t0 + 6104);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB31;

LAB1:    return;
LAB4:    t2 = (t0 + 1192U);
    t5 = *((char **)t2);
    t2 = (t0 + 10576U);
    t7 = unisim_p_3222816464_sub_1852110656102734653_279109243(UNISIM_P_3222816464, t5, t2);
    t6 = (t0 + 4448U);
    t8 = *((char **)t6);
    t6 = (t8 + 0);
    *((int *)t6) = t7;
    goto LAB5;

LAB7:    t3 = (t0 + 1672U);
    t5 = *((char **)t3);
    t9 = *((unsigned char *)t5);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB10;

LAB12:
LAB11:    goto LAB8;

LAB10:    t3 = (t0 + 1832U);
    t6 = *((char **)t3);
    t11 = *((unsigned char *)t6);
    t12 = (t11 == (unsigned char)3);
    if (t12 != 0)
        goto LAB13;

LAB15:    t2 = (t0 + 1992U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t9 = (t4 == (unsigned char)3);
    if (t9 != 0)
        goto LAB16;

LAB18:    t2 = (t0 + 4568U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    if (t4 != 0)
        goto LAB19;

LAB21:
LAB20:
LAB17:
LAB14:    t2 = (t0 + 1992U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t9 = (t4 == (unsigned char)3);
    if (t9 != 0)
        goto LAB22;

LAB24:
LAB23:    goto LAB11;

LAB13:    t13 = (100 * 1LL);
    t3 = xsi_get_transient_memory(8U);
    memset(t3, 0, 8U);
    t8 = t3;
    memset(t8, (unsigned char)2, 8U);
    t14 = (t0 + 6184);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memcpy(t18, t3, 8U);
    xsi_driver_first_trans_delta(t14, 0U, 8U, t13);
    t19 = (t0 + 6184);
    xsi_driver_intertial_reject(t19, t13, t13);
    goto LAB14;

LAB16:    t13 = (100 * 1LL);
    t2 = (t0 + 1512U);
    t5 = *((char **)t2);
    t2 = (t0 + 6184);
    t6 = (t2 + 56U);
    t8 = *((char **)t6);
    t14 = (t8 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t5, 8U);
    xsi_driver_first_trans_delta(t2, 0U, 8U, t13);
    t16 = (t0 + 6184);
    xsi_driver_intertial_reject(t16, t13, t13);
    goto LAB17;

LAB19:    t13 = (100 * 1LL);
    t2 = (t0 + 4808U);
    t5 = *((char **)t2);
    t2 = (t0 + 4448U);
    t6 = *((char **)t2);
    t7 = *((int *)t6);
    t20 = (t7 - 511);
    t21 = (t20 * -1);
    xsi_vhdl_check_range_of_index(511, 0, -1, t7);
    t22 = (8U * t21);
    t23 = (0 + t22);
    t2 = (t5 + t23);
    t8 = (t0 + 6184);
    t14 = (t8 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t2, 8U);
    xsi_driver_first_trans_delta(t8, 0U, 8U, t13);
    t18 = (t0 + 6184);
    xsi_driver_intertial_reject(t18, t13, t13);
    goto LAB20;

LAB22:    t2 = (t0 + 4568U);
    t5 = *((char **)t2);
    t10 = *((unsigned char *)t5);
    if (t10 != 0)
        goto LAB25;

LAB27:
LAB26:    goto LAB23;

LAB25:    t2 = (t0 + 1512U);
    t6 = *((char **)t2);
    t2 = (t0 + 4808U);
    t8 = *((char **)t2);
    t2 = (t0 + 4448U);
    t14 = *((char **)t2);
    t7 = *((int *)t14);
    t20 = (t7 - 511);
    t21 = (t20 * -1);
    xsi_vhdl_check_range_of_index(511, 0, -1, t7);
    t22 = (8U * t21);
    t23 = (0 + t22);
    t2 = (t8 + t23);
    memcpy(t2, t6, 8U);
    goto LAB26;

LAB28:    t3 = (t0 + 6104);
    *((int *)t3) = 0;
    goto LAB2;

LAB29:    goto LAB28;

LAB31:    goto LAB29;

}


extern void unisim_a_0183094956_0190745412_init()
{
	static char *pe[] = {(void *)unisim_a_0183094956_0190745412_p_0};
	static char *se[] = {(void *)unisim_a_0183094956_0190745412_sub_6906132381291017968_468007323};
	xsi_register_didat("unisim_a_0183094956_0190745412", "isim/stack_tb_isim_beh.exe.sim/unisim/a_0183094956_0190745412.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
