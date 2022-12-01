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
typedef struct node * PNODE; 
typedef struct node ** PNNODE;
void InsertFirst(PNODE First , int No)
{
   //step 1 -> allocate the memory for new node
   PNODE newn = (PNODE)malloc(sizeof(NODE));
   newn->data = No;
   newn->next = NULL;

   // step 2-> check linked list is empty or not
   if(*First == NULL)
   {
      *First = newn;
   }
   else
   {
    newn->next = *First;
    *First = newn;
   }

}
void Display(PNODE First)
{
  while(First != NULL)
  {

    printf("%d\t",First->data);
    First = First -> next;
    
  }
}
int main()
{
  PNODE newn = (PNODE)malloc(sizeof(NODE));

  newn->data = 11;
  newn->next = NULL;

  printf("%d\n",newn->data);
  printf("Size of structure is %d\n",sizeof(NODE));

  return 0;
}

