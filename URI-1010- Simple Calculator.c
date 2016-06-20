/**
     Bismillahir Rahmanir Rahim.
--------------------------------------
      S M MahDi -CSTE 10th , NSTU.
            Date: 20-06-2016
---------------------------------------
**/

#include <stdio.h>
int main ()
{
    int a, b, c, d;
    float x, y,result;

    scanf("%d %d %f", &a,&c,&x);
    scanf("%d %d %f", &b,&d,&y);

    result = c*x + d*y ;

    printf("VALOR A PAGAR: R$ %.2lf\n",result);
    return 0;
}
