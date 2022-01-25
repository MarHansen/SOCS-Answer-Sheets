#include<stdio.h>

int main(){
	int T;
	scanf("%d", &T);
	for(int i=0;i<T;i++){
		int N, M ,O;
		int tumbal;
		scanf("%d %d %d",  &N, &M, &O);
		printf("Case #%d: ", i+1);
		if(N+M<=O || N+O<=M || M+O<=N){
			printf("No");
		}else{
			printf("Yes");
		}
		printf("\n");
		
	}
	
	
	return 0;
}
