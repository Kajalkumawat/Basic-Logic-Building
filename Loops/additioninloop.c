1 --- 5 addition 
1 +2+3+4+5 =15 

ans :15 

#include<stdio.h>
int main(){
   int a=1;
   int sum=0;
   while(a<=5){
       sum=sum+a;
       a++;
   }
   printf("%d",sum);
    return 0;
}
