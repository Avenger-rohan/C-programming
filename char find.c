#include <stdio.h>
int main()
{
    // char s[5] = {'a', 'e', 'i', 'o', 'u'};
    // char a[6] = {'m', 'o', 'h', 'i', 't', 'a'};
    //    char a[20];
    char a[8]="&,*,$,*";
    // printf("enter string");
    // scanf("%d",a);
    int repeat = 0;
    for (int i = 0; a[i]!='\0'; i++)
    {
        if (a[i] == '*')
            repeat++;
            // repeat=repeat+1;
    }
    printf(" no of special charter %d", repeat);
}