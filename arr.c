#include<stdio.h>
int main(){
    int ar[5];
    int i;
    for(i=0;i<5;i++){
        printf("\nEnter marks");
        scanf("%d",&ar[i]);
    }
    for(i=1;i<5;i++){
        printf("%d",ar[i]);
    }
    
}