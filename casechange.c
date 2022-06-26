#include<stdio.h>
int main(){
    char a ;
    printf("input a character :");
    scanf("%c", &a);
    if(a>67 && a<95){
        a= a + 32 ;
        printf("the lower case is :%c", a);
    }
    else{
        a= a-32 ;
        printf("the upper case is :%c", a);
    }
return 0;
}