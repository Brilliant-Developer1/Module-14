#include <stdio.h>
int main()
{
    int v;
    scanf("%d", &v);
    // printf("%p\n", &v);

    int *p = &v; // v er memory adress anbe
    printf("%p\n", p);

    // dereference
    // printf("%d\n", *p);

    *p = 19;
    printf("%d\n", v);
    return 0;
}
