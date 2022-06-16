#include<stdio.h>
int main(){
    int num, length, rem ;
    length= 0;
    printf("enter a number:");
    scanf("%d", &num);
    while(num>0){
        rem= num % 10;
        length= ++length;
        num= num / 10;
    }
    printf("the length of integer is:%d", length);
}