#include<stdio.h>
int main()
{
    long long t,m,n=0;
    while(scanf("%lld",&t)&&t!=EOF)
    {
        n++;
        printf("%lld. ",n);
        if(t>10000000)
        {
            m=t/10000000;
            t=t%10000000;
        }
        while(m>0)
        {
            {printf("%lld kuti",m/10000000);}
            else if(m>100000)
            {printf("%lld lakh",m/100000);}
            else if(m>1000)
            {printf("%lld hajar",m/1000);}
            else if(m>100)
            {printf("%lld shata",m/100);}
            else
            {printf("%lld",m);}
        }
        while(t>0)
        {
            if(t>10000000)
            {printf("%lld kuti",t/10000000);}
            else if(t>100000)
            {printf("%lld lakh",t/100000);}
            else if(t>1000)
            {printf("%lld hajar",t/1000);}
            else if(t>100)
            {printf("%lld shata",t/100);}
            else
            {printf("%lld",t);}
        }
    }
}
