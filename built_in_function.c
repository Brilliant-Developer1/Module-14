#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    double x;
    scanf("%lf", &x);

    int ans = ceil(x);
    // int ans = floor(x);
    // int ans = round(x);
    // int ans = round(x);
    // double ans = sqrt(x);

    // double a, b;
    // scanf("%lf %lf", &a, &b);
    // double ans = pow(a, b);
    // double value nite hole pow(a*1.0, b*1.0)

    // input er value nagitive hole abs positive kore dey. vitore if else diye check kore value nagitive hole -1 diye gon kore dey.
    // int v;
    // scanf("%d", &v);
    // int ans = abs(v);

    printf("%d\n", ans);
    return 0;
}