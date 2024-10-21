#include <stdio.h>
int main()
{
    int n;
    printf("enter the value of n\t");
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i <= n; i++)
    {
        printf("enter the marks of students-%d\t", i + 1);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i <= n; i++)
    {

        printf("%d\t", arr[i]);
    }
}