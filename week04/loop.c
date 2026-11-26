#include <stdio.h>

int main(void)
{
    int n = 10;

    while (n > 0) {
        printf("count = %d\n", n);
        n = n - 1;
    }

    printf("done\n");
    return 0;
}
