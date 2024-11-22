// user input :
// 	e :
// 	number input 
// 	even number check :number is even or odd 

// otherwise :input is invalid

#include<stdio.h>
int main(){
    char a;
    printf("enter any single character ");
    scanf("%c",&a);
    if(a=='e'){
        //even number 
        int num;
        printf("enter any  number ");
        scanf("%d",&num);
        if(num%2==0){
            printf("number is even ");
        }
        else{
            printf("number is odd ");
        }
    }
    else{
        printf("input is not valid ");
    }
    return 0;
}