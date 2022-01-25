#include<stdio.h>

int main(){
    int N;
    scanf("%d", &N);
    int Q[N];
    for(int i=0;i<N;i++){
        scanf("%d", &Q[i]);
    }
    long long int A;
    scanf("%lld", &A);
    long long int M;
    for(int i=0;i<A;i++){
        long long int sum=0;
        int j;
        scanf("%lld", &M);
        
        printf("Case #%d: ", i+1);
        for(j=0;j<=N;j++){
            sum+=Q[j];

            if(sum == M){
                printf("%d", j+1);
                break;
            }else if(sum > M){
                printf("%d", j);
                break;
            }else if(sum < M && j == M-1){
                printf("%d", j+1);
            }
            
        }
        puts("");
    }


    return 0;
}