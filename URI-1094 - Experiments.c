/**
     Bismillahir Rahmanir Rahim.
--------------------------------------
      S M MahDi -CSTE 10th , NSTU.
            Date: 19-06-2016
---------------------------------------
**/

#include<stdio.h>
int main(){

    char ch;
    int i,n,x;
    float c,r,s;
    int t_c=0,t_r=0,t_s=0,sum=0;

    scanf("%d",&n);

    for(i=1;i<=n;i++){
        scanf("%d %c",&x,&ch);
        sum=sum+x;

        if(ch=='C')
            t_c+=x;
        else if(ch=='R')
            t_r+=x;
        else if(ch=='S')
            t_s+=x;
    }

    c=(float)t_c/(float)sum*100.00;
    r=(float)t_r/(float)sum*100.00;
    s=(float)t_s/(float)sum*100.00;

    printf("Total: %d cobaias\nTotal de coelhos: %d\nTotal de ratos: %d\nTotal de sapos: %d\nPercentual de coelhos: %.2f %c\nPercentual de ratos: %.2f %c\nPercentual de sapos: %.2f %c\n",sum,t_c,t_r,t_s,c,'%',r,'%',s,'%');
    return 0;
}
