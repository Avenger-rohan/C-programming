#include <stdio.h>
int main()
{
    int n;
    printf("enter size of array\t");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i <= n; i++)
    {
        printf("enter the marks of students-%d\t", i + 1);
        scanf("%d", &arr[i]);
    }
    int number;
    printf("what you want no\t");
    scanf("%d", &number);
    int found=0;
    for(int i=0;i<=n;i++){

    if (number==arr[i])
    {
       found=1;
       break;
    }
    }if(found)
    {
        printf("%darray mai hai",number);
    }else{

        printf(" this no is not avilable");
    }
    

}