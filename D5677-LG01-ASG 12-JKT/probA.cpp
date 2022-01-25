#include<stdio.h>
#include<string.h>

struct mahasiswa{
    char nama[51];
    int N;    
};


int main(){
    int T;
    scanf("%d", &T);
    for(int x=0;x<T;x++){
        int N;
        scanf("%d", &N);
        struct mahasiswa data[N];
        for(int i=0;i<N;i++){
            scanf("%[^#]#%d", data[i].nama, &data[i].N);
        }
    
        for(int i=0;i<N;i++){
            for(int j=0;j<N-1-i;j++){
                if(data[j+1].N<data[j].N){
                    struct mahasiswa temp = data[j];
                    data[j] = data[j+1];
                    data[j+1] = temp;
                }
            }
        }
        
        
        for(int i=0;i<N;i++){
            for(int j=0;j<N-1-i;j++){
                if(data[j].N==data[j+1].N){
                    int hasil = strcmp(data[j].nama, data[j+1].nama);
                    if(hasil > 0){
                        struct mahasiswa temp = data[j];
                        data[j] = data[j+1];
                        data[j+1] = temp;
                    }
                }
                
            }
        }

        printf("Case #%d:", x+1);
        for(int i=0;i<N;i++){
            printf("%s - %d", data[i].nama, data[i].N);
        }
        printf("\n");

    }

    return 0;
}