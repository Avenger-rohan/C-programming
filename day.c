#include<stdio.h>

int main(){
    char day;
    printf("enter 1 to 7 day");
     scanf("%c",&day);
     switch(day){
        case 'M' : printf("Monday");
                 break;
        case  'T' : printf ("Tuesday");
                 break;
        case 'W' : printf("Wednesday");
                   break;
        case 't':  printf("Thursday");
               break;
        case 'F' : printf("Friday");
                    break;
        case 's':  printf("saturday");
                 break;
        case 'S' : printf("sunday ");
                   break;
        default :printf("not a valid day");
     }
     return  0;
}