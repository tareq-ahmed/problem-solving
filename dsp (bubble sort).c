#include <stdio.h>
void main()
{
    int n,a[10],i,j,temp,p;
    printf ("welcome to bubble sort\n");
    printf ("enter value of array size =");
    scanf ("%d",&n);
    for (i=1;i<=n;i++)
    {
        printf ("enter array element %d =",i);
        scanf ("%d",&a[i]);
    }
    for (i=1;i<=n-1;i++)
    {
        for (j=1;j<=n-1;j++)
        {
            if (a[j]<a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
        printf ("after sorting the array in descending order is\n");
    for (p=1;p<=n;p++)
    {
        printf ("%d ",a[p]);
    }
    return 0;
}
