#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
struct list {
    int data;
    struct list *next;};
    typedef struct list node;
    int main ()
    {
        node *start,*temp,*prev,*value;
        char ans;
        start =NULL;
        do
        {
            fflush(stdout);
            printf ("do you create a node (Y/N)=");
            fflush(stdin);
            ans =toupper(getchar());
            if (ans=='Y')
            {
            if (start==NULL)
            {
                start=(node*)malloc(sizeof(node));
                scanf ("%d",&start->data);
                start->next=NULL;
                prev=start;
            }
            else
            {
            temp=(node*)malloc(sizeof(node));
            scanf ("%d",&temp->data);
            temp->next=NULL;
            prev->next=temp;
            prev=temp;
            }
            }
            }
            while (ans=='Y');
            value=start;
            while (value!=NULL)
            {
                printf ("%d\n",value->data);
                value=value->next;
            }
    }
