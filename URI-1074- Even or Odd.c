
/**
     Bismillahir Rahmanir Rahim.
--------------------------------------
      S M MahDi -CSTE 10th , NSTU.
            Date: 20-06-2016
---------------------------------------
**/


#include<stdio.h>
int main(){

    long int i,N,X;
    scanf("%ld",&N);

    for(i=1;i<=N;i++){
        scanf("%d",&X);

        if(X==0)
            printf("NULL\n");

        if(X%2==0 && X>0)
            printf("EVEN POSITIVE\n");

        if(X%2==0 && X<0)
        printf("EVEN NEGATIVE\n");

        if(X%2==1 && X>0)
            printf("ODD POSITIVE\n");

        if(X%2==-1 && X<0 )
            printf("ODD NEGATIVE\n");
    }
    return 0;
}
