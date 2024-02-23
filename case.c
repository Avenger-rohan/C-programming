#include<stdio.h>

int main(){
    int day;
    printf("enter 1 to 7 day");
     scanf("%d",&day);
     switch(day){
        case 1 : printf("Monday");
                 break;
        case 2 : printf ("Tuesday");
                 break;
        case 3 : printf("Wednesday");
                   break;
        case 4 :  printf("Thursday");
               break;
        case 5 : printf("Friday");
                    break;
        case 6 :  printf("saturday");
                 break;
        case 7 : printf("sunday ");
                   break;
        default :printf("not a valid day");
     }
     return  0;
}