#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,j,n,item,a[5];
printf ("enter n value : \n");
scanf("%d",&n);

    printf ("enter item value : \n");
    scanf ("%d",&item);
    for (j=1;j<=n;j++)
    {
        printf ("enter data : ");
        scanf("%d",&a[j]);
    }

    for (i=1;i<=n;i++)
{
    if (a[i]==item)
    {
        printf("location is %d",i);
    exit (0);
    }
}
if (i>n)
{
    printf("not found");
}
}
