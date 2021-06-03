#include <stdio.h>
int main()
{
    int n,t,b,i,u[100], v[100];
     scanf("%d",&t);
     b=1;
    while(t--){
      scanf("%d",&n);
      for(i=1; i<=n-1; i++)
      {
          scanf("%d %d",&u[i],&v[i]);
      }
       printf("Case %d:\n",b);
       b++;

       for(i=1; i<=n-1; i++)
      {
          {printf("%d %d\n",u[i],v[i]);}
      }
        }
        return 0;
}
