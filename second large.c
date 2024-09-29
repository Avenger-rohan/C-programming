
#include <stdio.h>

int main()
{

    int arr[6] = {2, 7, 6 ,5, 8,1};
    int max = 0;
    int second_max=0;
    for (int i = 0; i <= 6; i++)
    {
        if (arr[i] > max)
        {
           second_max=max;
            max = arr[i];
        }
    }



    printf("%d", second_max);
   

    //  printf("%d", );/




    }