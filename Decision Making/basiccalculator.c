// write a c program input character :
// 	a :
// 		two number input 
// 		addition 	

#include<stdio.h>
int main(){
    char a;
    printf("enter any single character ");
    scanf("%c",&a);
    if(a=='a'){
        //two number input 
        int num1,num2,num3;
        printf("enter value of num1 and num2 :");
        scanf("%d %d",&num1,&num2);
        num3=num1+num2;
        printf("%d",num3);
    }
    else{
        printf("input is not matched");
    }
    return 0;
}