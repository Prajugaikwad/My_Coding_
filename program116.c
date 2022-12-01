
// string to lower case
#include<stdio.h>
void strlwrX(char *str)
{
    while(*str != '\0')
    {
       if((*str >= 'A') && (*str <= 'Z'))
       {
         *str = *str + 32 ; // capital asel tr lower honar
       }
        str++;
    }
   
}
int main()
{
    char Arr[20];

    printf("Please enter a string: \n");
    scanf("%[^'\n']s",Arr);

    strlwrX(Arr); // strlwx(100);

    printf("String after conversion is: %s\n",Arr);

    return 0;
}