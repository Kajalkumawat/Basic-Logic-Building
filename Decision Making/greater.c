write a c program input number and check number is greater 10 or not ? 

#include<stdio.h>
int main(){
    int a;
    printf("enter the value of a ");
    scanf("%d",&a);
    if(a>10){
        //code 
        printf("a is greater than 10 ");
    }
    else{
        printf("a is not greater than 10 ");
    }
    return 0;
}