#include<stdio.h>
int main()
{
    int T;
    int L,R,i,j,count,n,count2;
    scanf("%d",&T);
     n=1;
    while(T--){
      scanf("%d %d",&L,&R);
      count2=0;
      for(i=L;i<=R;i++)
        {
            count=0;
            for(j=1;j<i;j++)
            {
                if(i%j==0)
                    {
                        if(j%2==1){count++;}
                    }
            }
            if(count%2==1)
            count2++;
      }
printf("Case %d: %d\n",n,count2);
       n++;
      }
      return 0;
    }
