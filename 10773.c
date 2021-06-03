#include<stdio.h>
#include<math.h>
int main()
{
 	double d,v,u,r1,r2,angle,s1,t,t1,t2,x;
 	int n,i;
 	while(scanf("%d",&n)==1)
 	{
		for(i=1;i<=n;i++)
		{
		    scanf("%lf%lf%lf",&d,&v,&u);
		if(d==0 || v==0 || u<=v)
				printf("Case %d: can't determine\n",i);
		else
			{
			r1=sqrt(u*u + v*v);
			x=v/u;
			angle= atan(x);
			s1=d/cos(angle);
			t1=s1/r1;

			r2=sqrt(u*u - v*v);
			t2=d/r2;
			if(t1>t2)
		    		 t=t1-t2;
			 else
 			 	 	 t=t2-t1;
			 if(t<0.001)
 			 			printf("Case %d: can't determine\n",i);
 			else
			  printf("Case %d: %.3lf\n",i,t);
			 }

		}
	return 0;
	}
	return 0;
}
