#include <stdio.h>

// int n;
// printf("enter number");
// scanf("%d",&n);

// RELATIONAL OPERATOR
//  printf("num is :%d",2>3);
//  printf("num is :%d",2<3);
//  printf("num is :%d",3>3);
//  printf("num is :%d",3>=3);
//  printf("num is :%d",3==3);

// PRECEDENCE OPERATOR
// printf("num is :%f",3.0*2.0);
// printf("num is :%d",3*3+5/5);

// LOGICAL AND OR NOT USE
// printf("num is :%d",(5>4)&&(4>3));
// printf("num is :%d",(11>4)||(4>3));
// printf("num is :%d",!(11>4)||(4>3));

// FLOAT NUMBER CONVERT IN INTEGER NUMBER
//  int a=(int)1.99999;
//  printf("num is :%d",a);

// CHECK NO IS EVEN ,ODD POSITIVE AND NEGATIVE

// int n;
// printf("enter the number");
// scanf("%d", &n);
// if (n % 2 == 0)
// {
//     printf("no is even\n");
//     printf("positive");
// }

// else
// {
//     printf("no is odd\n");
//     printf("negtive");
// }

// PRINT TABLE 10 DIGIT
// int n;
// printf("enter number :");
// scanf("%d",&n);
// for(int i=1;i<=10;i++){

// printf("%d\n",n*i);
// }

//    3 IS LAST NUMBER

//     int n;
//     printf("enter the number");
//     scanf("%d",&n);
//     for(int i=1;i<=5;i++){
//     if(i==3){
//         break;
//     }

// printf("%d\n",i);

//     }
//     printf("end");

//  USER ENTER ONLY EVEN NUMBER
//     int n;
//     printf("enter the number");
//     scanf("%d",&n);
//     for(;;){
//     if(n%2!=0){
//         break;
//     }
// else{
//   printf("enter the number");
//     scanf("%d",&n);
// }

//     }
// printf("%d\n",n);

// CONTINUE STATEMENT

// for(int i=1;i<=5;i++){
// if(i==3){
//     continue;
// }
// printf("%d\n",i);

// }
// 6 skip
// for(int i=1;i<=10;i++){
// if(i==6){
//     continue;
// }
// printf("%d\n",i);

// }

// print odd numbers
// for(int i=1;i<=50;i++){
// if(i%2!=0){
//     // continue;
// printf("%d\n",i);
// }

// }

//       int n;
//     printf("enter the number");
//     scanf("%d",&n);
//     for(;;){
//     if(n%7==0){
//         break;
//     }
//     printf("%d\n",n);

//   printf("enter the number");
//     scanf("%d",&n);
//     }

//     return 0;
// }
// #include <stdio.h>

// /// @brief
// /// @return
// int main(){
//     int n;
//     printf("Enter the number: ");
//     scanf("%d", &n);

//     for (;;) {
//         if (n % 7 == 0) {
//             break; // If the number is divisible by 7, exit the loop
//         }
//         printf("%d\n", n); // Print the number if it's not divisible by 7
//         printf("Enter another number: ");
//         scanf("%d", &n); // Prompt the user to enter another number
//     }

//     return 0;
// }
// 5=120 factorial
// int n;
// printf("enter no:");
// scanf("%d",&n);
// int fact=1;
// for(int i=1;i<=n;i++){
//     fact=fact*i;

// }
// printf("%d\n",fact);

// reverse of table i--
// int n;
// printf("enter no:");
// scanf("%d",&n);
// for(int i=10;i>=1;i--){
//     printf("%d\n",n*i);
// }

// sum  5 to 50
// int sum=0;
// for(int i=5;i<=50;i++){
//     sum+=i;
// }
//     printf("%d\n",sum);

// for(int i=1;i<=10;i++){
// if(i==3){
//     continue;

// }
// printf("%d",i);
// }

// int n;
// printf(" enter no");
// scanf("%d",&n);
// for(int i=0;i<=100;i++)
//     if(i%2==0){
//         break;
//     printf("%d",i);
//     }

//    int n;
//     printf("enter the number");
//     scanf("%d",&n);
//     for(;;){
//     if(n%2!=0){
//         break;
//     }
// else{
//   printf("enter the number");
//     scanf("%d",&n);
// }

//     }
// printf("%d\n",n);

// int n;
//     printf("enter the number");
//     scanf("%d",&n);
//     for(;;){
//     if(n%1!=0){
//         break;
//     }
// else{
//   printf("enter the number");
//     scanf("%d",&n);
// }

//     }
// void printrohan();
// int main()
// {
//     printrohan();
//     printrohan();
//     printrohan();
//     printrohan();

//     return 0;
// }
// void printrohan()
// {
//     printf("Iam a student\n");
// }

// void printnamaste();
// void printbonjour();

// int main(){
// printf("enter i for indian and f for french");
//    char ch;
// scanf("%c",&ch);
// if(ch=='i'){
//     printf("namaste");

// }else{
//     printf("bonjour");
// }
//     return 0;
// }
// void printnamaste()
// {
//     printf("namaste\n");
// }
// void printbonjour()
// {
//     printf("bonjour\n");
// }

// int sum(int a, int b);

// int main(){
// int a,b;
// printf("enter the no");
// scanf("%d",&a);
// printf("enter the no");
// scanf("%d",&b);
//  int s=sum(a,b);
//  printf("%d sum is",s);
//     return 0;
// }
// int sum(int a, int b){
//     return a+b;

// }

// void printtable(int n);

// int main(){
// int n;
//  printf("enter the no");
// scanf("%d",&n);

// printtable(n);
//     return 0;
// }

// void printtable(int n)
// {
//     for(int i=1;i<=10;i++){

//     printf("%d\n",i*n);
//     if(i==20){
//         continue;
//     }
//     printf("%d",i);
//     }
// }
// int n;
// printf("enter no");
// scanf("%d",&n);
// for(int i=1;i<=10;i++){
//     printf("%d",i*n);
//     if(i==3){
//         continue;
//     }
//     printf("%d",i);
// }

// #include <stdio.h>

// int main() {
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);

//     for(int i = 1; i <= 10; i++) {
//         printf("%d", i * n);
//         if(i == 3) {
//             continue;  // Skip the rest of the loop when i is 3
//         }
//         printf("%d", i);
//     }

//     return 0;
// }#include <stdio.h>

// int main()
// {
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);

//     for(int i = 1; i<=10; i++) {
//         if(i == 1) {
//             continue;
//         }
//         printf("%d ", i * n);
       
//     }
    // for (int i = 1; i <= 5; i++)
    // {
    //     if (i == 3)
    //     {
    //         continue;
    //     }
    //     printf("%d\n", i);

    //     }

//         void printcalculate(float value);//declration
//     int main(){
//         float value=100.0;
//         printcalculate(value);
// return 0;
//     }
//     void printcalculate(float value){
//         value=value+(0.18*value);
//         printf("value is%f \n",value);
//     }

// power
// #include<math.h>
// int main(){

// int n=4;
// printf("%f power is ",pow(n,2));



// pointer 
int main(){



// int age=20;
// int *ptr=&age;
// int _age=*ptr;
// printf("%d",_age);


int age=20;
int *ptr=&age;
// int _age=*ptr;
printf("%p\n",&age);
printf("%u\n",&age);
printf("%u\n",ptr);
printf("%u\n",&ptr);
return 0;

}