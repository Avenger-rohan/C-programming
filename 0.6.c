#include<stdio.h>
int main(){
  for(int i=1;i<=10;i++){
    for(int j=1;j<=3;j++){
      if(i%2==0){
        continue;
      }
      printf("%d",i*2);
      
      
  }printf("\n");
  }
}
  