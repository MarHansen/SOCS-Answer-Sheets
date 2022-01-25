#include<stdio.h>

int main(){
    int T;
    scanf("%d", &T);
    for(int x=0;x<T;x++){
        int N;
        scanf("%d", &N);
        int A[N];
        for(int i=0;i<N;i++){
            scanf("%d", &A[i]);
        }
        
        int tampung;
        for(int i=0;i<N;i++){
            for(int j=0;j<N-1-i;j++){
                if(A[j+1]>A[j]){
                    tampung=A[j];
                    A[j]=A[j+1];
                    A[j+1]=tampung;
                }
            }
        }

        int min = 0;
        
        for(int i=0;i<N-1;i++){
            for(int j=i;j<N;j++){
                int sum = A[i] - A[j+1];
                if(min>sum){
                    min=sum;
                }
            }
        }

        printf("Case #%d: %d\n", x+1, min);
    }

    return 0;
}