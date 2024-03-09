#include<stdio.h>
int main(){
    int n;
    printf("enter no");
    scanf("%d",&n);
    if(n%2==0){
        printf("%dno is even",n);
    }
        else{
           printf("%dno is odd",n);
        }
        return 0;
}       