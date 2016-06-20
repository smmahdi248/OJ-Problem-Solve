/**
     Bismillahir Rahmanir Rahim.
--------------------------------------
      S M MahDi -CSTE 10th , NSTU.
            Date: 20-06-2016
---------------------------------------
**/

#include<stdio.h>
int main(void){
    int i,count=0;
    float n;
    for(i=1;i<=6;i++){
        scanf("%f",&n);
        if(n>0)
            count++;
        }
    printf("%d valores positivos\n",count);
    return 0;
}
