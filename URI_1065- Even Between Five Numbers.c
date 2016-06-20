/**
     Bismillahir Rahmanir Rahim.
--------------------------------------
      S M MahDi -CSTE 10th , NSTU.
            Date: 20-06-2016
---------------------------------------
**/

#include<stdio.h>
int main(void){
    int i,n,count=0;
    for(i=1;i<=5;i++){
        scanf("%d",&n);
        if(n%2==0)
            count++;
    }
    printf("%d valores pares\n",count);
    return 0;
}
