/**
     Bismillahir Rahmanir Rahim.
--------------------------------------
      S M MahDi -CSTE 10th , NSTU.
            Date: 20-06-2016
---------------------------------------
**/


#include<stdio.h>
int main(void){

    int i,n;
    scanf("%d",&n);
    if(n%2==0)
        n=n+1;

    printf("%d\n",n);

    for(i=1;i<=5;i++)
    printf("%d\n",n+=2);
    return 0;
}
