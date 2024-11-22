//swapwithoutvar.c
#include<stdio.h>
int main(){
    int a=10;
    int b=20;
    printf("the value of a is :%d\n",a);
    printf("the value of b is :%d\n",b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("the swap value of a is :%d\n",a);
    printf("the swap value of b is :%d\n",b);
    return 0;
}
