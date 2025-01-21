#include<stdio.h>
int main(){

    int num;
    printf("Enter your no:");
    scanf("%d",&num);  //1189 ===>  9811

    int rev=0;
    int rem;
    int count=0;

   

    for(;num!=0;num=num/10){
        rem=num%10;
        rev=rev*10+rem;
        count++;
        
    }
    printf("%d",count);


    return 0;
}