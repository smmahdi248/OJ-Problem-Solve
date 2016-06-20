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

    int st, et, rt;

    scanf("%d %d", &st, &et);

    rt = et - st;

    if (rt < 0)

    {

        rt = 24 + (et - st);

    }

    if (st == et)

    {

        printf("O JOGO DUROU 24 HORA(S)\n");

    }

    else printf("O JOGO DUROU %d HORA(S)\n", rt);



    return 0;

}
