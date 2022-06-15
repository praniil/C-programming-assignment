#include<stdio.h>
#include<math.h>
int main(){
    int a, sum;
    a=1;
    sum=0;
    
    while(a<11){
       
        sum= sum+a;
        a= ++a;

    }
    printf("the sum of first 10 natural numbers is%d",sum);
    


    
}