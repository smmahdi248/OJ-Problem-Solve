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
    int num,hour;
    float per_hour,salary;

    while(scanf("%d %d %f",&num,&hour,&per_hour)==3)
    {
        salary=hour*per_hour;
        printf("NUMBER = %d\nSALARY = U$ %.2f\n",num,salary);

    }

}
