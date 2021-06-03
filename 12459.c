#include<stdio.h>
int main()
{
    int a,i,n=0,m=1,result;
    while (scanf("%d",&a)==1)
    {
        for (i=1;i<=a;i++)
    {
        result=n+m;
        n=m;
        m=result;
    }
    printf("%d",result);
}
return 0;
}
