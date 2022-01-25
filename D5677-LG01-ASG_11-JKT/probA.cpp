#include<stdio.h>


int main(){
    int N;
    long long int Y;
    int tries=0;
    scanf("%d", &N);
    long long int X[N];
    for(int i=0;i<N;i++){
        scanf("%lld", &X[i]);
    }
    scanf("%lld", &Y);

    //proses sorting
    long long int tampung;
    for(int i=0;i<N-1;i++){
        for(int j=0;j<N-1-i;j++){
            if(X[j+1]<X[j]){
                tampung=X[j];
                X[j]=X[j+1];
                X[j+1]=tampung;
            }
        }
    }

    for(int i=0;i<N;i++){
        if(Y>=X[i]){
            Y=Y-X[i];
            tries++;
        }
    }
    printf("%d\n", tries);


    
    return 0;
}