#include <stdio.h>
int main()
{
    int n;
    printf("enter your no");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        printf("what is your name");
        break;
    case 2:
        printf("what is your ph no");
        break;
    case 4:
        printf("jrvcr");
        break;
    case "rohan":
        printf("enter adress");
        break;
    
    default:
        printf("wrong alphabhet");
        
    }
}