#include<stdio.h>
int main(){

    int a;
    printf("Enter your first no:");
    scanf("%d",&a);

    int b;
    printf("Enter your second no:");
    scanf("%d",&b);

    int c;
    printf("Enter your third no:");
    scanf("%d",&c);

    int max;

    max=(a>b) ? (a>c? a:c) : (b>c? b:c);
    printf("Max is %d",max);

    return 0;
}