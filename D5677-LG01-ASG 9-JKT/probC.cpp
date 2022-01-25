#include<stdio.h>

int cek(int N){
	if(N == 1){
		return 1;
	}else if(N%2 ==0){
		return cek(N/2);
	}else{
		return cek(N-1)+ cek(N+1);
	}
}

int main(){
	int T;
	scanf("%d", &T);
	
	for(int i=0;i<T;i++){
		int N;
		scanf("%d", &N);
		printf("Case #%d: ", i+1);
		printf("%d", cek(N));
		printf("\n");
	}
	
	
	return 0;
}
