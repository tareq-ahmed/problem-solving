#include <stdio.h>
void func (int *x,int *y);
void main ()
{
    int a,b,*x,*y;
    *x=10;
    *y=20;
    printf ("before exchange = %d %d",*x,*y);
    func (&a,&b);
    printf ("after calling function = %d %d",a,b);
}
void func (int *x,int *y)
{
int temp;
temp=*x;
*x=*y;
*y=temp;
printf ("%d %d",*x,*y);
}
