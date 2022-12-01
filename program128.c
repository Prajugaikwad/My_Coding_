#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)
struct node
{
    int data ;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE First, int no)
{
  PNODE newn = (PNODE)malloc(sizeof(NODE));//1 Allocate memory:mulga aala ground var

  newn -> data = no;
  newn->next = NULL;
  
  if(*First == NULL) // if linked list is empty
  {
    *First = newn;
  }
  else // if linked list contains atleast one node
  {

    newn -> next = *First;
    *First = newn;

  }

}

void InsertLast(PPNODE First, int no)
{
  PNODE newn = (PNODE)malloc(sizeof(NODE));//1 Allocate memory:mulga aala ground var
  PNODE temp = *First;
  
  newn -> data = no;
  newn->next = NULL;

  
  if(*First == NULL) // if linked list is empty
  {
    *First = newn;
  }
  else // if linked list contains atleast one node
  {
    while(temp->next != NULL)
    {
       temp = temp -> next;
    }

    temp ->next = newn;
  }

}

void Display(PNODE First)
{
   printf("Elements from the likned list are: \n");

   while(First != NULL)
   {
     printf("| %d |->",First->data);
     First = First -> next;
   }
   printf("NULL \n");
}

int Count(PNODE First)
{
    int iCnt = 0;
   while(First != NULL)
   {
     iCnt++;
     First = First -> next;
   }
   return iCnt;
}

void DeleteFirst(PPNODE First)
{
    PNODE temp = *First;

    if(*First == NULL) // Empty ll
    {
        return ;
    }
    else if((*First) ->next == NULL) //1 node in ll
    {
        free(*First);
        *First = NULL;
    }
    else // more than 1 node in ll
    {
       (*First) = (*First)->next; 
       free(temp);   
    }
}

void DeleteLast(PPNODE First)
{
    
    PNODE  Head = NULL;
    PNODE temp = *First;

    if(*First == NULL) // Empty ll
    {
        return ;
    }
    else if((*First) ->next == NULL) //1 node in ll
    {
        free(*First);
        *First = NULL;
    }
    else // more than 1 node in ll
    {
       while(temp -> next ->next != NULL)
       {
           temp = temp ->next;
       }
       free(temp->next);
       temp ->next = NULL;
    }

}

int main()
{
    // struct node * Head = NULL;
    PNODE Head = NULL;
    int iRet = 0;
    InsertFirst(&Head, 51); //InsertFirst(60,51)
    InsertFirst(&Head, 21); //InsertFirst(60,21)
    InsertFirst(&Head, 11);//InsertFirst(60,11)

    Display(Head);// CALL BY VALUE 

    iRet = Count(Head);
    printf("The number of nodes in  alinked list are: %d\n",iRet);


    InsertLast(&Head,101);
    InsertLast(&Head,111);
    Display(Head);// CALL BY VALUE 

    iRet = Count(Head);
    printf("The number of nodes in  alinked list are: %d\n",iRet);

    Delete(First);


    return 0;

}
// there might be possibility in failure if 
// position is invalid