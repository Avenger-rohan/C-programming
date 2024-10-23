#include <stdio.h>
int main()
{
    int n;
    printf("enter size of array\t");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter the marks of students-%d\t", i + 1);
        scanf("%d", &arr[i]);
    }
    int number;

    printf("what you want no\t");
    scanf("%d", &number);
    for(int i=0;i<=n-1;i++){

     if (number==arr[i])
        {

            printf("%darray mai hai", i);
               
            break;
        } else if(i==n-1){
            printf(" not found");
 }
 
            
        }
   
       
    }