#include <stdio.h>

int sum()
{

    int sum = 10 + 5;
    return sum;
}
int main()
{
    int res = sum();
    printf("%d", res);
    return 0;
}