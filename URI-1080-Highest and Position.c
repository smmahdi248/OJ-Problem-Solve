/**
     Bismillahir Rahmanir Rahim.
--------------------------------------
      S M MahDi -CSTE 10th , NSTU.
            Date: 19-06-2016
---------------------------------------
**/


#include <stdio.h>
int main()
{
    int x=0,a,input,c,position,highest_num=0;
    for(a=1;a<=100;a++)
    {
        scanf("%d", &input);
        x++;
        if(input>highest_num)
        {
            position=x;
            highest_num=input;
        }
    }
    printf("%d\n",highest_num);
    printf("%d\n",position);
    return 0;
}
