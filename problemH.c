#include<stdio.h>
int main()
{
    int t,c,n,i,j;
    scanf("%d",&t);
    while(t>0){
            c=0;
            scanf("%d",&n);
            int ar[n];
    for(i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }

    for(i=0;i<n-2;i++){
            for(j=1;j<n-1;j++){
                    if(ar[i]+ar[j]==ar[j+1]){
            c++;
                }

        }
    }
    printf("%d",c);

        t--;
    }
}
