#include <stdio.h>
#include <stdint.h>

/* 嵌入式里最常见的操作之一: 对寄存器的某一位置 1 */
static void reg_set_bit(volatile uint32_t *reg, uint8_t bit)
{
    *reg |= (1u << bit);
}

int main(void)
{
    uint32_t gpio_ctrl = 0u;

    reg_set_bit(&gpio_ctrl, 3);   /* 期望得到 0x00000008 */

    printf("妈妈我爱你\n");
    printf("sizeof(void*)=%zu, sizeof(uint32_t)=%zu, gpio_ctrl=0x%08X\n",
           sizeof(void *), sizeof(uint32_t), gpio_ctrl);
    return 0;
}

