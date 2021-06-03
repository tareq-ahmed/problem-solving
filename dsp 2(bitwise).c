#include <stdio.h>
int main ()
{
    unsigned int a=60;
    unsigned int b=13;
    int c=0;
    c=a&b;
    printf ("output of bitwise and :%d\n",c);
    c=a|b;
    printf ("output of bitwise or :%d\n",c);
    c=a^b;
    printf ("output of bitwise xor :%d\n",c);
    c=~a;
    printf ("output of bitwise not :%d\n",c);
    c=a<<2;
    printf ("output of shift left :%d\n",c);
    c=a>>2;
    printf ("output of shift right :%d",c);
}
