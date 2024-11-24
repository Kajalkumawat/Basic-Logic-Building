#include<stdio.h>
char show1();
float show2();
int main(){
    printf("%c\n",show1());
    printf("%f",show2());
    return 0;
}
char show1(){
    char a='k';
    return a;
}
float show2(){
    float a=875.7;
    return a;
}
