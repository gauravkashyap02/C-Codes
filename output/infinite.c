#include<stdio.h>

int main(){
    int num;
    
    while (1)
    {
       printf("Enter a number\n");
       scanf("%d",&num);
       if (num<0)
       {
        printf("You entered a negative value BYE");
        break;
       }
        
    }
    
    return 0;
}