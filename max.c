#include<stdio.h>
int main(){
  int n,i,count=0;
  printf("enter your number:");
  scanf("%d",&n);
  for(i=2;i!=n ;i++){
   if(n%i==0){
    count++;
   }
 }
 if(count==0){
   printf("prime");
 }else{
  printf("composite");
 }
  }