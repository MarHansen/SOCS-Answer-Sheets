#include<stdio.h>

int main(){
    int T;
    scanf("%d", &T);

    for(int i=0;i<T;i++){
        int temp[100000];
        int N;
        scanf("%d", &N);

        int j;
        for(j=0;N>0;j++){
            temp[j]=N%2;
            N=N/2;
        }
        printf("Case #%d: ",i+1);

        for(int x=j-1;x>=0;x--){
            printf("%d", temp[x]);
        }
        puts("");
    }



    return 0;
}