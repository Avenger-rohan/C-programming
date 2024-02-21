#include<stdio.h>
 
 int main(){
    int age;
    printf("enter age");
    scanf("%d",&age);
    if(age>20){
        printf("Adult");
        }
    else if(age>13 && age<20){
        printf("not adult");
        
    }
    else{
        printf(" child");
    }
    return 0;
 }