#include<stdio.h>
float show(float a);
char show1(char a);
int main(){
    printf("%f\n",show(6.7));
    printf("%c",show1('j'));
    return 0;
}
float show(float a){
    return a;
}
char show1(char a){
    return a;
}
