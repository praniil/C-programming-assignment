#include <stdio.h>
int main()
{
    
    float celcius, farhenit;
    printf("enter the temperature in celcius :");
    scanf("%f", &celcius);
    farhenit = (1.8 * celcius) + 32; // temperature in farhenit
    printf("the temperature in farhenit is %f",farhenit); 
    return 0;


}