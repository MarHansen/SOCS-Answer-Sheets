#include<stdio.h>

int main(){
    int X;
    scanf("%d", &X);
    if(X%2 == 0){
        printf("%d is even number\n", X);
    }else{
        printf("%d is odd number\n", X);
    }



    return 0;
}