#include<stdio.h>

int main(){
	int F[31];
	for(int i=0;i<2;i++){
		scanf("%d", &F[i]);
	}
	int K;
	scanf("%d", &K);
	for(int i=2; i<=30;i++){
		F[i]=F[i-1]+F[i-2];
	}
	printf("%d\n", F[K]);
	
	return 0;
}
