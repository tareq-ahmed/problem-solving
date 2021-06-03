#include <stdio.h>
int main ()
{
	int t,a,b,c,m,em;
	scanf ("%d",&t);
	while (t--)
        {
		scanf ("%d %d %d", &a, &b, &c);
		m=(a+b)*60;
		em=a*60-m/3;
		if (em<=0)
		printf ("0\n");
		else
		printf ("%d\n", (c*em)/(m/3));
	}
	return 0;
}
