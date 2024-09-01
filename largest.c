#include<stdio.h>
 
 int main(){
    int a,b;
    printf("enter two no");
    scanf("%d%d",&a,&b);
    if(a>b){
        printf("%d",a );
        }
    else if(b>a){
        printf("%d", b);
    
    }
    else if(a==b){
        printf("no are same ");
        }
        
    
    return 0;
 }