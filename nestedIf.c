#include<stdio.h>
#include<math.h>
int main(){
    int num, rem, square;
    printf("enter a number:");
    scanf("%d", &num);
    if(num < 25){
        rem = num % 2;
        if(rem==0){
            printf("the number %d is a even number", num);
        }
        if(rem!=0){
            printf("the number %d is a odd number", num);
        }
    }
    else{
        square = pow(num, 2);
        printf("the square of a number is %d", square);
    }
    return 0;

}