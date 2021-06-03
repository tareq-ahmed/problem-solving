#include <stdio.h>
int main ()
{
    int t,i,n,j,s,r;
    while (scanf ("%d",&t)==1)
    for (i=1;i<=t;i++)
    {
        while (scanf ("%d",&n)==1)
        {
        for (j=1;j<=n;j++)
        {
            scanf ("%d",&s);
            if (s>r)
                r=s;
        }
        printf ("case %d: %d",i,r);
        }
    }
}
