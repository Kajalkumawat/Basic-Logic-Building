// three number maximum : 
// a b c input : 
// 	check which one is maximum 

#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter the value of a and b and c");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c){
        printf("a is max");
    }
    else if(b>a && b>c){
        printf("b is max");
    }
    else{
        printf("c is max");
    }
    return 0;
}