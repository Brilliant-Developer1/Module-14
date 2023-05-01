#include <stdio.h>

int sum(int x, int y)
{

    int sum = x + y;

    return sum;
}
int main()
{
    int res = sum(10, 15);

    printf("%d", res);
    return 0;
}