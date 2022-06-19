#include<stdio.h>
int main(){
    char a, c;
    printf("enter a character in lower case:");
    scanf("%c",&a);
    c = a-32;
    printf("the character in upper case is %c",c); // using ASCII code
    return 0;
}