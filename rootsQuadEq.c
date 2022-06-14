#include<stdio.h>
#include<math.h>
#include<conio.h>
void main(){

    float a, b, c, x1, x2;
    printf("enter the value of a, b and c in the equation ax2+bx+c=0:");
    scanf("%f %f %f", &a,&b, &c);
    x1=(-b+ sqrt((pow(b,2))-4*a*c))/ (2*a);
    x2=(-b- sqrt((pow(b,2))-4*a*c))/ (2*a);
    printf("the roots of the equation are %f %f", x1, x2);
}
