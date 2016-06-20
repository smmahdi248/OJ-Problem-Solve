/**
     Bismillahir Rahmanir Rahim.
--------------------------------------
      S M MahDi -CSTE 10th , NSTU.
            Date: 20-06-2016
---------------------------------------
**/

#include <stdio.h>
int main()
{
    int n,y,m,d;
    scanf("%d",&n);
    y=n/365;
    m=(n%365)/30;
    d=(n%365)%30;

    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",y,m,d);
    return 0;

}
