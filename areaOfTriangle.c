#include<stdio.h>
#include<math.h>
int main(){
    int a, b, c;
    float s, area;
    printf("enter the sides of triangle:");
    scanf("%d %d %d", &a, &b, &c);
    if( (a+b)>c && (b+c)>a && (a+c)>b ){
        s = (a + b + c)/2;
        area= sqrt(s*(s-a)*(s-b)*(s-c));
        printf("the area of the triangle is : %f", area);
    }
    else{
        printf("the triangle doesnt exist.");
    }
    return 0;
}
