#include<stdio.h>

int main(){
 int n,k,p;
 float sum;
 p = 3;
 scanf("%d %d",&n,&k);
 for(int i = 0; i < 3;i++){
  sum = n * k * p/100;
  
 }
 printf("%.2f\n",sum);
 return 0;
}
