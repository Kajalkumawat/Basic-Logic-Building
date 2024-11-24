void show(int a );

#include<stdio.h>
void show(int a);//parameter
int main(){
    show(78);//argument 
    return 0;
}
void show(int a){
    printf("%d",a);
}
