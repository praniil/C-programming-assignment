#include <stdio.h>
int main()
{
    float length, breadth, height, volume;
    printf("enter the length breadth and height");
    scanf("%f %f %f", &length, &breadth, &height);
    volume = length * breadth * height;
    printf("the volume of the cuboid is %f", volume);
    return 0;
    
}