
#include <stdio.h>
#include <string.h>

int main() {
    char str1[20] = "hello";
    char str2[] = " world";
    
    strcat(str1, str2);  // str1 ke end me str2 ko add kar deta hai.
    printf("Concatenated string: %s\n", str1);
    
    return 0;
}
