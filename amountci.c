#include<stdio.h>
#include<math.h>
void main(){
    float amount, principal, numberOfTimesInterestAppliedPerTime, rate, time;
    printf("enter principal, numberOfTimesInterestAppliedPerTime, rate, time respectively:");
    scanf("%f %f %f %f", &principal, &numberOfTimesInterestAppliedPerTime, &rate, &time);
    amount= principal * (pow(1 + (rate/numberOfTimesInterestAppliedPerTime),(numberOfTimesInterestAppliedPerTime * time)));
    printf("the required amount is:%f",amount);
       
}