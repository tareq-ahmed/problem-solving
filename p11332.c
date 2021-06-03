#include <stdio.h>

int main()
{
    int t=0;
    long long int n;

  while(scanf("%lld",&n)==1&&n!=0)
    {
        while(1){

                while(n!=0){
                        t=t+(n%10);
                        n=n/10;
                }
                if(t/10==0)
                break;
                else{
                    n=t;
                    t=0;
                }
        }

        printf("%d\n",t);
}
}
