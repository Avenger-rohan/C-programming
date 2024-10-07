
#include <stdio.h>

int main() {
    int large=0;
    int second_large=0;
    int arr[5]={1,4,2,5,7};  
for(int i = 0; i<=4; i++) {
     if(arr[i]>large){
        second_large=large;
        large=arr[i];
        
     }
  }

//  printf("%d",large);
 printf("%d",second_large);

}