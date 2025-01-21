#include<stdio.h>
int main(){
    int a;
    printf("Enter your first no:");
    scanf("%d",&a);

    int b;
    printf("Enter your second no:");
    scanf("%d",&b);

    a=a+b;
    b=a-b;
    a=a-b;

    printf("Reverse no is a=%d  and b=%d",a,b);
    
    return 0;
}