#include <stdio.h>
int main()
{
  int n;
  printf("enter row");
  scanf("%d",&n); 
  int m;
  printf("enter coloumn");
  scanf("%d",&m);
   for(int i=1;i<=n;i++){
     
     for(int j=1;j<=m;j++){
       printf("*");
     }printf("\n");
   }
}

