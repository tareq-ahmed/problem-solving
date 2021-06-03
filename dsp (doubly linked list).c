#include <stdio.h>
#include <stdlib.h>
struct list{int row,data,coloumn;
             struct list *down,*next;};
             typedef struct list node;
             void main ()
             {
                 node *head;
                 head =(node*)malloc (sizeof(node));
                 head->row=2;
                 head->coloumn=3;
                 head->data=15;
                 printf ("%d",head->data);
             }
