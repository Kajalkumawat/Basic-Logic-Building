write a c program input character :
	a :
		1--- 5 number print 

	b :
		5 --1 even number 

	otherwise input character :input is not matched 

#include<stdio.h>
int main(){
    char a;
    printf("enter the value of a ");
    scanf("%c",&a);
    if(a=='a'){
        int i=1;
        while(i<=5){
            printf("%d ",i);
            i++;
        }
    }
    else if(a=='b'){
        //even number 
        int num=5;
        while(num>=1){
            if(num%2==0){
                printf("%d ",num);
            }
            num--;
        }
    }
    else{
        printf("input is not matched");
    }
    return 0;
}


