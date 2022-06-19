#include<stdio.h>
int main(){
    char text[255];
    printf("enter a text containing numbers:");
    scanf("%[0-9]", &text);
    printf("the numbers from the text is %s", text);
    return 0;

}