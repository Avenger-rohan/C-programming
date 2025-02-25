#include <stdio.h>
#include <conio.h.>
#include <string.h>
int main()
{
    char n[25]="rohan is my best friend";
    char repeat;
    int big=0;
    for(int i=0;n[i]!='\0';i++){
        if(n[i]<big){
            big=n[i];

            repeat++;
        }
    }
    printf("%c",repeat);
    getch();
}
