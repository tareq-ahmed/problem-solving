#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int n,i;
    scanf("%d",&n);
    int a[n],r[n-1];
    for(i=0;i<n;i++)
        {
        scanf("%d",&a[i]);
        }

    for(i=0;i<n-1;i++)
        {
        r[i]=abs(a[i]-a[i+1]);
        }
        i=0;
    for(i<n-1)
    {
        if(r[i]-r[i+1]=1)
        {
            i++;
        }
        else
        {
            printf("not jolly");
        }
    }
}
