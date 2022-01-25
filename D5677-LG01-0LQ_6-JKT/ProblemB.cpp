#include<stdio.h>

int main(){
	int T,N;
	scanf("%d", &T);
	
	for(int i=1;i<=T;i++){
		scanf("%d", &N);
		long int x[N];
		
		for(int j=0;j<N;j++){
			scanf("%ld", &x[j]);
		}
		printf("Case #%d:", i);
		
		for(int k=N-1;k>=0;k--){
			printf(" %ld", x[k]);
		}
		printf("\n");
	}


	return 0;
}
