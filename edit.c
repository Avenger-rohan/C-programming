
#include <stdio.h>
int main()
{
    // char s[5] = {'a', 'e', 'i', 'o', 'u'};
    // char a[6] = {'m', 'o', 'h', 'i', 't', 'a'};
        //   int k,n;
        char v='@';
    char a[20]="my name is rohan ";
    // printf("enter string");
    // scanf("%d",a);
    // int repeat = 0;
    for (int i = 0; a[i]!='\0'; i++)
    {
        if (a[i] == ' '){
        a[i]=v;
       
        }
 printf("%c", a[i]);
    }
   
}