#include <stdio.h>
#include <stdlib.h>
struct list{int row,data,coloumn;
             struct list *down,*next;};
             typedef struct list node;
             void main ()
             {
                 node *head;
                 head =(node*)malloc (sizeof(node));
                 scanf ("%d",&head->row);
                 scanf ("%d",&head->coloumn);
                 scanf ("%d",&head->data);
                 printf ("%d",head->data);
             }
