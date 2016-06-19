/**
     Bismillahir Rahmanir Rahim.
--------------------------------------
      S M MahDi -CSTE 10th , NSTU.
            Date: 19-06-2016
---------------------------------------
**/


#include<stdio.h>
int main()
{
      int count=0,n,a,b,i,j;

      while(scanf("%d",&n)==1){
            while(count<=5){
                        if(n%2==1){
                          count++;
                         printf("%d\n",n);
                         }
                        n++;
            }
            count=0;
      }
      return 0;
}
