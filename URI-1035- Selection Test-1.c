/**
     Bismillahir Rahmanir Rahim.
--------------------------------------
      S M MahDi -CSTE 10th , NSTU.
            Date: 20-06-2016
---------------------------------------
**/


#include <stdio.h>


int main (void){

    int A,B,C,D;

    scanf("%d %d %d %d",&A,&B,&C,&D);

    if((B>C && D>A) && (C+D>B+A) && (C>=0 && D>=0) && (A%2==0))
        printf("Valores aceitos\n");
    else
        printf("Valores nao aceitos\n");
    return 0;
}


