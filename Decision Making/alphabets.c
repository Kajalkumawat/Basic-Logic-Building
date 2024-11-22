// write a c program input character :
// 	a :apple 
// 	b :ball
// 	otherwise :input is not matched 
#include<stdio.h>
int main(){
    char a;
    printf("enter any single character ");
    scanf("%c",&a);
    if(a=='a'){
        printf("apple");
    }
    else if(a=='b'){
        printf("ball");
    }
    else{
        printf("input is not matched ");
    }
    return 0;
}