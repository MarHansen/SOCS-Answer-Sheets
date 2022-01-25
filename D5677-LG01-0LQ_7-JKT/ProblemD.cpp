#include<stdio.h>


int main(){
	int N, M, a;
	scanf("%d %d", &N, &M);
	char S[N];
	scanf("%s", S);
	for(int i=0;i<M;i++){
		scanf("%d", &a);
		if(S[a] >= 'a' && S[a] <= 'z'){
			S[a]=S[a]-32;
		}else if(S[a] >= 'A' && S[a] <= 'Z'){
			S[a]=S[a]+32;
		}
		
	}
	for(int j=0;j<N;j++){
		printf("%c", S[j]);
	}
	printf("\n");
		
	
	
	return 0;
}
