#include<stdio.h>

int count = 0;

int fibonacci(int n){
	count++;
	if(n<=1){
		return n;
	}
	return fibonacci(n-1)+fibonacci(n-2);
}

int main(){
	int T;
	scanf("%d", &T);
	for(int i=0;i<T;i++){
		count=0;
		int n;
		scanf("%d", &n);
		fibonacci(n);
		printf("Case #%d: %d\n", i+1,  count);
	}
	
	
	return 0;
}
