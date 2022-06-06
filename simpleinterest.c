#include <stdio.h>
int main()
{
    float principal, time, rate;
    float simpleInterest;
    printf("enter principal , time , rate ");
    scanf("%f %f %f", &principal, &time, &rate);
    simpleInterest = (principal * time * rate)/100;
    printf("the simple interest is: %f", simpleInterest);

}