// write a c program input number and check number is divisible by 2 and 3 both values ? 

#include<stdio.h>
int main(){
    int n;
    printf("enter the value of n ");
    scanf("%d",&n);
    if(n%2==0 && n%3==0){
        printf("number is divisible");
    }
    else{
        printf("not ");
    }
    return 0;
}