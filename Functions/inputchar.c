e :
	even number function call : 


#include<stdio.h>
void even();
int main(){
    char a;
    printf("enter any single character");
    scanf("%c",&a);
    if(a=='e'){
        even();
    }
    else{
        printf("not");
    }
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
