#include <stdio.h>

void sum(void)
{
    int x = 5, y = 10;
    int sum = x + y;

    printf("%d", sum);
}
int main()
{
    sum();

    return 0;
}