#include<stdio.h>

struct penjualan{
	char id[9];
	char nama[16];
	long long int harga;
};

int main(){
	int N;
	long long int median;
	scanf("%d", &N);
	struct penjualan no[N];
	for(int i=0;i<N;i++){
		scanf("%s", no[i].id);
		scanf(" %[^\n]", no[i].nama);
		scanf(" %lld", &no[i].harga);
	}
	if(N%2 == 0){
		median = (no[N/2].harga+no[N/2-1].harga)/2;
	}else{
		median = no[N/2].harga;
	}
	for(int i=0;i<N;i++){
		if(no[i].harga>=median){
			printf("%s %s\n", no[i].id, no[i].nama);
		}
	}
	
	return 0;
}
