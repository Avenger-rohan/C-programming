#include <stdio.h>

int addition()
{
  int a, b, sum;
  printf("Enter Your Two Addition Number\n");
  scanf("%d %d", &a, &b);
  sum = a + b;
  printf("Ans is:%d\n", sum);
}
int subtraction()
{
  int a, b, sum;
  printf("Enter Your Two subtraction no Number\n");
  scanf("%d %d", &a, &b);
  sum = a - b;
  printf("Ans is:%d\n", sum);
}
int multiplication()
{
  int a, b, sum;
  printf("Enter Your Two Multiplication no Number\n");
  scanf("%d %d", &a, &b);
  sum = a * b;
  printf("Ans is:%d\n", sum);
}
int division()
{
  int a, b, sum;
  printf("Enter Your Two Division no Number\n");
  scanf("%d %d", &a, &b);
  sum = a / b;
  printf("Ans is:%d\n", sum);
}

int main()
{
  printf(" Press 1 for Addition\n");
  printf(" Press 2 for subtraction\n");
  printf(" Press 3 for Multiplication\n");
  printf(" Press 4 for Division\n");

  int n;
  scanf("%d", &n);
  switch (n)
  {
  case 1:
    if (n == 1)
    {
      addition();
    }
  case 2:
    if (n == 2)
    {
      subtraction();
    }
  case 3:
    if (n == 3)
    {
      multiplication();
    }
  case 4:
    if (n == 4)
    {
      division();
    }
  }
}