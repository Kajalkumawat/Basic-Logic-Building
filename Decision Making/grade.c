// between the number :
// 	1---5 : this number is present between 1 to 5 
// 	6 -- 10 :this number is present between 6 to 10 
// 	otherwise input is not matched 

// ------------------------------------------------------
#include<stdio.h>
int main(){
    int a;
    printf("enter the value of a ");
    scanf("%d",&a);
    if(a>=1 && a<=5){
        printf("number is present bettween 1 to 5 ");
    }
    else if(a>=6 && a<=10){
        printf("number is present between 6 to 10");
    }
    else{
        printf("invalid");
    }
    return 0;
}