return : int | char | float 

	return keyword used 
	->data store memory does not print 
#include<stdio.h>
int show();
int main(){
    //two way : 
    printf("%d\n",show());
    
    int num=show();
    printf("%d",num);
    return 0;
}
int show(){
    int a=89;
    return a;
}
