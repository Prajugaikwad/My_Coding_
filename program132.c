#include<stdio.h>
#include<stdlib.h>
#pragma pack(1)
struct node
{
    int data ;
    struct node *next;
    struct node *prev;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE First, int no)
{
   PNODE newn = (PNODE)malloc(sizeof(NODE));
   newn ->data = no;
   newn->next = NULL;
   newn ->prev = NULL;
   

   if(*First == NULL)
   {
      *First = newn;
   }
   else
   {
       newn ->next  = *First;
       (*First)->prev = newn ;
       *First = newn;
   }

}
void InsertLast(PPNODE First, int no)
{
   PNODE newn = (PNODE)malloc(sizeof(NODE));
   newn ->data = no;
   newn->next = NULL;
   newn ->prev = NULL;
   PNODE temp =NULL;

   if(*First == NULL)
   {
      *First = newn;
   }
   else
   {
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    temp ->next = newn;
    newn->prev = temp;

   }
}

void Display(PNODE First)
{
    printf("Elements of linked list are: ");
    while(First != NULL)
    {
        printf("|%d|<=>",First->data);
        First = First ->next;

    }
    printf("<=>NULL\n");

}
int Count(PNODE First)
{
    int iCnt =0;
    printf("Elements of linked list are: ");
    while(First != NULL)
    {
        iCnt ++;
        First = First ->next;

    }
    return iCnt;
}
int main()
{
    PNODE Head = NULL;
    int iRet = 0;
   InsertFirst(&Head,51);
   InsertFirst(&Head,21);
   InsertFirst(&Head,151);

   InsertLast(&Head,251);
   InsertLast(&Head,11);
   InsertLast(&Head,551);

    Display(Head);

    iRet = Count(Head);
    printf("Number of elements are: %d\n",iRet);

  
    return 0;
}