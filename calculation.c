#include<stdio.h>
#include<math.h>
int main(){
    int x, a, b, c, y1, y2;
    printf("enter the values of x, a, b, c");
    scanf("%d %d %d %d", &x, &a, &b, &c);
    y1= pow(x,5)+ 10*pow(x,4)+ 8*pow(x,3)+ 4*x +2;
    y2= (a*x + b)/c + a*pow(x, 3) - 2*b;
    printf("%d, %d are the values of y1 and y2 respectively.",y1, y2);
    return 0;
}