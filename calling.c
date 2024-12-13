#include<stdio.h>
int  add(){
    int a,b,c;
    printf("enter the number\n");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("sum is%d",c);
}
int even(){
    int a;
    printf("enter number ");
    scanf("%d",&a);
    if(a%2==0){
        printf("number is even");

    }else{
        printf("number is odd");
    }
}
int main(){
    even();
}