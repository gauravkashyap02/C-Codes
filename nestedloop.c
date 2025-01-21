#include<stdio.h>
int main(){

    int i;
    printf("Enter your first no:");
    scanf("%d",&i);

    int j;
    printf("Enter your second no:");
    scanf("%d",&j);

    int table;

    for(;i<=j;i++){ 
        for(int sp=1;sp<=10;sp++){
            table=i*sp;
            printf("%d * %d = %d\n",i,sp,table);
        }
        printf("\n");
    }



    return 0;
}