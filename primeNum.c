#include<stdio.h>
int main(){
    int i, n1, n2, r1, r2;
    printf("enter two numbers:");
    scanf("%d %d", &n1, &n2);

    for(i=n1+1; i<n2; ++i){
        r1= i % i && i % 1;
       
        if(r1==0){
            printf("%d", i);
        }
    }
    return 0;
}