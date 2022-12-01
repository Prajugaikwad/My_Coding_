//dATA STRUCTURE MY FAVOURITE.....
#include<stdio.h>
#include<stdlib.h>
#pragma pack(1)
struct node
{
    int data;
    struct  node *next;
};

typedef struct node NODE;
typedef struct node * PNODE; //P : pointer
typedef struct node ** PNNODE;

int main()
{
    //struct node  * = PNODE
  PNODE newn = (PNODE)malloc(sizeof(NODE));

  newn->data = 11;
  newn->next = NULL;

  printf("%d\n",newn->data);
  printf("Size of structure is %d\n",sizeof(NODE));

  return 0;
}
// 64 bit platform var 8 byte yete 

