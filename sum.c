#include<stdio.h>
#include<math.h>
int main(){
    int i, sum;
    sum=0;
    for(i=1; i<11; ++i){
        
        sum= sum + i;
    }
    printf("the sum of first 10 natural numbers is:%d",sum);
    return 0;
}
