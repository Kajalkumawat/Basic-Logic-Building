sum of number digit : 

#include<stdio.h>
int main(){
    int n=163;
    int sum=0,rem;
    while(n>0){
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
    printf("%d",sum);
    return 0;
}


