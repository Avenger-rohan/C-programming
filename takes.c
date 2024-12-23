#include<stdio.h>
//takes somethimg return somethimng
int add();
int main(){
int x,y;
printf("enter a number");
scanf("%d%d",&x,&y);
 int s=add(x,y);
printf("%d",s);
}
int add(int x,int y){
    int c;
    c=x+y;
    return(c);
}