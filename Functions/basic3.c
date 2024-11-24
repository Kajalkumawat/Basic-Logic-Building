#include<stdio.h>
void show(int a,int b);//parameter
int main(){
    show(7,8);//argument 
    return 0;
}
void show(int a,int b){
    int c=a+b;
    printf("%d",c);
}
