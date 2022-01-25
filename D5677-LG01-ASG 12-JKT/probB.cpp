#include<stdio.h>
#include<string.h>

struct data{
    char nim[11];
    char nama[21];
};


int main(){
    int N;
    FILE *fp = fopen("./testdata.in", "r");
    fscanf(fp, "%d", &N);
    struct data mahasiswa[N];
    for(int i=0;i<N;i++){
        fscanf(fp, "%s %s", mahasiswa[i].nim, mahasiswa[i].nama);
    }
    fclose(fp);

     for(int i=0;i<N;i++){
            for(int j=0;j<N-1-i;j++){
                    int hasil = strcmp(mahasiswa[j].nim, mahasiswa[j+1].nim);
                    if(hasil > 0){
                        struct data temp = mahasiswa[j];
                        mahasiswa[j] = mahasiswa[j+1];
                        mahasiswa[j+1] = temp;
                    }
            }
        }

    for(int i=0;i<N;i++){
        printf("%s %s\n", mahasiswa[i].nim, mahasiswa[i].nama);
    }

    return 0;
}