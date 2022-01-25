#include<stdio.h>

int main(){
	int T;
	scanf("%d", &T);
	for(int x=0;x<T;x++){
		int N;
		int min;
		scanf("%d", &N);
		long long int X[N];
		long long sum=0;
		for(int i=0;i<N;i++){
			scanf("%lld", &X[i]);
		}
		min=X[0];
		for(int i=0;i<N;i++){
			if(X[i]<min){
				min=X[i];
			}
			sum++;
		}
		printf("Case #%d: %lld", x+1, min);
		printf("%d", sum);
		
		
	}
	
	
	
	return 0;
}
