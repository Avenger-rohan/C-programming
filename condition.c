#include <stdio.h>
#include <stdlib.h>
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
int alreadyLogin = 0;
int password = 1;
int main()
{

    if (alreadyLogin == 0)
    {
        printf("login password\n");
        scanf("%d", &password);
    }
    if (password == 1234)
    {
        alreadyLogin = 1;
        printf(" Press 1 for Addition\n");
        printf(" Press 2 for subtraction\n");
        printf(" Press 3 for Multiplication\n");
        printf(" Press 4 for Division\n");
        printf(" Press 5 for exit\n");
        int n;
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            addition();
            main();
            break;
        case 2:
            subtraction();
            main();
            break;
        case 3:
            multiplication();
            main();
            break;
        case 4:
            division();
            main();
            break;
        case 5:
            exit(0);
        default:
            printf(" wrong Alphabhet");
        }
    }
    else
    {
        printf("wrong password\n");
        main();
    }
}

// // #include<stdio.h>

// //  int main(){
// //     int age;
// //     printf("enter age");
// //     scanf("%d",&age);
// //     if(age==20){
// //         printf("Adult");
// //         }
// //         else if (age>20){
// //                 printf("young");
// //             }
// //     else{
// //         printf("Not Adult");

// //     }
// //     return 0;
// //         }
