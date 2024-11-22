// write a c program input number:
// 	1 :one 
// 	2 :two
// 	otherwise :input is not matched 

#include<stdio.h>
int main(){
    int a;
    printf("enter any number ");
    scanf("%d",&a);
    if(a==1){
        printf("one");
    }
    else if(a==2){
        printf("two");
    }
    else{
        printf("input is not matched");
    }
    return 0;
}