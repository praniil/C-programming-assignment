#include<stdio.h>
#include<math.h>
int main(){
    int num, rem, rev;
    rev=0;
    printf("enter a three digit number :"); 
    scanf("%d", &num);
    while (num > 0){
        rem= num % 10;
        printf("%d\n",rem);                      // \n displays the output in a different line
        rev= rev*10 + rem ;
        num= num / 10;
     }
     printf("the reverse is :%d",rev);          // displays the reverse as well
}