/**
     Bismillahir Rahmanir Rahim.
--------------------------------------
      S M MahDi -CSTE 10th , NSTU.
            Date: 20-06-2016
---------------------------------------
**/

#include<stdio.h>
int main(void){

    float x,y,price;
    scanf("%f%f",&x,&y);

    if(x==1)
        price=y*4.00;
    else if(x==2)
        price=y*4.50;
    else if(x==3)
        price=y*5.00;
    else if(x==4)
        price=y*2.00;
    else if(x==5)
        price=y*1.50;

    printf("Total: R$ %.2f\n",price);

    return 0;
}
