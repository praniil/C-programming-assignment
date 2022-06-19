#include<stdio.h>
int main(){
    int num;
    printf("enter a number :");
    scanf("%2d", &num);
    printf("%d is the only 1st two digits of the number", num); //%2d doesnt allow more than 2 digits to print in the output
    return 0;    
}
