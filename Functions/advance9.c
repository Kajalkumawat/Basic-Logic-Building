#include<stdio.h>
int even(int num);
int main(){
    int a;
    printf("enter number ");
    scanf("%d",&a);
    even(a);
    return 0;
}
int even(int num){
    if(num%2==0){
        printf("even number");
    }
    else{
        printf("odd number ");
    }
    return num;
}
