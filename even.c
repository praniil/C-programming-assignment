#include <stdio.h>
int main(){
    int a , rem ;
    printf("enter a number:");
    scanf("%d", &a);
    rem = a % 2 ;
    
    if(rem == 0){
        printf(" %d number is even ", a); // prints here
    }
    else{
        printf("%d is odd number", a);
    }
    return 0;
}
// todo: we have this to do
/*TODO*/