/**
     Bismillahir Rahmanir Rahim.
--------------------------------------
      S M MahDi -CSTE 10th , NSTU.
            Date: 20-06-2016
---------------------------------------
**/

#include<stdio.h>
int main(void){

    int i,big;
    int a[3];

    for(i=0;i<3;i++)
        scanf("%d",&a[i]);

    big=a[0];
    for(i=0;i<3;i++){
        if(a[i]>big)
            big=a[i];

        else
            continue;
    }
    printf("%d eh o maior\n",big);
    return 0;
}
