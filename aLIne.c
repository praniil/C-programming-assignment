#include<stdio.h>
int main(){
    char aLine[50];
    printf("enter a line with spaces:");
    scanf("%5[^\n]", &aLine); // %5 reads only 1st 5 letters if space is there it counts it aswell  
    printf("%s", aLine);
}
