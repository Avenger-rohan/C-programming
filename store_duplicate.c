#include <stdio.h>

int main()
{
    int arr[10] = {1, 2, 3, 4, 8, 7, 5, 6, 1, 2};
    int n=2;
    int repeat = 0;
    printf("enter a no to get count");

    for (int i = 0; i <= 9; i++)
    {
        if (n == arr[i])
        {
            repeat=repeat+1;
        }
    }
    printf("%d", repeat);
}