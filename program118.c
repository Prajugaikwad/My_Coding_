
// string to upper case and the lower case letters to upper case conversion
#include<stdio.h>
void strtoggleX(char *str)
{
    while(*str != '\0')
    {
       if((*str >= 'a') && (*str <= 'z'))
       {
         *str = *str - 32 ; 
       }
       else if((*str >= 'A') && (*str <= 'Z'))
       {
        *str = *str + 32 ; 
       }
        str++;
    }
   
}
int main()
{
    char Arr[20];

    printf("Please enter a string: \n");
    scanf("%[^'\n']s",Arr);

    strtoggleX(Arr); // strlwx(100);

    printf("Toggled string is: %s\n",Arr);

    return 0;
}