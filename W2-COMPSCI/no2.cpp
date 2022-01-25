#include<stdio.h>
#include<string.h>

void reverse(int strlen, char input[1001]){//menghitung char dari belakang
    if(strlen>=0){//selama index belum menyentuh dibawah 0(karena gamungkin index 0)
        printf("%c", input[strlen]);//dia akan selalu print
        reverse(strlen - 1, input);//dan jika kondisi masi blm dibawah 0 
    }else{//klo misalnya kondisinya dah tidak mememenuhi/selesai dia bakal print new line untuk next case
        printf("\n");
    }

}

int main(){
    int N;
    scanf("%d", &N);

    for(int i=0;i<N;i++){
        char input[100];
        scanf("%s", input);
        int temp = strlen(input);
        printf("Case #%d: ", i+1);
        reverse(temp - 1 , input);//temp-1 karena jumlah index itu dari 0-3 sedangkan untuk strlen hanya menghitung banyak karakter
    }


    return 0;
}