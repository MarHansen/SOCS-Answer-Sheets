#include<stdio.h>

int main(){
	int T,N;
	scanf("%d", &T);
	
	for(int i=1;i<=T;i++){
		scanf("%d", &N);
		long int x[N][N];
		long int y[N];
		for(int j=0;j<N;j++){
			for(int k=0;k<N;k++){
				scanf("%ld", &x[j][k]);
			}
			
		}
		for(int j=0;j<N;j++){
			y[j]=0;
			for(int k=0;k<N;k++){
				y[j]+=x[k][j];
			}
			
		}
		
		
		printf("Case #%d:", i);
		
		for(int j=0;j<N;j++){
			printf(" %ld", y[j]);
		}
		printf("\n");
	}
	
	
	
	return 0;
}
