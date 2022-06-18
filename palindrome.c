#include<stdio.h>

int main(){
    int num, rem, rev, og;
    rev= 0;
    
    printf("enter a number:");
    scanf("%d", &num);
    og = num;
    while(num > 0){
        rem= num % 10;
        rev= rev * 10 + rem;
        num= num / 10;
    }
    if(og == rev){
        printf("the number %d is a palindrome number", og);
    }
    else{
        printf("the number %d is not a palindrome number", og);
    }
    return 0;

}