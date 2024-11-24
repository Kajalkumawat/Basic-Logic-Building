#include<stdio.h>
void even(int num);
int main(){
    int num;
    printf("enter the value of num");
    scanf("%d",&num);
    even(num);
    return 0;
}
void even(int num){
    if(num%2==0){
        printf("even");
    }
    else{
        printf("odd");
    }
}
