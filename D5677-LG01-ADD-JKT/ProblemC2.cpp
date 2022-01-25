#include<stdio.h>

int main(){
	int N;
	int a, b; 
	scanf("%d", &N);
	int C[N];
	for(int i=1;i<=N;i++){
		scanf("%d", &C[i]);
	}
	int Q;
	scanf("%d", &Q);
	for(int j=1;j<=Q;j++){
		scanf("%d %d", &a, &b);
		C[a]+=C[b];
		printf("Case #%d:", j);
		printf(" %d", C[a]);
		
		printf("\n");
	}
	

	return 0;
}
