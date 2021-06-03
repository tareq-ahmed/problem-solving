#include <stdio.h>
int main()
{
    int i,n,k=1,loc=1,max,data[100];
    printf("enter number of elements :  ");
    scanf("%d",&n);
    printf("enter %d elements : \n",n);
    for (i=1;i<=n;i++)
    {
        scanf("%d",&data[i]);5
    }
    max=data[1];

    while(k=k+1)
    {
      if (k>n)
      {
            printf("location is : %d\n",loc);
            printf("maximum is : %d\n",max);
            break;
      }
      else if (max<data[k])
          {
              loc=k;
              max=data[k];
          }
    }
    return 0;
}
