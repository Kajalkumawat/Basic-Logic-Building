palindrome number :
#include<stdio.h>
int main(){
    int n=12321;
    int temp=n;
    int rem,sum=0;
    while(n>0){
        rem=n%10;
        sum=sum*10+rem;//12321 
        n=n/10;
    }//n =0 
   if(temp==sum){
       printf("pallindrome");
   }
   else{
       printf("not pallindrome");
   }
    return 0;
}
