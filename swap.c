#include<stdio.h>
int main(){

    char ch;
    printf("Enter your characters:");
    scanf("%c",&ch);

    if(ch>='A' && ch <='Z' || ch>='a' && ch<='z'){
        printf("Alphabets");
    }

    else if(ch>='0' && ch<='9'){
        printf("Digit");
    }

    else{
        printf("Special Character");
    } 

    return 0;
}