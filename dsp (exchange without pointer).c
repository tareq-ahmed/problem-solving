#include <stdio.h>
void func (int x,int y);
void main()
{
int x=10,y=20,a,b;
printf ("before exchange= %d %d",x,y);
func (a,b);
printf ("after calling function= %d %d",a,b);
}
func (int x,int y)
{
int temp;
temp=x;
x=y;
y=temp;
printf ("\n%d %d\n",x,y);
}
