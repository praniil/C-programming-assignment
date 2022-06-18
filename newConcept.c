#include<stdio.h>

int main(){
    char text[50];
    printf("enter a text :");
    scanf("%[^\n]", &text);
    printf("%s\n", text);
    printf("%8s is the only first 8 characters input by the user\n", text);
    printf("%13.8s\n", text); // 1st 5 blanks and rest 8 characters are displayed
    printf("%-13.8s\n", text) ; // 13 blank spaces are created 1st and the 8 characters are filled from left and rest 5 are the blanks spaces
    return 0;

}