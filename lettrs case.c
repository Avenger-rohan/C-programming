#include<stdio.h.>
int main(){
    char s[5]="rohan";
    int islower=1;
    for(int i=0;s[i]!='\0';i++){
         if(!islower(s[i])){ 
            islower=0;
            break;
         }
    }
    if(islower){
        printf(" all characte are big");

    }
    else{
        printf(" all are small");
    }
    return 0;

}
