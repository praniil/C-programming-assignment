#include<stdio.h>
#include<math.h>
int main(){
    int num, length, arm, rem, sum, a;
    sum= 0;
    a= num;
    printf("enter a number:");
    scanf("%d", &num);
    length = 0;
    while(num>0){
        rem= rem % 10;
        length= ++length;
        num= num/ 10;
    }
    while (num>0){
        rem= a % 10;
        arm= pow(rem, length);
        sum= sum + arm;
        a= a / 10;
    }
    if(sum == num){
        printf("the number is a armstrong number");
    }
    else{
        printf("the number is not a armstrong number");
    }
    return 0;


}