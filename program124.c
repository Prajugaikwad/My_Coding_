//reverse string

#include<stdio.h>
void strrevX(char *str)
{
   char *start = str;
   char *end = str;
   char temp = '\0';
   //n
   while(*end != '\0')
   {
      end++;
   }
   end--;

//(n/2) ardhach firla
   while(start < end)
   {
    temp = *start;
    *start = *end;
    *end = temp;

    start++;
    end--;

   }
}

// so time complexity is(n+(n/2))
int main()
{
    char Arr[20];

    printf("please enter string: ");
    scanf("%[^'\n']s",Arr);

    strrevX(Arr);

    printf("Reversed string is: %s\n",Arr);

    return 0;
}