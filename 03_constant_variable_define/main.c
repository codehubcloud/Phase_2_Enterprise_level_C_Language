/******************************************************************************
 * 版  权： 版权归作者个人所有
 * 文件名： main.c
 * 功  能： 常量和变量的定义和使用示例
 * 作  者： 校长
 * 版  本： V1.0
 * 日  期： 2025/12/29
 ******************************************************************************/
#include <stdio.h>         // 包含的系统头文件

#define CONST_VALUE (100U) // 定义一个宏常量CONST_VALUE，值为100, U 表示无符号类型

/******************************************************************************
 @brief      : 常量的使用，存放常量的变量定义(constant variable define)
 @param[in]  : 无
 @param[out] : 无
 @return     : 无
 @note       : 无
 *****************************************************************************/
void ContantVariableDefine(void)
{
    const int max_value = 20; // 定义一个常量变量名max_value，常量值为20
    printf("The max value is: %d\n", max_value);
    // max_value = 30;                       // 错误示范：尝试修改常量变量的值，会导致编译错误
    // printf("The max value is: %d\n", max_value);
    printf("The min value is: %d\n", 10);              // 直接使用常量值10
    printf("The CONST_VALUE 1 is: %u\n", CONST_VALUE); // 第1次使用符号常量值100
    printf("The CONST_VALUE 2 is: %u\n", CONST_VALUE); // 第2次使用符号常量值100
    printf("The CONST_VALUE 3 is: %u\n", CONST_VALUE); // 第3次使用符号常量值100
}

/******************************************************************************
 @brief      : 变量的定义使用
 @param[in]  : 无
 @param[out] : 无
 @return     : 无
 @note       : 无
 *****************************************************************************/
void VariableDefineAndUse(void)
{
    int variable = 10; // 定义一个变量名variable，变量值为10
    printf("The variable value is: %d\n", variable);
    variable = 20;     // 修改变量的值为20
    printf("The modified variable value is: %d\n", variable);
}

/******************************************************************************
 @brief      : main函数
 @param[in]  : argc --函数参数个数 argv 函数参数指针
 @param[out] : 无
 @return     : 0 --成功 其他 --异常
 @note       : 无
 *****************************************************************************/
int main(int argc, char** argv)
{
    ContantVariableDefine(); // 调用ContantVariableDefine函数
    VariableDefineAndUse();  // 调用VariableDefineAndUse函数
    return 0;
}
