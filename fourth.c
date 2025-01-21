#include<stdio.h>

int count=0;

int main(){

    int a;
    int b=5;

    for(a=1;a<=b;a++){
        count++;
        printf("%d\n",count);
    }
     
     printf("%d",count);

   return 0;
}