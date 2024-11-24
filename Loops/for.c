for : 
->it is keyword 
->it used run one condition multiple time 

syntax:
for(initialization;condition;increment/decrement)
{

	//code 

}
--------------------------------------------------------
1 2 3 4 5 
starting point :1
ending :5 

#include<stdio.h>
int main(){
    for(int i=1;i<=5;i++){
        
        printf("%d ",i);
    }
    return 0;
}
--------------------------------------------------------
5 4 3 2 1 
#include<stdio.h>
int main(){
   for(int i=5;i>=1;i--){
       printf("%d ",i);
   }
    return 0;
}
--------------------------------------------------------
