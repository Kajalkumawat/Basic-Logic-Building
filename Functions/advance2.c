e :
	even function 
#include<stdio.h>
void even(int num);
int main(){
    char a;
    printf("enter any single character");
    scanf("%c",&a);
    if(a=='e'){
        int num;
    printf("enter the value of num");
    scanf("%d",&num);
    even(num);
    }
    else{
        printf("not");
    }
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


