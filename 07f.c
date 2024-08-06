#include <stdio.h>
void japan(){
    printf(" HEY man\n");
    printf("what are you doing\n");
 return;
}
void Australia()
{
    printf(" HEY guys Whatup\n");
    japan();
    return;
}

void india(){
    printf("namaste ji\n ");
    printf("kaise ho aap \n");
    Australia();
    return;
}
int main(){
    india();
    return 0;
}