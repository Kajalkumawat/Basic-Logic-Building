#include<stdio.h>
char vowel();
int main(){
    printf("%c",vowel());
    return 0;
}
char vowel(){
    char a;
    printf("enter any single character ");
    scanf("%c",&a);
    if(a=='a' || a=='e' || a=='o' || a=='i'  || a=='u'){
        printf("vowel");
    }
    else{
        printf("consoant");
    }
    return a;
}
