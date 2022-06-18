#include<stdio.h>
#include<math.h>
int main(){
    int num, length, arm, rem, sum, a;
    sum= 0;
    
    printf("enter a number:");
    scanf("%d", &num);
    a = num;
    printf("%d\n", a);
    int numberPlaceholder = a;
    length = 0;
    sum = 0;
    while(num!=0){
        rem= num % 10;
        printf("%d \n", length);
        length++;
        num= num/ 10;
        printf("%d \n", num);

    }
    while (a > 0){
                printf("len %d \n", length);

        rem= a % 10;
        printf("rem %d \n", rem);
        arm= pow(rem, length);
        printf("arm %d \n", arm);
        sum= sum + arm;
        printf("%d \n", sum);
        a= a / 10;
        printf("%d \n", a);
    }
    if(numberPlaceholder == sum){ 
        printf("the number is a armstrong number");
    }
    else{
        printf("the number is not a armstrong number");
    }
    return 0;


}