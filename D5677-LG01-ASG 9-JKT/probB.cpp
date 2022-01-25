#include<stdio.h>

void cek(char S[], int n){
	if(n == 0){
		printf("%c", S[0]);
	}else if(n == 1){
		printf("%c", S[1]);
	}else{
		cek(S, n-1);
		cek(S, n-2);
	}
}

int main(){
	int T;
	scanf("%d", &T);
	for(int i=0;i<T;i++){	
		char S[101];
		int n;
		scanf("%d %c %c", &n, &S[0], &S[1]);
		//fflush(stdin);
		printf("Case #%d: ", i+1);
		cek(S, n);
		printf("\n");
		
	}
	
	
	
	return 0;
}
