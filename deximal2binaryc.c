#include <stdio.h>
int main()
{
int decimal,binary;
scanf ("%d",&decimal);
while (decimal>0)
{
binary=decimal%2;
printf ("%d",binary);
decimal=decimal/2;
}
}
