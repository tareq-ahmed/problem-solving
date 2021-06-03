#include<stdio.h>
int main()
{

    int t,i,l,m,q,x,y,temp;
    char ch;
    scanf("%d",&t);
    while(t>0){
            scanf("%d %d",&l, &q);
    for(i=0;i<q;i++){
        scanf("%c %d",&ch,&x);

        if(ch=='C'){
                a[i]=l-x;

            y=l-m;
            if(m>y){
               temp=y;
            y=m;
            m=temp;


            }

        }
            if(ch=='F' && x==1){
                printf("%d\n",m);
            }
            if(ch=='F' && x==2){
                printf("%d\n",y);
            }

    }
        t--;
    }
}
