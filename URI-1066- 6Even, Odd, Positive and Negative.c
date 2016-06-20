/**
     Bismillahir Rahmanir Rahim.
--------------------------------------
      S M MahDi -CSTE 10th , NSTU.
            Date: 20-06-2016
---------------------------------------
**/

#include <stdio.h>
int main(){

int i, n, even=0, odd=0, positive=0 ,negative=0;
for(i=1;i<6;i++) {

scanf("%d",&n);

if(n>0)
positive=positive+1;

if(n<0)
negative=negative+1;

if(n%2==0)
even=even+1;

if(n%2!=0)
odd=odd+1;
}

printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n",even,odd,positive,negative);

return 0;
}
