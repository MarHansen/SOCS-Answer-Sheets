#include<stdio.h>

int main(){
	int N;
	int tumbal;
	scanf("%d", &N);
	if(N%2 == 0){
		N = N/2;
	}else{
		N = 1;
	}
	printf("%d\n", N);
	
	return 0;
}
