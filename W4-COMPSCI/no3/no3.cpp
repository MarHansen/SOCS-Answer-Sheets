#include<stdio.h>
#include<string.h>

struct data{
    char S[31];
};



int main(){
    int T;
    FILE *fp = fopen("./testdata.in", "r");
    fscanf(fp, "%d", &T);
    for(int x=0;x<T;x++){
        int N;
        int temp = 0;
        fscanf(fp, "%d", &N);
        struct data test[N];
        int i=0;
        for(i=0;i<N;i++){
            fscanf(fp, "%s", test[i].S);
        }
        char nyari[31];
        fscanf(fp, "%s", nyari);

        printf("Case #%d: ", x+1);
        for(int j=0;j<i+1;j++){
            char*ptr = strstr(test[j].S, nyari);
            if(temp == i){
                printf("Not Found\n");
            }
            else if(ptr != NULL){
                printf("%d\n", j+1);
                break;
            }
            else{
                temp++;
            }

        }


    }
    return 0;
}