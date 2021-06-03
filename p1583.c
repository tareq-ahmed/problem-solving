#include<stdio.h>
int main ()
{
    int t,i,a,c,m,n,g;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&i);
        m=i;
        g=0;
        while(i--)
            {
                a=i;
                c=0;
            while(a>0)
            {
            n=a%10;
            c=c+n;
            a=a/10;
            }
if(c+i==m){g=i;}
            }
     printf("%d\n",g);
        }
}
