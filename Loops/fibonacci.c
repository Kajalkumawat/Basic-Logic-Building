Fibonacci series : 
#include<stdio.h>
int main(){
    int n1=0,n2=1,n3;
    printf("%d %d ",n1,n2);
    int n=5;
    for(int i=1;i<=n;i++){
        n3=n1+n2;
        printf("%d ",n3);
        n1=n2;
        n2=n3;
    }
    return 0;
}