  *
 **
***
#include<stdio.h>
int main(){
    for(int i=1;i<=3;i++){
        //space 
        for(int s=2;s>=i;s--){
            printf(" ");
        }
        //star
        for(int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
