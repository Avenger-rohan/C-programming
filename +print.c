#include <stdio.h>
int main()
{

    int row, plus,i, n;
    printf("enter number");
    scanf("%d", &n);
    for (int row = 1; row <=n; row++)
    {

        printf("*");
        for ( plus= 1 ;plus<=row ; plus++)
        
            printf("+");
            printf("\n");
        
        
    }
}