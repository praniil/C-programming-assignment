#include<stdio.h>
#include<math.h>
int main(){
    //to obtain greatest between two numbers
    int a, b;
    printf("enter any two numbers:");
    scanf("%d %d", &a, &b);
    if(a<b){
        printf("the greatest number is %d",b);
    }
    else{
        printf("the greatest number is %d",a);
    }
}