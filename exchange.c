#include <stdio.h>
int main(){
    int a,b,c;
    printf("enter the two numbers:");
    scanf("%d %d",&a ,&b);
    c=a;
    a=b;
    b=c;
    
    printf("the swapped values are a=%d b=%d", a,b);
}