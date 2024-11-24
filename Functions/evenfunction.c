#include<stdio.h>
void even();
int main(){
    even();
    return 0;
}
void even(){
    int num;
    printf("enter the value of num");
    scanf("%d",&num);
    if(num%2==0){
        printf("EVEN NUMBER ");
    }
    else{
        printf("odd number ");
    }
}

