#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
   long long int n,e=0,d=0,c=0,b=0,a;
   scanf("%lld",&n);
   e=n/10000000;
   d=(n%10000000)/100000;
   c=(n%100000)/1000;
   b=(n%1000)/100;
   a=n%100;
   printf("%lld kuti %lld lakh %lld hajar %lld shata %lld",e,d,c,b,a);
   return 0;

}
