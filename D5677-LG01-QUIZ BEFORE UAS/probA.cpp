#include<stdio.h>

int equation(int M, int N){
    if(M == 0){
        return 1;
    }
    if(N == 0){
        return 1;
    }return equation(M-1, N-1)+equation(M-1, N)+equation(M, N-1);
}



int main(){
    int M;
    int N;
    scanf("%d %d", &M, &N);
    int hasil = equation(M, N);
    printf("%d\n", hasil);


    return 0;
}