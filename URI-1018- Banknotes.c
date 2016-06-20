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
    int i,s,n100,n50,n20,n10,n5,n2,n1;

    scanf("%d",&i);
    printf("%d\n",i);

    n100=i/100;
    s=i%100;

    printf("%d nota(s) de R$ 100,00\n",n100);

    n50=s/50;
    s=s%50;

    printf("%d nota(s) de R$ 50,00\n",n50);

    n20=s/20;
    s=s%20;

    printf("%d nota(s) de R$ 20,00\n",n20);

    n10=s/10;
    s=s%10;

    printf("%d nota(s) de R$ 10,00\n",n10);

    n5=s/5;
    s=s%5;

    printf("%d nota(s) de R$ 5,00\n",n5);

    n2=s/2;
    s=s%2;

    printf("%d nota(s) de R$ 2,00\n",n2);

    n1=s/1;
    s=s%1;

    printf("%d nota(s) de R$ 1,00\n",n1);

    return 0;
}
