// write a c program input age is greater than 18 and 
// 				enter weight greater than 50 : 
#include<stdio.h>
int main(){
    int age;
    printf("enter age ");
    scanf("%d",&age);
    if(age>=18){
        //weight 
        int weight;
        printf("enter the weight ");
        scanf("%d",&weight);
        if(weight>=50){
            printf("valid");
        }
    }
    return 0;
}