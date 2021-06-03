#include <stdio.h>
void main()
{
    int a[5];
    int i,sum=0;
    for (i=0;i<5;i++)
    {
        printf ("enter value %d:=",i+1);
        scanf ("%d",&a[i]);
        sum=sum+a[i];
    }
    printf ("%d",sum);
}
