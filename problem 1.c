#include<stdio.h>
int main()
{
    int a,b,i,j;
    scanf("%d %d",&a, &b);
   char mat[b][a];
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
               scanf("%c",&mat[j][i]);

        }
    }
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
                printf("%c",mat[j][i]);

        }
        printf ("\n");
    }
}
