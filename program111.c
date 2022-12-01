
#include<stdio.h>
#include<stdbool.h>
bool Check(char *str, char ch)
{

    while(*str != '\0')
    {
        if(*str == ch)
        {   
            break;
        }
        str ++;
    }
    if(*str == '\0')
    {
        return true;
    }
    else
    {
        return false;
    }
    
}

int main()
{
    char Arr[10];
    bool bRet = false;
    char cValue = '\0';

    printf("Please enter string \n");
    scanf("%[^'\n']s",Arr);
    printf("please enter a character \n");
    scanf(" %c",&cValue);

    bRet = Check(Arr,cValue);
    if(bRet  == true )
    {
        printf("Character is not present in string\n");
    }
    else
    {
        printf("Character is present in string\n");
    }
    return 0;
}
