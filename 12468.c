#include <stdio.h>
int main()
{
    int a,b;
    while (scanf ("%d%d",&a,&b)==2&&(a&b)!=-1)
    {
    if (abs(a-b)>50)
    {printf ("%d",abs(100-(a-b)));}
    else
    {printf ("%d",abs(a-b));}
    }
}
