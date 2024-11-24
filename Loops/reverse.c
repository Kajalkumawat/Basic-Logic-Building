write a c program input number :
	reverse number :634 
	436 
#include<stdio.h>
int main(){
    int n=634;
    int rem,sum=0;
    while(n>0){
        rem=n%10;
        sum=sum*10+rem;
        n=n/10;
    }
    printf("%d",sum);
    return 0;
}
