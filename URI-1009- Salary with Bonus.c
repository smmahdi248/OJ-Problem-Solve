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
char employee;
double salary,sold,total;
scanf("%s %lf %lf",&employee,&salary,&sold);
total=salary+(sold*15)/100;
printf("TOTAL = R$ %.2f\n",total);
return 0;
}
