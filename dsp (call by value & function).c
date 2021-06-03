#include <stdio.h>
void func (int x,int *y);
void main ()
{
int a,b;
a=10;
b=20;
printf ("value before calling function : %d %d",a,b);
func (a,&b);
printf ("values after calling function : %d %d",a,b);
}
void func (int x,int *y)
{
x=x+10;
*y=*y+20;
printf ("\n%d %d\n",x,*y);
}
