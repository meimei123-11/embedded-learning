#include <stdio.h>

int main(void)
{
    int age = 21;         /* 整数：装 whole number */
    float score = 9.5f;   /* 小数：带小数点的数 */
    char grade = 'A';     /* 字符：单个字母，用单引号 */

    printf("age = %d\n", age);       /* %d 打印整数 */
    printf("score = %.1f\n", score); /* %.1f 打印小数，保留1位 */
    printf("grade = %c\n", grade);   /* %c 打印字符 */
    int next_year_age = age + 1;
    printf("next_year_age = %d\n", next_year_age);
    

    return 0;
}
