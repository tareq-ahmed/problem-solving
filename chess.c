#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int T,r1,c1,r2,c2,count;
    scanf("%d",&T);
    while(T>0)
    {
        scanf("%d %d",&r1,&c1);

          for(r2=1;r2<9;r2++)
          {
              for(c2=1;c2<9;c2++)
              {
                  if(sqrt(r1-r2)+sqrt(c1-c2)==5)
            count++;
              }
          }
    }
    }
