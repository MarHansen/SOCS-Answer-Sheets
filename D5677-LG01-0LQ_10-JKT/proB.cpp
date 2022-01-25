#include<stdio.h>

struct data{
	char nama[101];
	char nim[11];
	int umur;
	char kodePos[7];
	char tempatLahir[101];
	char tanggalLahir[101];
	char almater[101];
	int saudara;
	int tinggi;
	char rekening[10];
};

int main(){
	int N;
	scanf("%d", &N);
	struct data kasus[N];
	
	for(int i=0;i<N;i++){
		scanf("%s", kasus[i].nama);
		scanf("%s", kasus[i].nim);
		scanf("%d", &kasus[i].umur);
		scanf("%s", kasus[i].kodePos);
		scanf("%s", kasus[i].tempatLahir);
		scanf("%s", kasus[i].tanggalLahir);
		
	}
	
	
	return 0;
}
