/**
     Bismillahir Rahmanir Rahim.
--------------------------------------
      S M MahDi -CSTE 10th , NSTU.
            Date: 20-06-2016
---------------------------------------
**/


#include <stdio.h>
int main(){

int input,hours,minutes,seconds;
scanf("%d",&input);

hours=input/3600;
minutes=input%3600/60;
seconds=input%60;
printf("%d:%d:%d\n",hours,minutes,seconds);
return 0;
}
