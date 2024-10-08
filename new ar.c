#include<stdio.h>
int main(){
    int arr[8]={1,2,3,8,4,2,6,8};
    int sum=0;
    for(int i=0;i<=7;i++){
        if (arr[i]%2==0){
            sum=sum+arr[i];
        }
    }
    printf("%d",sum);

}
