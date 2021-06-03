#include <stdio.h>
#include <stdlib.h>
void main ()
{
    int *ptr;
    *ptr=7;
    int k=10;
    printf ("%d",*ptr);
    printf ("%d",k);
    printf ("%d",ptr);
    ptr=&k;
    *ptr=12;
    printf ("%d",k);
    printf ("%d",*ptr);
    printf ("%d",&k);
    printf ("%d",ptr);
}
