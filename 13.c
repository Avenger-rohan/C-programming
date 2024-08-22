#include <stdio.h>
int print();
int print(){
  int a;
  printf("enter two number");
  scanf("%d",&a);
  int b;
   printf("enter two number");
  scanf("%d",&b);
  int sum=a+b;
  printf("Ans is %d",sum);
  return a+b;
}
int main()
{
    print();
    return 0;
}