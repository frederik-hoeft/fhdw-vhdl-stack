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
extern char *STD_STANDARD;
static const char *ng1 = "Function char2std_logic ended without a return statement";
extern char *IEEE_P_2592010699;
static const char *ng3 = "/home/dev/projects/es4/fhdw-vhdl-stack/src/stack/stack_tb.vhd";
extern char *STD_TEXTIO;

unsigned char ieee_p_2592010699_sub_13554554585326073636_503743352(char *, char *, unsigned int , unsigned int );
unsigned char ieee_p_2592010699_sub_2763492388968962707_503743352(char *, char *, unsigned int , unsigned int );
unsigned char ieee_p_2592010699_sub_374109322130769762_503743352(char *, unsigned char );


unsigned char work_a_2534346133_2578365841_sub_927153478380809325_3989762038(char *t1, unsigned char t2)
{
    char t4[8];
    char t9[16];
    char t11[16];
    unsigned char t0;
    char *t5;
    char *t6;
    char *t8;
    char *t10;
    char *t12;
    char *t13;
    int t14;
    unsigned int t15;
    static char *nl0[] = {&&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB11, &&LAB12, &&LAB12, &&LAB5, &&LAB6, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB10, &&LAB12, &&LAB12, &&LAB12, &&LAB9, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB3, &&LAB12, &&LAB8, &&LAB4, &&LAB12, &&LAB7, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB10, &&LAB12, &&LAB12, &&LAB12, &&LAB9, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB3, &&LAB12, &&LAB8, &&LAB4, &&LAB12, &&LAB7, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12, &&LAB12};

LAB0:    t5 = (t4 + 4U);
    *((unsigned char *)t5) = t2;
    t6 = (char *)((nl0) + t2);
    goto **((char **)t6);

LAB2:    xsi_error(ng1);
    t0 = 0;

LAB1:    return t0;
LAB3:    t0 = (unsigned char)0;
    goto LAB1;

LAB4:    t0 = (unsigned char)1;
    goto LAB1;

LAB5:    t0 = (unsigned char)2;
    goto LAB1;

LAB6:    t0 = (unsigned char)3;
    goto LAB1;

LAB7:    t0 = (unsigned char)4;
    goto LAB1;

LAB8:    t0 = (unsigned char)5;
    goto LAB1;

LAB9:    t0 = (unsigned char)6;
    goto LAB1;

LAB10:    t0 = (unsigned char)7;
    goto LAB1;

LAB11:    t0 = (unsigned char)8;
    goto LAB1;

LAB12:    if ((unsigned char)0 == 0)
        goto LAB22;

LAB23:    t0 = (unsigned char)0;
    goto LAB1;

LAB13:    goto LAB2;

LAB14:    goto LAB2;

LAB15:    goto LAB2;

LAB16:    goto LAB2;

LAB17:    goto LAB2;

LAB18:    goto LAB2;

LAB19:    goto LAB2;

LAB20:    goto LAB2;

LAB21:    goto LAB2;

LAB22:    t6 = (t1 + 14696);
    t10 = ((STD_STANDARD) + 984);
    t12 = (t11 + 0U);
    t13 = (t12 + 0U);
    *((int *)t13) = 1;
    t13 = (t12 + 4U);
    *((int *)t13) = 23;
    t13 = (t12 + 8U);
    *((int *)t13) = 1;
    t14 = (23 - 1);
    t15 = (t14 * 1);
    t15 = (t15 + 1);
    t13 = (t12 + 12U);
    *((unsigned int *)t13) = t15;
    t8 = xsi_base_array_concat(t8, t9, t10, (char)97, t6, t11, (char)99, t2, (char)101);
    t15 = (23U + 1U);
    xsi_report(t8, t15, (unsigned char)2);
    goto LAB23;

LAB24:    goto LAB2;

}

char *work_a_2534346133_2578365841_sub_16713630550439977068_3989762038(char *t1, char *t2, char *t3, char *t4)
{
    char t5[128];
    char t6[24];
    char t12[16];
    char *t0;
    char *t7;
    int t8;
    int t9;
    int t10;
    unsigned int t11;
    char *t13;
    int t14;
    int t15;
    char *t16;
    char *t17;
    int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    unsigned char t27;
    char *t28;
    char *t29;
    int t30;
    char *t31;
    int t32;
    char *t33;
    int t34;
    int t35;
    int t36;
    int t37;
    int t38;
    char *t39;
    int t40;
    char *t41;
    int t42;
    int t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    unsigned char t47;
    unsigned char t48;
    char *t49;
    char *t50;
    int t51;
    int t52;
    char *t53;
    int t54;
    int t55;
    unsigned int t56;
    char *t57;
    int t58;
    unsigned int t59;
    unsigned int t60;
    char *t61;

LAB0:    t7 = (t4 + 0U);
    t8 = *((int *)t7);
    t9 = (t8 - 1);
    t10 = (0 - t9);
    t11 = (t10 * -1);
    t11 = (t11 + 1);
    t11 = (t11 * 1U);
    t13 = (t4 + 0U);
    t14 = *((int *)t13);
    t15 = (t14 - 1);
    t16 = (t12 + 0U);
    t17 = (t16 + 0U);
    *((int *)t17) = t15;
    t17 = (t16 + 4U);
    *((int *)t17) = 0;
    t17 = (t16 + 8U);
    *((int *)t17) = -1;
    t18 = (0 - t15);
    t19 = (t18 * -1);
    t19 = (t19 + 1);
    t17 = (t16 + 12U);
    *((unsigned int *)t17) = t19;
    t17 = (t5 + 4U);
    t20 = ((IEEE_P_2592010699) + 4000);
    t21 = (t17 + 88U);
    *((char **)t21) = t20;
    t22 = (char *)alloca(t11);
    t23 = (t17 + 56U);
    *((char **)t23) = t22;
    xsi_type_set_default_value(t20, t22, t12);
    t24 = (t17 + 64U);
    *((char **)t24) = t12;
    t25 = (t17 + 80U);
    *((unsigned int *)t25) = t11;
    t26 = (t6 + 4U);
    t27 = (t3 != 0);
    if (t27 == 1)
        goto LAB3;

LAB2:    t28 = (t6 + 12U);
    *((char **)t28) = t4;
    t29 = (t4 + 8U);
    t30 = *((int *)t29);
    t31 = (t4 + 4U);
    t32 = *((int *)t31);
    t33 = (t4 + 0U);
    t34 = *((int *)t33);
    t35 = t34;
    t36 = t32;

LAB4:    t37 = (t36 * t30);
    t38 = (t35 * t30);
    if (t38 <= t37)
        goto LAB5;

LAB7:    t7 = (t17 + 56U);
    t13 = *((char **)t7);
    t7 = (t12 + 12U);
    t11 = *((unsigned int *)t7);
    t11 = (t11 * 1U);
    t0 = xsi_get_transient_memory(t11);
    memcpy(t0, t13, t11);
    t16 = (t12 + 0U);
    t8 = *((int *)t16);
    t20 = (t12 + 4U);
    t9 = *((int *)t20);
    t21 = (t12 + 8U);
    t10 = *((int *)t21);
    t23 = (t2 + 0U);
    t24 = (t23 + 0U);
    *((int *)t24) = t8;
    t24 = (t23 + 4U);
    *((int *)t24) = t9;
    t24 = (t23 + 8U);
    *((int *)t24) = t10;
    t14 = (t9 - t8);
    t19 = (t14 * t10);
    t19 = (t19 + 1);
    t24 = (t23 + 12U);
    *((unsigned int *)t24) = t19;

LAB1:    return t0;
LAB3:    *((char **)t26) = t3;
    goto LAB2;

LAB5:    t39 = (t4 + 0U);
    t40 = *((int *)t39);
    t41 = (t4 + 8U);
    t42 = *((int *)t41);
    t43 = (t35 - t40);
    t19 = (t43 * t42);
    t44 = (1U * t19);
    t45 = (0 + t44);
    t46 = (t3 + t45);
    t47 = *((unsigned char *)t46);
    t48 = work_a_2534346133_2578365841_sub_927153478380809325_3989762038(t1, t47);
    t49 = (t17 + 56U);
    t50 = *((char **)t49);
    t51 = (t35 - 1);
    t49 = (t12 + 0U);
    t52 = *((int *)t49);
    t53 = (t12 + 8U);
    t54 = *((int *)t53);
    t55 = (t51 - t52);
    t56 = (t55 * t54);
    t57 = (t12 + 4U);
    t58 = *((int *)t57);
    xsi_vhdl_check_range_of_index(t52, t58, t54, t51);
    t59 = (1U * t56);
    t60 = (0 + t59);
    t61 = (t50 + t60);
    *((unsigned char *)t61) = t48;

LAB6:    if (t35 == t36)
        goto LAB7;

LAB8:    t8 = (t35 + t30);
    t35 = t8;
    goto LAB4;

LAB9:;
}

unsigned char work_a_2534346133_2578365841_sub_15330119733485141808_3989762038(char *t1, unsigned char t2)
{
    char t3[128];
    char t4[8];
    char t8[8];
    unsigned char t0;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned char t15;
    static char *nl0[] = {&&LAB3, &&LAB4, &&LAB5, &&LAB6, &&LAB7, &&LAB8, &&LAB9, &&LAB10, &&LAB11};

LAB0:    t5 = (t3 + 4U);
    t6 = ((STD_STANDARD) + 192);
    t7 = (t5 + 88U);
    *((char **)t7) = t6;
    t9 = (t5 + 56U);
    *((char **)t9) = t8;
    xsi_type_set_default_value(t6, t8, 0);
    t10 = (t5 + 80U);
    *((unsigned int *)t10) = 1U;
    t11 = (t4 + 4U);
    *((unsigned char *)t11) = t2;
    t12 = (char *)((nl0) + t2);
    goto **((char **)t12);

LAB2:    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t15 = *((unsigned char *)t7);
    t0 = t15;

LAB1:    return t0;
LAB3:    t13 = (t5 + 56U);
    t14 = *((char **)t13);
    t13 = (t14 + 0);
    *((unsigned char *)t13) = (unsigned char)85;
    goto LAB2;

LAB4:    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    *((unsigned char *)t6) = (unsigned char)88;
    goto LAB2;

LAB5:    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    *((unsigned char *)t6) = (unsigned char)48;
    goto LAB2;

LAB6:    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    *((unsigned char *)t6) = (unsigned char)49;
    goto LAB2;

LAB7:    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    *((unsigned char *)t6) = (unsigned char)90;
    goto LAB2;

LAB8:    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    *((unsigned char *)t6) = (unsigned char)87;
    goto LAB2;

LAB9:    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    *((unsigned char *)t6) = (unsigned char)76;
    goto LAB2;

LAB10:    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    *((unsigned char *)t6) = (unsigned char)72;
    goto LAB2;

LAB11:    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    *((unsigned char *)t6) = (unsigned char)45;
    goto LAB2;

LAB12:;
}

char *work_a_2534346133_2578365841_sub_3158420137067320835_3989762038(char *t1, char *t2, char *t3, char *t4)
{
    char t5[264];
    char t6[24];
    char t11[16];
    char t37[8];
    char *t0;
    char *t7;
    unsigned int t8;
    int t9;
    unsigned int t10;
    char *t12;
    unsigned int t13;
    char *t14;
    char *t15;
    int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    int t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
    char *t36;
    char *t38;
    char *t39;
    char *t40;
    unsigned char t41;
    char *t42;
    char *t43;
    char *t44;
    int t45;
    int t46;
    int t47;
    int t48;
    int t49;
    int t50;
    int t51;
    unsigned char t52;
    int t53;
    int t54;
    int t55;
    int t56;
    int t57;

LAB0:    t7 = (t4 + 12U);
    t8 = *((unsigned int *)t7);
    t9 = (t8 - 1);
    t10 = (t9 * 1);
    t10 = (t10 + 1);
    t10 = (t10 * 1U);
    t12 = (t4 + 12U);
    t13 = *((unsigned int *)t12);
    t14 = (t11 + 0U);
    t15 = (t14 + 0U);
    *((int *)t15) = 1;
    t15 = (t14 + 4U);
    *((unsigned int *)t15) = t13;
    t15 = (t14 + 8U);
    *((int *)t15) = 1;
    t16 = (t13 - 1);
    t17 = (t16 * 1);
    t17 = (t17 + 1);
    t15 = (t14 + 12U);
    *((unsigned int *)t15) = t17;
    t15 = (t5 + 4U);
    t18 = ((STD_STANDARD) + 984);
    t19 = (t15 + 88U);
    *((char **)t19) = t18;
    t20 = xsi_get_memory(t10);
    t21 = (t15 + 56U);
    *((char **)t21) = t20;
    xsi_type_set_default_value(t18, t20, t11);
    t22 = (t15 + 64U);
    *((char **)t22) = t11;
    t23 = (t15 + 80U);
    *((unsigned int *)t23) = t10;
    t24 = (t15 + 128U);
    *((char **)t24) = t20;
    t25 = (t15 + 120U);
    *((int *)t25) = 0;
    t26 = (t15 + 124U);
    t27 = (t11 + 12U);
    t17 = *((unsigned int *)t27);
    t28 = (t17 - 1);
    *((int *)t26) = t28;
    t29 = (t15 + 116U);
    t31 = (t10 > 2147483644);
    if (t31 == 1)
        goto LAB2;

LAB3:    t32 = (t10 + 3);
    t33 = (t32 / 16);
    t30 = t33;

LAB4:    *((unsigned int *)t29) = t30;
    t34 = (t5 + 140U);
    t35 = ((STD_STANDARD) + 384);
    t36 = (t34 + 88U);
    *((char **)t36) = t35;
    t38 = (t34 + 56U);
    *((char **)t38) = t37;
    xsi_type_set_default_value(t35, t37, 0);
    t39 = (t34 + 80U);
    *((unsigned int *)t39) = 4U;
    t40 = (t6 + 4U);
    t41 = (t3 != 0);
    if (t41 == 1)
        goto LAB6;

LAB5:    t42 = (t6 + 12U);
    *((char **)t42) = t4;
    t43 = (t34 + 56U);
    t44 = *((char **)t43);
    t43 = (t44 + 0);
    *((int *)t43) = 1;
    t7 = (t4 + 8U);
    t9 = *((int *)t7);
    t12 = (t4 + 4U);
    t16 = *((int *)t12);
    t14 = (t4 + 0U);
    t28 = *((int *)t14);
    t45 = t28;
    t46 = t16;

LAB7:    t47 = (t46 * t9);
    t48 = (t45 * t9);
    if (t48 <= t47)
        goto LAB8;

LAB10:    t7 = (t15 + 56U);
    t12 = *((char **)t7);
    t7 = (t11 + 12U);
    t8 = *((unsigned int *)t7);
    t8 = (t8 * 1U);
    t0 = xsi_get_transient_memory(t8);
    memcpy(t0, t12, t8);
    t14 = (t11 + 0U);
    t9 = *((int *)t14);
    t18 = (t11 + 4U);
    t16 = *((int *)t18);
    t19 = (t11 + 8U);
    t28 = *((int *)t19);
    t20 = (t2 + 0U);
    t21 = (t20 + 0U);
    *((int *)t21) = t9;
    t21 = (t20 + 4U);
    *((int *)t21) = t16;
    t21 = (t20 + 8U);
    *((int *)t21) = t28;
    t45 = (t16 - t9);
    t10 = (t45 * t28);
    t10 = (t10 + 1);
    t21 = (t20 + 12U);
    *((unsigned int *)t21) = t10;

LAB1:    t7 = (t15 + 80);
    t9 = *((int *)t7);
    t12 = (t15 + 128U);
    t14 = *((char **)t12);
    xsi_put_memory(t9, t14);
    return t0;
LAB2:    t30 = 2147483647;
    goto LAB4;

LAB6:    *((char **)t40) = t3;
    goto LAB5;

LAB8:    t18 = (t4 + 0U);
    t49 = *((int *)t18);
    t19 = (t4 + 8U);
    t50 = *((int *)t19);
    t51 = (t45 - t49);
    t8 = (t51 * t50);
    t10 = (1U * t8);
    t13 = (0 + t10);
    t20 = (t3 + t13);
    t41 = *((unsigned char *)t20);
    t52 = work_a_2534346133_2578365841_sub_15330119733485141808_3989762038(t1, t41);
    t21 = (t15 + 56U);
    t22 = *((char **)t21);
    t21 = (t34 + 56U);
    t23 = *((char **)t21);
    t53 = *((int *)t23);
    t21 = (t11 + 0U);
    t54 = *((int *)t21);
    t24 = (t11 + 8U);
    t55 = *((int *)t24);
    t56 = (t53 - t54);
    t17 = (t56 * t55);
    t25 = (t11 + 4U);
    t57 = *((int *)t25);
    xsi_vhdl_check_range_of_index(t54, t57, t55, t53);
    t30 = (1U * t17);
    t31 = (0 + t30);
    t26 = (t22 + t31);
    *((unsigned char *)t26) = t52;
    t7 = (t34 + 56U);
    t12 = *((char **)t7);
    t16 = *((int *)t12);
    t28 = (t16 + 1);
    t7 = (t34 + 56U);
    t14 = *((char **)t7);
    t7 = (t14 + 0);
    *((int *)t7) = t28;

LAB9:    if (t45 == t46)
        goto LAB10;

LAB11:    t16 = (t45 + t9);
    t45 = t16;
    goto LAB7;

LAB12:;
}

unsigned char work_a_2534346133_2578365841_sub_10723292184953887035_3989762038(char *t1, char *t2, char *t3, char *t4, char *t5, char *t6, char *t7)
{
    char t8[488];
    char t9[56];
    char t13[8];
    char t19[8];
    char t25[8];
    char t31[8];
    char t61[16];
    char t62[16];
    char t63[16];
    char t64[16];
    char t65[16];
    char t66[16];
    char t67[16];
    char t68[16];
    char t69[16];
    char t71[16];
    unsigned char t0;
    char *t10;
    char *t11;
    char *t12;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t32;
    char *t33;
    char *t34;
    unsigned char t35;
    char *t36;
    char *t37;
    unsigned char t38;
    char *t39;
    char *t40;
    unsigned char t41;
    char *t42;
    char *t43;
    unsigned int t44;
    char *t45;
    unsigned int t46;
    unsigned char t47;
    char *t48;
    char *t49;
    int t50;
    int t51;
    int t52;
    int t53;
    int t54;
    int t55;
    int t56;
    int t57;
    int t58;
    int t59;
    unsigned int t60;
    char *t70;
    char *t72;
    char *t73;
    char *t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    char *t78;
    unsigned int t79;
    unsigned int t80;
    static char *nl0[] = {&&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB16};

LAB0:    t10 = (t8 + 4U);
    t11 = ((STD_STANDARD) + 0);
    t12 = (t10 + 88U);
    *((char **)t12) = t11;
    t14 = (t10 + 56U);
    *((char **)t14) = t13;
    xsi_type_set_default_value(t11, t13, 0);
    t15 = (t10 + 80U);
    *((unsigned int *)t15) = 1U;
    t16 = (t8 + 124U);
    t17 = ((STD_STANDARD) + 0);
    t18 = (t16 + 88U);
    *((char **)t18) = t17;
    t20 = (t16 + 56U);
    *((char **)t20) = t19;
    xsi_type_set_default_value(t17, t19, 0);
    t21 = (t16 + 80U);
    *((unsigned int *)t21) = 1U;
    t22 = (t8 + 244U);
    t23 = ((IEEE_P_2592010699) + 3312);
    t24 = (t22 + 88U);
    *((char **)t24) = t23;
    t26 = (t22 + 56U);
    *((char **)t26) = t25;
    xsi_type_set_default_value(t23, t25, 0);
    t27 = (t22 + 80U);
    *((unsigned int *)t27) = 1U;
    t28 = (t8 + 364U);
    t29 = ((IEEE_P_2592010699) + 3312);
    t30 = (t28 + 88U);
    *((char **)t30) = t29;
    t32 = (t28 + 56U);
    *((char **)t32) = t31;
    xsi_type_set_default_value(t29, t31, 0);
    t33 = (t28 + 80U);
    *((unsigned int *)t33) = 1U;
    t34 = (t9 + 4U);
    t35 = (t2 != 0);
    if (t35 == 1)
        goto LAB3;

LAB2:    t36 = (t9 + 12U);
    *((char **)t36) = t3;
    t37 = (t9 + 20U);
    t38 = (t4 != 0);
    if (t38 == 1)
        goto LAB5;

LAB4:    t39 = (t9 + 28U);
    *((char **)t39) = t5;
    t40 = (t9 + 36U);
    t41 = (t6 != 0);
    if (t41 == 1)
        goto LAB7;

LAB6:    t42 = (t9 + 44U);
    *((char **)t42) = t7;
    t43 = (t3 + 12U);
    t44 = *((unsigned int *)t43);
    t45 = (t5 + 12U);
    t46 = *((unsigned int *)t45);
    t47 = (t44 == t46);
    t48 = (t16 + 56U);
    t49 = *((char **)t48);
    t48 = (t49 + 0);
    *((unsigned char *)t48) = t47;
    t11 = (t16 + 56U);
    t12 = *((char **)t11);
    t35 = *((unsigned char *)t12);
    if (t35 != 0)
        goto LAB8;

LAB10:
LAB9:    t11 = (t16 + 56U);
    t12 = *((char **)t11);
    t35 = *((unsigned char *)t12);
    if (t35 == 0)
        goto LAB22;

LAB23:    t11 = (t16 + 56U);
    t12 = *((char **)t11);
    t35 = *((unsigned char *)t12);
    t0 = t35;

LAB1:    return t0;
LAB3:    *((char **)t34) = t2;
    goto LAB2;

LAB5:    *((char **)t37) = t4;
    goto LAB4;

LAB7:    *((char **)t40) = t6;
    goto LAB6;

LAB8:    t11 = (t3 + 8U);
    t50 = *((int *)t11);
    t14 = (t3 + 4U);
    t51 = *((int *)t14);
    t15 = (t3 + 0U);
    t52 = *((int *)t15);
    t53 = t52;
    t54 = t51;

LAB11:    t55 = (t54 * t50);
    t56 = (t53 * t50);
    if (t56 <= t55)
        goto LAB12;

LAB14:    goto LAB9;

LAB12:    t17 = (t3 + 0U);
    t57 = *((int *)t17);
    t18 = (t3 + 8U);
    t58 = *((int *)t18);
    t59 = (t53 - t57);
    t44 = (t59 * t58);
    t46 = (1U * t44);
    t60 = (0 + t46);
    t20 = (t2 + t60);
    t38 = *((unsigned char *)t20);
    t21 = (t22 + 56U);
    t23 = *((char **)t21);
    t21 = (t23 + 0);
    *((unsigned char *)t21) = t38;
    t11 = (t5 + 0U);
    t51 = *((int *)t11);
    t12 = (t5 + 8U);
    t52 = *((int *)t12);
    t55 = (t53 - t51);
    t44 = (t55 * t52);
    t14 = (t5 + 4U);
    t56 = *((int *)t14);
    xsi_vhdl_check_range_of_index(t51, t56, t52, t53);
    t46 = (1U * t44);
    t60 = (0 + t46);
    t15 = (t4 + t60);
    t35 = *((unsigned char *)t15);
    t17 = (t28 + 56U);
    t18 = *((char **)t17);
    t17 = (t18 + 0);
    *((unsigned char *)t17) = t35;
    t11 = (t22 + 56U);
    t12 = *((char **)t11);
    t35 = *((unsigned char *)t12);
    t11 = (char *)((nl0) + t35);
    goto **((char **)t11);

LAB13:    if (t53 == t54)
        goto LAB14;

LAB21:    t51 = (t53 + t50);
    t53 = t51;
    goto LAB11;

LAB15:    t11 = (t16 + 56U);
    t12 = *((char **)t11);
    t38 = *((unsigned char *)t12);
    if (t38 == 1)
        goto LAB18;

LAB19:    t35 = (unsigned char)0;

LAB20:    t11 = (t16 + 56U);
    t15 = *((char **)t11);
    t11 = (t15 + 0);
    *((unsigned char *)t11) = t35;
    goto LAB13;

LAB16:    t14 = (t10 + 56U);
    t15 = *((char **)t14);
    t14 = (t15 + 0);
    *((unsigned char *)t14) = (unsigned char)1;
    goto LAB15;

LAB17:    t11 = (t22 + 56U);
    t12 = *((char **)t11);
    t35 = *((unsigned char *)t12);
    t11 = (t28 + 56U);
    t14 = *((char **)t11);
    t38 = *((unsigned char *)t14);
    t41 = (t35 == t38);
    t11 = (t10 + 56U);
    t15 = *((char **)t11);
    t11 = (t15 + 0);
    *((unsigned char *)t11) = t41;
    goto LAB15;

LAB18:    t11 = (t10 + 56U);
    t14 = *((char **)t11);
    t41 = *((unsigned char *)t14);
    t35 = t41;
    goto LAB20;

LAB22:    t11 = (t1 + 14719);
    t17 = ((STD_STANDARD) + 984);
    t18 = (t62 + 0U);
    t20 = (t18 + 0U);
    *((int *)t20) = 1;
    t20 = (t18 + 4U);
    *((int *)t20) = 26;
    t20 = (t18 + 8U);
    *((int *)t20) = 1;
    t50 = (26 - 1);
    t44 = (t50 * 1);
    t44 = (t44 + 1);
    t20 = (t18 + 12U);
    *((unsigned int *)t20) = t44;
    t15 = xsi_base_array_concat(t15, t61, t17, (char)97, t11, t62, (char)97, t6, t7, (char)101);
    t20 = (t1 + 14745);
    t24 = ((STD_STANDARD) + 984);
    t26 = (t64 + 0U);
    t27 = (t26 + 0U);
    *((int *)t27) = 1;
    t27 = (t26 + 4U);
    *((int *)t27) = 13;
    t27 = (t26 + 8U);
    *((int *)t27) = 1;
    t51 = (13 - 1);
    t44 = (t51 * 1);
    t44 = (t44 + 1);
    t27 = (t26 + 12U);
    *((unsigned int *)t27) = t44;
    t23 = xsi_base_array_concat(t23, t63, t24, (char)97, t15, t61, (char)97, t20, t64, (char)101);
    t27 = work_a_2534346133_2578365841_sub_3158420137067320835_3989762038(t1, t65, t2, t3);
    t30 = ((STD_STANDARD) + 984);
    t29 = xsi_base_array_concat(t29, t66, t30, (char)97, t23, t63, (char)97, t27, t65, (char)101);
    t32 = (t1 + 14758);
    t45 = ((STD_STANDARD) + 984);
    t48 = (t68 + 0U);
    t49 = (t48 + 0U);
    *((int *)t49) = 1;
    t49 = (t48 + 4U);
    *((int *)t49) = 10;
    t49 = (t48 + 8U);
    *((int *)t49) = 1;
    t52 = (10 - 1);
    t44 = (t52 * 1);
    t44 = (t44 + 1);
    t49 = (t48 + 12U);
    *((unsigned int *)t49) = t44;
    t43 = xsi_base_array_concat(t43, t67, t45, (char)97, t29, t66, (char)97, t32, t68, (char)101);
    t49 = work_a_2534346133_2578365841_sub_3158420137067320835_3989762038(t1, t69, t4, t5);
    t72 = ((STD_STANDARD) + 984);
    t70 = xsi_base_array_concat(t70, t71, t72, (char)97, t43, t67, (char)97, t49, t69, (char)101);
    t73 = (t7 + 12U);
    t44 = *((unsigned int *)t73);
    t44 = (t44 * 1U);
    t46 = (26U + t44);
    t60 = (t46 + 13U);
    t74 = (t65 + 12U);
    t75 = *((unsigned int *)t74);
    t75 = (t75 * 1U);
    t76 = (t60 + t75);
    t77 = (t76 + 10U);
    t78 = (t69 + 12U);
    t79 = *((unsigned int *)t78);
    t79 = (t79 * 1U);
    t80 = (t77 + t79);
    xsi_report(t70, t80, (unsigned char)1);
    goto LAB23;

LAB24:;
}

static void work_a_2534346133_2578365841_p_0(char *t0)
{
    char *t1;
    char *t2;
    int64 t3;
    int64 t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(142, ng3);

LAB3:    t1 = (t0 + 3168U);
    t2 = *((char **)t1);
    t3 = *((int64 *)t2);
    t4 = (t3 / 2);
    t1 = (t0 + 1032U);
    t5 = *((char **)t1);
    t6 = *((unsigned char *)t5);
    t7 = ieee_p_2592010699_sub_374109322130769762_503743352(IEEE_P_2592010699, t6);
    t1 = (t0 + 8520);
    t8 = (t1 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = t7;
    xsi_driver_first_trans_delta(t1, 0U, 1, t4);
    t12 = (t0 + 8520);
    xsi_driver_intertial_reject(t12, t4, t4);

LAB2:    t13 = (t0 + 8392);
    *((int *)t13) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_2534346133_2578365841_p_1(char *t0)
{
    char t9[16];
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;

LAB0:    xsi_set_current_line(165, ng3);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    if (t3 == 0)
        goto LAB2;

LAB3:    xsi_set_current_line(167, ng3);
    t1 = (t0 + 992U);
    t3 = ieee_p_2592010699_sub_13554554585326073636_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB4;

LAB6:
LAB5:    t1 = (t0 + 8408);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    t1 = (t0 + 14768);
    xsi_report(t1, 7U, (unsigned char)0);
    goto LAB3;

LAB4:    xsi_set_current_line(168, ng3);
    t2 = (t0 + 3976U);
    t5 = std_textio_endfile(t2);
    t6 = (!(t5));
    if (t6 != 0)
        goto LAB7;

LAB9:    xsi_set_current_line(190, ng3);
    t1 = (t0 + 14775);
    t4 = (t0 + 8584);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t11 = (t8 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t1, 1U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(191, ng3);
    t1 = (t0 + 14776);
    t4 = (t0 + 8648);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t11 = (t8 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t1, 1U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(192, ng3);
    t1 = (t0 + 14777);
    t4 = (t0 + 8712);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t11 = (t8 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t1, 1U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(193, ng3);
    t1 = (t0 + 14778);
    t4 = (t0 + 8776);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t11 = (t8 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t1, 1U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(194, ng3);
    t1 = xsi_get_transient_memory(8U);
    memset(t1, 0, 8U);
    t2 = t1;
    memset(t2, (unsigned char)2, 8U);
    t4 = (t0 + 8840);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t11 = (t8 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t1, 8U);
    xsi_driver_first_trans_fast(t4);

LAB8:    goto LAB5;

LAB7:    xsi_set_current_line(169, ng3);
    t4 = (t0 + 7384);
    t7 = (t0 + 3976U);
    t8 = (t0 + 4360U);
    std_textio_readline(STD_TEXTIO, t4, t7, t8);
    xsi_set_current_line(171, ng3);
    t1 = (t0 + 7384);
    t2 = (t0 + 4360U);
    t4 = (t0 + 5120U);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t7 = (t0 + 14104U);
    std_textio_read14(STD_TEXTIO, t1, t2, t8, t7);
    xsi_set_current_line(172, ng3);
    t1 = (t0 + 5120U);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t2 = (t0 + 14104U);
    t7 = work_a_2534346133_2578365841_sub_16713630550439977068_3989762038(t0, t9, t4, t2);
    t8 = (t9 + 12U);
    t10 = *((unsigned int *)t8);
    t10 = (t10 * 1U);
    t3 = (1U != t10);
    if (t3 == 1)
        goto LAB10;

LAB11:    t11 = (t0 + 8584);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t7, 1U);
    xsi_driver_first_trans_fast(t11);
    xsi_set_current_line(173, ng3);
    t1 = (t0 + 7384);
    t2 = (t0 + 4360U);
    t4 = (t0 + 3288U);
    t7 = *((char **)t4);
    t4 = (t7 + 0);
    std_textio_read8(STD_TEXTIO, t1, t2, t4);
    xsi_set_current_line(175, ng3);
    t1 = (t0 + 7384);
    t2 = (t0 + 4360U);
    t4 = (t0 + 5120U);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t7 = (t0 + 14104U);
    std_textio_read14(STD_TEXTIO, t1, t2, t8, t7);
    xsi_set_current_line(176, ng3);
    t1 = (t0 + 5120U);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t2 = (t0 + 14104U);
    t7 = work_a_2534346133_2578365841_sub_16713630550439977068_3989762038(t0, t9, t4, t2);
    t8 = (t9 + 12U);
    t10 = *((unsigned int *)t8);
    t10 = (t10 * 1U);
    t3 = (1U != t10);
    if (t3 == 1)
        goto LAB12;

LAB13:    t11 = (t0 + 8648);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t7, 1U);
    xsi_driver_first_trans_fast(t11);
    xsi_set_current_line(177, ng3);
    t1 = (t0 + 7384);
    t2 = (t0 + 4360U);
    t4 = (t0 + 3288U);
    t7 = *((char **)t4);
    t4 = (t7 + 0);
    std_textio_read8(STD_TEXTIO, t1, t2, t4);
    xsi_set_current_line(179, ng3);
    t1 = (t0 + 7384);
    t2 = (t0 + 4360U);
    t4 = (t0 + 5120U);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t7 = (t0 + 14104U);
    std_textio_read14(STD_TEXTIO, t1, t2, t8, t7);
    xsi_set_current_line(180, ng3);
    t1 = (t0 + 5120U);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t2 = (t0 + 14104U);
    t7 = work_a_2534346133_2578365841_sub_16713630550439977068_3989762038(t0, t9, t4, t2);
    t8 = (t9 + 12U);
    t10 = *((unsigned int *)t8);
    t10 = (t10 * 1U);
    t3 = (1U != t10);
    if (t3 == 1)
        goto LAB14;

LAB15:    t11 = (t0 + 8712);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t7, 1U);
    xsi_driver_first_trans_fast(t11);
    xsi_set_current_line(181, ng3);
    t1 = (t0 + 7384);
    t2 = (t0 + 4360U);
    t4 = (t0 + 3288U);
    t7 = *((char **)t4);
    t4 = (t7 + 0);
    std_textio_read8(STD_TEXTIO, t1, t2, t4);
    xsi_set_current_line(183, ng3);
    t1 = (t0 + 7384);
    t2 = (t0 + 4360U);
    t4 = (t0 + 5120U);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t7 = (t0 + 14104U);
    std_textio_read14(STD_TEXTIO, t1, t2, t8, t7);
    xsi_set_current_line(184, ng3);
    t1 = (t0 + 5120U);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t2 = (t0 + 14104U);
    t7 = work_a_2534346133_2578365841_sub_16713630550439977068_3989762038(t0, t9, t4, t2);
    t8 = (t9 + 12U);
    t10 = *((unsigned int *)t8);
    t10 = (t10 * 1U);
    t3 = (1U != t10);
    if (t3 == 1)
        goto LAB16;

LAB17:    t11 = (t0 + 8776);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t7, 1U);
    xsi_driver_first_trans_fast(t11);
    xsi_set_current_line(185, ng3);
    t1 = (t0 + 7384);
    t2 = (t0 + 4360U);
    t4 = (t0 + 3288U);
    t7 = *((char **)t4);
    t4 = (t7 + 0);
    std_textio_read8(STD_TEXTIO, t1, t2, t4);
    xsi_set_current_line(187, ng3);
    t1 = (t0 + 7384);
    t2 = (t0 + 4360U);
    t4 = (t0 + 5256U);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t7 = (t0 + 14120U);
    std_textio_read14(STD_TEXTIO, t1, t2, t8, t7);
    xsi_set_current_line(188, ng3);
    t1 = (t0 + 5256U);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t2 = (t0 + 14120U);
    t7 = work_a_2534346133_2578365841_sub_16713630550439977068_3989762038(t0, t9, t4, t2);
    t8 = (t9 + 12U);
    t10 = *((unsigned int *)t8);
    t10 = (t10 * 1U);
    t3 = (8U != t10);
    if (t3 == 1)
        goto LAB18;

LAB19:    t11 = (t0 + 8840);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t7, 8U);
    xsi_driver_first_trans_fast(t11);
    goto LAB8;

LAB10:    xsi_size_not_matching(1U, t10, 0);
    goto LAB11;

LAB12:    xsi_size_not_matching(1U, t10, 0);
    goto LAB13;

LAB14:    xsi_size_not_matching(1U, t10, 0);
    goto LAB15;

LAB16:    xsi_size_not_matching(1U, t10, 0);
    goto LAB17;

LAB18:    xsi_size_not_matching(8U, t10, 0);
    goto LAB19;

}

static void work_a_2534346133_2578365841_p_2(char *t0)
{
    char t11[16];
    char t15[16];
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    int64 t5;
    int64 t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    char *t16;
    char *t17;
    int t18;
    unsigned int t19;
    unsigned char t20;
    char *t21;
    char *t22;

LAB0:    xsi_set_current_line(207, ng3);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    if (t3 == 0)
        goto LAB2;

LAB3:    xsi_set_current_line(208, ng3);
    t1 = (t0 + 992U);
    t3 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB4;

LAB6:
LAB5:    t1 = (t0 + 8424);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    t1 = (t0 + 14779);
    xsi_report(t1, 8U, (unsigned char)0);
    goto LAB3;

LAB4:    xsi_set_current_line(210, ng3);
    t5 = xsi_get_sim_current_time();
    t2 = (t0 + 3168U);
    t4 = *((char **)t2);
    t6 = *((int64 *)t4);
    t7 = (t5 >= t6);
    if (t7 != 0)
        goto LAB7;

LAB9:
LAB8:    goto LAB5;

LAB7:    xsi_set_current_line(211, ng3);
    t2 = (t0 + 2928U);
    t8 = *((char **)t2);
    t2 = (t8 + 0);
    *((unsigned char *)t2) = (unsigned char)1;
    t9 = (t0 + 2872U);
    xsi_variable_act(t9);
    xsi_set_current_line(212, ng3);
    t1 = (t0 + 4080U);
    t3 = std_textio_endfile(t1);
    t7 = (!(t3));
    if (t7 != 0)
        goto LAB10;

LAB12:    xsi_set_current_line(231, ng3);
    t1 = (t0 + 3048U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((unsigned char *)t1) = (unsigned char)1;
    t4 = (t0 + 2992U);
    xsi_variable_act(t4);
    xsi_set_current_line(232, ng3);
    t1 = xsi_get_transient_memory(1U);
    memset(t1, 0, 1U);
    t2 = t1;
    memset(t2, (unsigned char)88, 1U);
    t4 = (t0 + 4712U);
    t8 = (t4 + 56U);
    t9 = *((char **)t8);
    t8 = (t9 + 0);
    memcpy(t8, t1, 1U);
    t10 = (t0 + 4712U);
    xsi_variable_act(t10);
    xsi_set_current_line(233, ng3);
    t1 = xsi_get_transient_memory(1U);
    memset(t1, 0, 1U);
    t2 = t1;
    memset(t2, (unsigned char)88, 1U);
    t4 = (t0 + 4848U);
    t8 = (t4 + 56U);
    t9 = *((char **)t8);
    t8 = (t9 + 0);
    memcpy(t8, t1, 1U);
    t10 = (t0 + 4848U);
    xsi_variable_act(t10);
    xsi_set_current_line(234, ng3);
    t1 = xsi_get_transient_memory(8U);
    memset(t1, 0, 8U);
    t2 = t1;
    memset(t2, (unsigned char)88, 8U);
    t4 = (t0 + 4984U);
    t8 = (t4 + 56U);
    t9 = *((char **)t8);
    t8 = (t9 + 0);
    memcpy(t8, t1, 8U);
    t10 = (t0 + 4984U);
    xsi_variable_act(t10);

LAB11:    goto LAB8;

LAB10:    xsi_set_current_line(213, ng3);
    t2 = (t0 + 7632);
    t4 = (t0 + 4080U);
    t8 = (t0 + 4432U);
    std_textio_readline(STD_TEXTIO, t2, t4, t8);
    xsi_set_current_line(215, ng3);
    t1 = (t0 + 7632);
    t2 = (t0 + 4432U);
    t4 = (t0 + 5392U);
    t8 = (t4 + 56U);
    t9 = *((char **)t8);
    t8 = (t0 + 14136U);
    std_textio_read14(STD_TEXTIO, t1, t2, t9, t8);
    xsi_set_current_line(216, ng3);
    t1 = (t0 + 5392U);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t2 = (t0 + 4712U);
    t8 = (t2 + 56U);
    t9 = *((char **)t8);
    t8 = (t9 + 0);
    memcpy(t8, t4, 1U);
    t10 = (t0 + 4712U);
    xsi_variable_act(t10);
    xsi_set_current_line(217, ng3);
    t1 = (t0 + 7632);
    t2 = (t0 + 4432U);
    t4 = (t0 + 3408U);
    t8 = *((char **)t4);
    t4 = (t8 + 0);
    std_textio_read8(STD_TEXTIO, t1, t2, t4);
    xsi_set_current_line(218, ng3);
    t1 = (t0 + 2928U);
    t2 = *((char **)t1);
    t7 = *((unsigned char *)t2);
    if (t7 == 1)
        goto LAB13;

LAB14:    t3 = (unsigned char)0;

LAB15:    t17 = (t0 + 2928U);
    t21 = *((char **)t17);
    t17 = (t21 + 0);
    *((unsigned char *)t17) = t3;
    t22 = (t0 + 2872U);
    xsi_variable_act(t22);
    xsi_set_current_line(221, ng3);
    t1 = (t0 + 7632);
    t2 = (t0 + 4432U);
    t4 = (t0 + 5392U);
    t8 = (t4 + 56U);
    t9 = *((char **)t8);
    t8 = (t0 + 14136U);
    std_textio_read14(STD_TEXTIO, t1, t2, t9, t8);
    xsi_set_current_line(222, ng3);
    t1 = (t0 + 5392U);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t2 = (t0 + 4848U);
    t8 = (t2 + 56U);
    t9 = *((char **)t8);
    t8 = (t9 + 0);
    memcpy(t8, t4, 1U);
    t10 = (t0 + 4848U);
    xsi_variable_act(t10);
    xsi_set_current_line(223, ng3);
    t1 = (t0 + 7632);
    t2 = (t0 + 4432U);
    t4 = (t0 + 3408U);
    t8 = *((char **)t4);
    t4 = (t8 + 0);
    std_textio_read8(STD_TEXTIO, t1, t2, t4);
    xsi_set_current_line(224, ng3);
    t1 = (t0 + 2928U);
    t2 = *((char **)t1);
    t7 = *((unsigned char *)t2);
    if (t7 == 1)
        goto LAB16;

LAB17:    t3 = (unsigned char)0;

LAB18:    t17 = (t0 + 2928U);
    t21 = *((char **)t17);
    t17 = (t21 + 0);
    *((unsigned char *)t17) = t3;
    t22 = (t0 + 2872U);
    xsi_variable_act(t22);
    xsi_set_current_line(227, ng3);
    t1 = (t0 + 7632);
    t2 = (t0 + 4432U);
    t4 = (t0 + 5528U);
    t8 = (t4 + 56U);
    t9 = *((char **)t8);
    t8 = (t0 + 14152U);
    std_textio_read14(STD_TEXTIO, t1, t2, t9, t8);
    xsi_set_current_line(228, ng3);
    t1 = (t0 + 5528U);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t2 = (t0 + 4984U);
    t8 = (t2 + 56U);
    t9 = *((char **)t8);
    t8 = (t9 + 0);
    memcpy(t8, t4, 8U);
    t10 = (t0 + 4984U);
    xsi_variable_act(t10);
    xsi_set_current_line(229, ng3);
    t1 = (t0 + 2928U);
    t2 = *((char **)t1);
    t7 = *((unsigned char *)t2);
    if (t7 == 1)
        goto LAB19;

LAB20:    t3 = (unsigned char)0;

LAB21:    t17 = (t0 + 2928U);
    t21 = *((char **)t17);
    t17 = (t21 + 0);
    *((unsigned char *)t17) = t3;
    t22 = (t0 + 2872U);
    xsi_variable_act(t22);
    goto LAB11;

LAB13:    t1 = (t0 + 4712U);
    t4 = (t1 + 56U);
    t8 = *((char **)t4);
    t4 = (t0 + 14056U);
    t9 = work_a_2534346133_2578365841_sub_16713630550439977068_3989762038(t0, t11, t8, t4);
    t10 = (t0 + 2152U);
    t12 = *((char **)t10);
    t10 = (t0 + 14024U);
    t13 = (t0 + 14787);
    t16 = (t15 + 0U);
    t17 = (t16 + 0U);
    *((int *)t17) = 1;
    t17 = (t16 + 4U);
    *((int *)t17) = 4;
    t17 = (t16 + 8U);
    *((int *)t17) = 1;
    t18 = (4 - 1);
    t19 = (t18 * 1);
    t19 = (t19 + 1);
    t17 = (t16 + 12U);
    *((unsigned int *)t17) = t19;
    t20 = work_a_2534346133_2578365841_sub_10723292184953887035_3989762038(t0, t9, t11, t12, t10, t13, t15);
    t3 = t20;
    goto LAB15;

LAB16:    t1 = (t0 + 4848U);
    t4 = (t1 + 56U);
    t8 = *((char **)t4);
    t4 = (t0 + 14072U);
    t9 = work_a_2534346133_2578365841_sub_16713630550439977068_3989762038(t0, t11, t8, t4);
    t10 = (t0 + 2312U);
    t12 = *((char **)t10);
    t10 = (t0 + 14040U);
    t13 = (t0 + 14791);
    t16 = (t15 + 0U);
    t17 = (t16 + 0U);
    *((int *)t17) = 1;
    t17 = (t16 + 4U);
    *((int *)t17) = 5;
    t17 = (t16 + 8U);
    *((int *)t17) = 1;
    t18 = (5 - 1);
    t19 = (t18 * 1);
    t19 = (t19 + 1);
    t17 = (t16 + 12U);
    *((unsigned int *)t17) = t19;
    t20 = work_a_2534346133_2578365841_sub_10723292184953887035_3989762038(t0, t9, t11, t12, t10, t13, t15);
    t3 = t20;
    goto LAB18;

LAB19:    t1 = (t0 + 4984U);
    t4 = (t1 + 56U);
    t8 = *((char **)t4);
    t4 = (t0 + 14088U);
    t9 = work_a_2534346133_2578365841_sub_16713630550439977068_3989762038(t0, t11, t8, t4);
    t10 = (t0 + 1992U);
    t12 = *((char **)t10);
    t10 = (t0 + 14008U);
    t13 = (t0 + 14796);
    t16 = (t15 + 0U);
    t17 = (t16 + 0U);
    *((int *)t17) = 1;
    t17 = (t16 + 4U);
    *((int *)t17) = 4;
    t17 = (t16 + 8U);
    *((int *)t17) = 1;
    t18 = (4 - 1);
    t19 = (t18 * 1);
    t19 = (t19 + 1);
    t17 = (t16 + 12U);
    *((unsigned int *)t17) = t19;
    t20 = work_a_2534346133_2578365841_sub_10723292184953887035_3989762038(t0, t9, t11, t12, t10, t13, t15);
    t3 = t20;
    goto LAB21;

}

static void work_a_2534346133_2578365841_p_3(char *t0)
{
    char t8[16];
    char t21[16];
    char t23[8];
    char t24[8];
    char t25[8];
    char t26[8];
    char t27[8];
    char t31[16];
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t9;
    unsigned int t10;
    int64 t11;
    int64 t12;
    unsigned char t13;
    unsigned char t14;
    unsigned char t15;
    unsigned char t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t22;
    char *t28;
    char *t29;
    char *t30;
    char *t32;
    char *t33;
    unsigned int t34;
    char *t35;
    char *t36;
    char *t37;

LAB0:    xsi_set_current_line(256, ng3);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    if (t3 == 0)
        goto LAB2;

LAB3:    xsi_set_current_line(258, ng3);
    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    if (t3 != 0)
        goto LAB4;

LAB6:
LAB5:    xsi_set_current_line(266, ng3);
    t11 = xsi_get_sim_current_time();
    t1 = (t0 + 3168U);
    t2 = *((char **)t1);
    t12 = *((int64 *)t2);
    t13 = (t11 >= t12);
    if (t13 == 1)
        goto LAB10;

LAB11:    t3 = (unsigned char)0;

LAB12:    if (t3 != 0)
        goto LAB7;

LAB9:
LAB8:    t1 = (t0 + 8440);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    t1 = (t0 + 14800);
    xsi_report(t1, 7U, (unsigned char)0);
    goto LAB3;

LAB4:    xsi_set_current_line(259, ng3);
    t1 = (t0 + 8904);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(260, ng3);
    t1 = (t0 + 7880);
    t2 = (t0 + 4504U);
    t4 = (t0 + 14807);
    t6 = (t8 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 1;
    t7 = (t6 + 4U);
    *((int *)t7) = 21;
    t7 = (t6 + 8U);
    *((int *)t7) = 1;
    t9 = (21 - 1);
    t10 = (t9 * 1);
    t10 = (t10 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t10;
    std_textio_write7(STD_TEXTIO, t1, t2, t4, t8, (unsigned char)0, 0);
    xsi_set_current_line(261, ng3);
    t1 = (t0 + 7880);
    t2 = (t0 + 4504U);
    t4 = (t0 + 3168U);
    t5 = *((char **)t4);
    t11 = *((int64 *)t5);
    std_textio_write8(STD_TEXTIO, t1, t2, t11, (unsigned char)0, 0, 1000LL);
    xsi_set_current_line(262, ng3);
    t1 = (t0 + 7880);
    t2 = (t0 + 4504U);
    t4 = (t0 + 14828);
    t6 = (t8 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 1;
    t7 = (t6 + 4U);
    *((int *)t7) = 58;
    t7 = (t6 + 8U);
    *((int *)t7) = 1;
    t9 = (58 - 1);
    t10 = (t9 * 1);
    t10 = (t10 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t10;
    std_textio_write7(STD_TEXTIO, t1, t2, t4, t8, (unsigned char)0, 0);
    xsi_set_current_line(263, ng3);
    t1 = (t0 + 7880);
    t2 = (t0 + 4184U);
    t4 = (t0 + 4504U);
    std_textio_writeline(STD_TEXTIO, t1, t2, t4);
    goto LAB5;

LAB7:    xsi_set_current_line(267, ng3);
    t1 = (t0 + 992U);
    t16 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t16 != 0)
        goto LAB13;

LAB15:
LAB14:    goto LAB8;

LAB10:    t1 = (t0 + 3048U);
    t4 = *((char **)t1);
    t14 = *((unsigned char *)t4);
    t15 = (!(t14));
    t3 = t15;
    goto LAB12;

LAB13:    xsi_set_current_line(268, ng3);
    t5 = (t0 + 1192U);
    t6 = *((char **)t5);
    t5 = (t0 + 13928U);
    t7 = work_a_2534346133_2578365841_sub_3158420137067320835_3989762038(t0, t8, t6, t5);
    t17 = (t0 + 5664U);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t18 = (t19 + 0);
    t20 = (t8 + 12U);
    t10 = *((unsigned int *)t20);
    t10 = (t10 * 1U);
    memcpy(t18, t7, t10);
    xsi_set_current_line(269, ng3);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 13944U);
    t4 = work_a_2534346133_2578365841_sub_3158420137067320835_3989762038(t0, t8, t2, t1);
    t5 = (t0 + 5800U);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    t17 = (t8 + 12U);
    t10 = *((unsigned int *)t17);
    t10 = (t10 * 1U);
    memcpy(t6, t4, t10);
    xsi_set_current_line(270, ng3);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t1 = (t0 + 13960U);
    t4 = work_a_2534346133_2578365841_sub_3158420137067320835_3989762038(t0, t8, t2, t1);
    t5 = (t0 + 5936U);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    t17 = (t8 + 12U);
    t10 = *((unsigned int *)t17);
    t10 = (t10 * 1U);
    memcpy(t6, t4, t10);
    xsi_set_current_line(271, ng3);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t1 = (t0 + 13976U);
    t4 = work_a_2534346133_2578365841_sub_3158420137067320835_3989762038(t0, t8, t2, t1);
    t5 = (t0 + 6072U);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    t17 = (t8 + 12U);
    t10 = *((unsigned int *)t17);
    t10 = (t10 * 1U);
    memcpy(t6, t4, t10);
    xsi_set_current_line(272, ng3);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t1 = (t0 + 13992U);
    t4 = work_a_2534346133_2578365841_sub_3158420137067320835_3989762038(t0, t8, t2, t1);
    t5 = (t0 + 6208U);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    t17 = (t8 + 12U);
    t10 = *((unsigned int *)t17);
    t10 = (t10 * 1U);
    memcpy(t6, t4, t10);
    xsi_set_current_line(273, ng3);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t1 = (t0 + 13928U);
    t4 = work_a_2534346133_2578365841_sub_3158420137067320835_3989762038(t0, t8, t2, t1);
    t5 = (t0 + 5664U);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    t17 = (t8 + 12U);
    t10 = *((unsigned int *)t17);
    t10 = (t10 * 1U);
    memcpy(t6, t4, t10);
    xsi_set_current_line(274, ng3);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t1 = (t0 + 14024U);
    t4 = work_a_2534346133_2578365841_sub_3158420137067320835_3989762038(t0, t8, t2, t1);
    t5 = (t0 + 6344U);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    t17 = (t8 + 12U);
    t10 = *((unsigned int *)t17);
    t10 = (t10 * 1U);
    memcpy(t6, t4, t10);
    xsi_set_current_line(275, ng3);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t1 = (t0 + 14040U);
    t4 = work_a_2534346133_2578365841_sub_3158420137067320835_3989762038(t0, t8, t2, t1);
    t5 = (t0 + 6480U);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    t17 = (t8 + 12U);
    t10 = *((unsigned int *)t17);
    t10 = (t10 * 1U);
    memcpy(t6, t4, t10);
    xsi_set_current_line(276, ng3);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t1 = (t0 + 14008U);
    t4 = work_a_2534346133_2578365841_sub_3158420137067320835_3989762038(t0, t8, t2, t1);
    t5 = (t0 + 6616U);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    t17 = (t8 + 12U);
    t10 = *((unsigned int *)t17);
    t10 = (t10 * 1U);
    memcpy(t6, t4, t10);
    xsi_set_current_line(277, ng3);
    t1 = (t0 + 2928U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    if (t3 != 0)
        goto LAB16;

LAB18:    xsi_set_current_line(280, ng3);
    t1 = (t0 + 14893);
    t4 = (t0 + 6752U);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t5 = (t6 + 0);
    memcpy(t5, t1, 7U);

LAB17:    xsi_set_current_line(282, ng3);
    t11 = xsi_get_sim_current_time();
    t1 = (t0 + 3648U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((int64 *)t1) = t11;
    xsi_set_current_line(283, ng3);
    t1 = (t0 + 7880);
    t2 = (t0 + 4504U);
    t4 = (t0 + 6752U);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t5 = (t0 + 14900);
    t18 = ((STD_STANDARD) + 984);
    t19 = (t0 + 14296U);
    t20 = (t21 + 0U);
    t22 = (t20 + 0U);
    *((int *)t22) = 1;
    t22 = (t20 + 4U);
    *((int *)t22) = 4;
    t22 = (t20 + 8U);
    *((int *)t22) = 1;
    t9 = (4 - 1);
    t10 = (t9 * 1);
    t10 = (t10 + 1);
    t22 = (t20 + 12U);
    *((unsigned int *)t22) = t10;
    t17 = xsi_base_array_concat(t17, t8, t18, (char)97, t6, t19, (char)97, t5, t21, (char)101);
    t10 = (7U + 4U);
    t22 = (char *)alloca(t10);
    memcpy(t22, t17, t10);
    std_textio_write7(STD_TEXTIO, t1, t2, t22, t8, (unsigned char)0, 0);
    xsi_set_current_line(284, ng3);
    t1 = (t0 + 7880);
    t2 = (t0 + 4504U);
    t4 = (t0 + 3648U);
    t5 = *((char **)t4);
    t11 = *((int64 *)t5);
    std_textio_write8(STD_TEXTIO, t1, t2, t11, (unsigned char)0, 0, 1000LL);
    xsi_set_current_line(285, ng3);
    t1 = (t0 + 7880);
    t2 = (t0 + 4504U);
    t4 = (t0 + 3528U);
    t5 = *((char **)t4);
    t3 = *((unsigned char *)t5);
    std_textio_write4(STD_TEXTIO, t1, t2, t3, (unsigned char)0, 0);
    xsi_set_current_line(286, ng3);
    t1 = (t0 + 7880);
    t2 = (t0 + 4504U);
    t4 = (t0 + 3528U);
    t5 = *((char **)t4);
    t3 = *((unsigned char *)t5);
    std_textio_write4(STD_TEXTIO, t1, t2, t3, (unsigned char)0, 0);
    xsi_set_current_line(287, ng3);
    t1 = (t0 + 7880);
    t2 = (t0 + 4504U);
    t4 = (t0 + 5664U);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t23, t6, 1U);
    t5 = (t0 + 14168U);
    std_textio_write7(STD_TEXTIO, t1, t2, t23, t5, (unsigned char)0, 0);
    xsi_set_current_line(288, ng3);
    t1 = (t0 + 7880);
    t2 = (t0 + 4504U);
    t4 = (t0 + 3528U);
    t5 = *((char **)t4);
    t3 = *((unsigned char *)t5);
    std_textio_write4(STD_TEXTIO, t1, t2, t3, (unsigned char)0, 0);
    xsi_set_current_line(289, ng3);
    t1 = (t0 + 7880);
    t2 = (t0 + 4504U);
    t4 = (t0 + 5800U);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t24, t6, 1U);
    t5 = (t0 + 14184U);
    std_textio_write7(STD_TEXTIO, t1, t2, t24, t5, (unsigned char)0, 0);
    xsi_set_current_line(290, ng3);
    t1 = (t0 + 7880);
    t2 = (t0 + 4504U);
    t4 = (t0 + 3528U);
    t5 = *((char **)t4);
    t3 = *((unsigned char *)t5);
    std_textio_write4(STD_TEXTIO, t1, t2, t3, (unsigned char)0, 0);
    xsi_set_current_line(291, ng3);
    t1 = (t0 + 7880);
    t2 = (t0 + 4504U);
    t4 = (t0 + 5936U);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t25, t6, 1U);
    t5 = (t0 + 14200U);
    std_textio_write7(STD_TEXTIO, t1, t2, t25, t5, (unsigned char)0, 0);
    xsi_set_current_line(292, ng3);
    t1 = (t0 + 7880);
    t2 = (t0 + 4504U);
    t4 = (t0 + 3528U);
    t5 = *((char **)t4);
    t3 = *((unsigned char *)t5);
    std_textio_write4(STD_TEXTIO, t1, t2, t3, (unsigned char)0, 0);
    xsi_set_current_line(293, ng3);
    t1 = (t0 + 7880);
    t2 = (t0 + 4504U);
    t4 = (t0 + 6072U);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t26, t6, 1U);
    t5 = (t0 + 14216U);
    std_textio_write7(STD_TEXTIO, t1, t2, t26, t5, (unsigned char)0, 0);
    xsi_set_current_line(294, ng3);
    t1 = (t0 + 7880);
    t2 = (t0 + 4504U);
    t4 = (t0 + 3528U);
    t5 = *((char **)t4);
    t3 = *((unsigned char *)t5);
    std_textio_write4(STD_TEXTIO, t1, t2, t3, (unsigned char)0, 0);
    xsi_set_current_line(295, ng3);
    t1 = (t0 + 7880);
    t2 = (t0 + 4504U);
    t4 = (t0 + 6208U);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t27, t6, 8U);
    t5 = (t0 + 14232U);
    std_textio_write7(STD_TEXTIO, t1, t2, t27, t5, (unsigned char)0, 0);
    xsi_set_current_line(296, ng3);
    t1 = (t0 + 7880);
    t2 = (t0 + 4504U);
    t4 = (t0 + 3528U);
    t5 = *((char **)t4);
    t3 = *((unsigned char *)t5);
    std_textio_write4(STD_TEXTIO, t1, t2, t3, (unsigned char)0, 0);
    xsi_set_current_line(297, ng3);
    t1 = (t0 + 7880);
    t2 = (t0 + 4504U);
    t4 = (t0 + 3528U);
    t5 = *((char **)t4);
    t3 = *((unsigned char *)t5);
    std_textio_write4(STD_TEXTIO, t1, t2, t3, (unsigned char)0, 0);
    xsi_set_current_line(298, ng3);
    t1 = (t0 + 7880);
    t2 = (t0 + 4504U);
    t4 = (t0 + 4712U);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t5 = (t0 + 14904);
    t18 = ((STD_STANDARD) + 984);
    t19 = (t0 + 14056U);
    t20 = (t21 + 0U);
    t28 = (t20 + 0U);
    *((int *)t28) = 1;
    t28 = (t20 + 4U);
    *((int *)t28) = 1;
    t28 = (t20 + 8U);
    *((int *)t28) = 1;
    t9 = (1 - 1);
    t10 = (t9 * 1);
    t10 = (t10 + 1);
    t28 = (t20 + 12U);
    *((unsigned int *)t28) = t10;
    t17 = xsi_base_array_concat(t17, t8, t18, (char)97, t6, t19, (char)97, t5, t21, (char)101);
    t28 = (t0 + 6344U);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    t32 = ((STD_STANDARD) + 984);
    t33 = (t0 + 14248U);
    t29 = xsi_base_array_concat(t29, t31, t32, (char)97, t17, t8, (char)97, t30, t33, (char)101);
    t10 = (1U + 1U);
    t34 = (t10 + 1U);
    t35 = (char *)alloca(t34);
    memcpy(t35, t29, t34);
    std_textio_write7(STD_TEXTIO, t1, t2, t35, t31, (unsigned char)0, 0);
    xsi_set_current_line(299, ng3);
    t1 = (t0 + 7880);
    t2 = (t0 + 4504U);
    t4 = (t0 + 3528U);
    t5 = *((char **)t4);
    t3 = *((unsigned char *)t5);
    std_textio_write4(STD_TEXTIO, t1, t2, t3, (unsigned char)0, 0);
    xsi_set_current_line(300, ng3);
    t1 = (t0 + 7880);
    t2 = (t0 + 4504U);
    t4 = (t0 + 4848U);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t5 = (t0 + 14905);
    t18 = ((STD_STANDARD) + 984);
    t19 = (t0 + 14072U);
    t20 = (t21 + 0U);
    t28 = (t20 + 0U);
    *((int *)t28) = 1;
    t28 = (t20 + 4U);
    *((int *)t28) = 1;
    t28 = (t20 + 8U);
    *((int *)t28) = 1;
    t9 = (1 - 1);
    t10 = (t9 * 1);
    t10 = (t10 + 1);
    t28 = (t20 + 12U);
    *((unsigned int *)t28) = t10;
    t17 = xsi_base_array_concat(t17, t8, t18, (char)97, t6, t19, (char)97, t5, t21, (char)101);
    t28 = (t0 + 6480U);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    t32 = ((STD_STANDARD) + 984);
    t33 = (t0 + 14264U);
    t29 = xsi_base_array_concat(t29, t31, t32, (char)97, t17, t8, (char)97, t30, t33, (char)101);
    t10 = (1U + 1U);
    t34 = (t10 + 1U);
    t36 = (char *)alloca(t34);
    memcpy(t36, t29, t34);
    std_textio_write7(STD_TEXTIO, t1, t2, t36, t31, (unsigned char)0, 0);
    xsi_set_current_line(301, ng3);
    t1 = (t0 + 7880);
    t2 = (t0 + 4504U);
    t4 = (t0 + 3528U);
    t5 = *((char **)t4);
    t3 = *((unsigned char *)t5);
    std_textio_write4(STD_TEXTIO, t1, t2, t3, (unsigned char)0, 0);
    xsi_set_current_line(302, ng3);
    t1 = (t0 + 7880);
    t2 = (t0 + 4504U);
    t4 = (t0 + 4984U);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t5 = (t0 + 14906);
    t18 = ((STD_STANDARD) + 984);
    t19 = (t0 + 14088U);
    t20 = (t21 + 0U);
    t28 = (t20 + 0U);
    *((int *)t28) = 1;
    t28 = (t20 + 4U);
    *((int *)t28) = 1;
    t28 = (t20 + 8U);
    *((int *)t28) = 1;
    t9 = (1 - 1);
    t10 = (t9 * 1);
    t10 = (t10 + 1);
    t28 = (t20 + 12U);
    *((unsigned int *)t28) = t10;
    t17 = xsi_base_array_concat(t17, t8, t18, (char)97, t6, t19, (char)97, t5, t21, (char)101);
    t28 = (t0 + 6616U);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    t32 = ((STD_STANDARD) + 984);
    t33 = (t0 + 14280U);
    t29 = xsi_base_array_concat(t29, t31, t32, (char)97, t17, t8, (char)97, t30, t33, (char)101);
    t10 = (8U + 1U);
    t34 = (t10 + 8U);
    t37 = (char *)alloca(t34);
    memcpy(t37, t29, t34);
    std_textio_write7(STD_TEXTIO, t1, t2, t37, t31, (unsigned char)0, 0);
    xsi_set_current_line(303, ng3);
    t1 = (t0 + 7880);
    t2 = (t0 + 4184U);
    t4 = (t0 + 4504U);
    std_textio_writeline(STD_TEXTIO, t1, t2, t4);
    goto LAB14;

LAB16:    xsi_set_current_line(278, ng3);
    t1 = (t0 + 14886);
    t5 = (t0 + 6752U);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    memcpy(t6, t1, 7U);
    goto LAB17;

}


extern void work_a_2534346133_2578365841_init()
{
	static char *pe[] = {(void *)work_a_2534346133_2578365841_p_0,(void *)work_a_2534346133_2578365841_p_1,(void *)work_a_2534346133_2578365841_p_2,(void *)work_a_2534346133_2578365841_p_3};
	static char *se[] = {(void *)work_a_2534346133_2578365841_sub_927153478380809325_3989762038,(void *)work_a_2534346133_2578365841_sub_16713630550439977068_3989762038,(void *)work_a_2534346133_2578365841_sub_15330119733485141808_3989762038,(void *)work_a_2534346133_2578365841_sub_3158420137067320835_3989762038,(void *)work_a_2534346133_2578365841_sub_10723292184953887035_3989762038};
	xsi_register_didat("work_a_2534346133_2578365841", "isim/stack_tb_isim_beh.exe.sim/work/a_2534346133_2578365841.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
