/******************************************************************************
 * 版  权： 版权归作者个人所有
 * 文件名： integer.c
 * 功  能： 整型常量的定义和使用示例
 * 作  者： 校长
 * 版  本： V1.0
 * 日  期： 2026/01/19
 ******************************************************************************/
#include <stdio.h>   // 包含的系统头文件
#include "integer.h" // 包含的自定义头文件


/******************************************************************************
 @brief      : 整型类型的大小
 @param[in]  : 无
 @param[out] : 无
 @return     : 无
 @note       : 无
 *****************************************************************************/
void SizeInteger(void)
{
    printf("----------------%s----------------\n", __FUNCTION__);
    printf("the type of signed short int size = %zu\n", sizeof(signed short int));
    printf("the type of unsigned short int size = %zu\n", sizeof(unsigned short int));
    printf("the type of signed int size = %zu\n", sizeof(signed int));
    printf("the type of unsigned int size = %zu\n", sizeof(unsigned int));
    printf("the type of signed long int size = %zu\n", sizeof(signed long int));
    printf("the type of unsigned long int size = %zu\n", sizeof(unsigned long int));
    printf("the type of signed long long int size = %zu\n", sizeof(signed long long int));
    printf("the type of unsigned long long size = %zu\n", sizeof(unsigned long long int));
}

/******************************************************************************
 @brief      : 整型常量的大小
 @param[in]  : 无
 @param[out] : 无
 @return     : 无
 @note       : 无
 *****************************************************************************/
void SizeIntegerConstant(void)
{
    printf("----------------%s----------------\n", __FUNCTION__);
    printf("the type of 12 size = %zu\n", sizeof(12));
    printf("the type of -12 size = %zu\n", sizeof(-12));
    printf("the type of 32766 size = %zu\n", sizeof(32766));
    printf("the type of 32767 size = %zu\n", sizeof(32767));
    printf("the type of 32768 size = %zu\n", sizeof(32768));
    printf("the type of 9223372036854775806 size = %zu\n", sizeof(9223372036854775806));
}

/******************************************************************************
 @brief      : 整型变量的大小
 @param[in]  : 无
 @param[out] : 无
 @return     : 无
 @note       : 无
 *****************************************************************************/
void SizeIntegerVariable(void)
{
    printf("----------------%s----------------\n", __FUNCTION__);
    short int var1 = -10;
    printf("the type of var1 size = %zu\n", sizeof(var1));
    unsigned short int var2 = 10;
    printf("the type of var2 size = %lu\n", sizeof(var2));
    printf("the type of var2 size = %u\n", var2);

    int var3 = -10;
    printf("the type of var3 size = %zu\n", sizeof(var3));
    unsigned int var4 = 10U;
    printf("the type of var4 size = %zu\n", sizeof(var4));

    long int var5 = -10L;
    printf("the type of var5 size = %zu\n", sizeof(var5));
    unsigned long int var6 = 10uL;
    printf("the type of var6 size = %zu\n", sizeof(var6));

    long long int var7 = -10LL;
    printf("the type of var7 size = %zu\n", sizeof(var7));
    unsigned long long int var8 = 10uLL;
    printf("the type of var8 size = %zu\n", sizeof(var8));
}

/******************************************************************************
 @brief      : 八进制、十进制、十六进制
 @param[in]  : 无
 @param[out] : 无
 @return     : 无
 @note       : 无
 *****************************************************************************/
void DifferentBase(void)
{
    printf("----------------%s----------------\n", __FUNCTION__);
    int octonary_var = 0332; // 八进制
    printf("the octonary_var = %o\n", octonary_var);
    printf("the type of octonary_var size = %zu\n", sizeof(octonary_var));
    int decimalism_var = 12; // 十进制
    printf("the decimalism_var = %d\n", decimalism_var);
    printf("the type of decimalism_var size = %zu\n", sizeof(decimalism_var));
    int hexadecimal_var = 0x32A;                            // 十六进制
    printf("the hexadecimal_var = 0x%X\n", hexadecimal_var);
    printf("the hexadecimal_var = %#X\n", hexadecimal_var); // 0XYYYY
    printf("the hexadecimal_var = %#x\n", hexadecimal_var); // 0xYYYY
    printf("the type of hexadecimal_var size = %zu\n", sizeof(hexadecimal_var));
}

/******************************************************************************
 @brief      : 溢出类型
 @param[in]  : 无
 @param[out] : 无
 @return     : 无
 @note       : 无
 *****************************************************************************/
void OverflowType(void)
{
    printf("----------------%s----------------\n", __FUNCTION__);
    signed int overflow_var1 = 2147483649; // -2147483648 到 2147483647
    unsigned int overflow_var2 = -128;     // 0 到 4294967295
    printf("the overflow_var1 = %d\n", overflow_var1);
    printf("the overflow_var2 = %u\n", overflow_var2);
}
