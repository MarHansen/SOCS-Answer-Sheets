#include<stdio.h>


int main(){
    int T;
    scanf("%d", &T);
    for(int x=0;x<T;x++){
        int N;
        int K;
        int count=0;
        scanf("%d %d", &N, &K);
        int A[N];
        for(int i=0;i<N;i++){
            scanf("%d", &A[i]);
        }
        for(int i=0;i<N;i++){
            if(A[i] == K || A[i] > K){
                count++;
            }
        }
        printf("Case #%d: %d\n", x+1, count);

    }

    return 0;
}