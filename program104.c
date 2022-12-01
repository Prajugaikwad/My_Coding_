
// without using pointer
// accept string and display its length 
#include<stdio.h>
int strlenX(char *str)
{
    int iCnt  = 0, i = 0;
    
    while(str[i] != '\0')
    {
        iCnt ++;
        i ++;
    }
    return iCnt;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Please enter string: ");
    scanf("%[^'\n']s",Arr);

    iRet = strlenX(Arr); // strlenX(100)

    printf("Number of characters in a string are %d\n",iRet);
    return 0;

}