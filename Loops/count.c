write a c program input number check count of the digit ? 

54632  :

#include<stdio.h>
int main(){
    int n=546;
    int count=0;
    while(n>0){
        count++;
        n=n/10;
    }
    printf("%d",count);
    return 0;
}
