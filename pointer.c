#include <stdio.h>
int main ()
{
    int *ptr;
    int k=7;
    printf ("%d\n",k);
    ptr=&k;
    *ptr=12;
    printf ("%d\n",k);
    printf ("%d\n",*ptr);
    return 0;
}
