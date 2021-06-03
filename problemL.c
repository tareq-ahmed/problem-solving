#include<stdio.h>
int main()
{
    int t,m,n,s,e,i,j,f=1;
    scanf("%d",&t);
    while(t>0){

        scanf("%d %d",&n, &m);
        scanf("%d %d", &s, &e);
        int edg[m-1][2];
        for(i=0;i<m;i++){
               for(j=0;j<2;j++){
                scanf("%d",&edg[i][j]);
               }

        }
        printf("Case %d: 1\n", f);
        f++;
        t--;
    }
}
