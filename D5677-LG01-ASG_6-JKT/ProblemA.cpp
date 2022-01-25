#include<stdio.h>

int main(){
	int N;
	int a, b; 
	scanf("%d", &N);
	long int C[N];
	for(int i=1;i<=N;i++){
		scanf("%ld", &C[i]);
	}
	int Q;
	scanf("%d", &Q);
	for(int j=1;j<=Q;j++){
		scanf("%d %d", &a, &b);
		C[a]=b;
		printf("Case #%d:", j);
		for(int k=1;k<=N;k++){
			printf(" %ld", C[k]);
		}
		printf("\n");
	}
	

	return 0;
}
