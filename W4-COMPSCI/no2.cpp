#include<stdio.h>

struct data{
    int P;
    char A[2];
};


int main(){ 
    int T;
    FILE *fp = fopen("./testdata.in", "r");
    fscanf(fp, "%d", &T);
    for(int x=0;x<T;x++){
        int N;
        fscanf(fp, "%d", &N);
        struct data alfabet[N];
        for(int i=0;i<N;i++){
            fscanf(fp, "%d. %s", &alfabet[i].P, alfabet[i].A);
        }
        // for(int i=0;i<N;i++){
        //     printf("%d. %c\n", alfabet[i].P, alfabet[i].A);
        // } hanya test untuk printf untuk file bisa atau tidak
        
       for(int i=0;i<N;i++){//proses sorting
            for(int j=0;j<N-1-i;j++){
                if(alfabet[j+1].P<alfabet[j].P){
                    struct data temp = alfabet[j];
                    alfabet[j] = alfabet[j+1];
                    alfabet[j+1] = temp;
                }
            }
        }
        printf("Case #%d: ", x+1);
        puts("");
        for(int i=0;i<N;i++){
            printf("%d. %s\n", alfabet[i].P, alfabet[i].A);
        }

    }

    return 0;
}