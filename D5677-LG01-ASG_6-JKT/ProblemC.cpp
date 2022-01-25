#include<stdio.h>

int main(){
	int T;
	scanf("%d", &T);
	for(int x=s0;x<T;x++){
		long long int sum=0;
		int N;
		scanf("%d", &N);
		long long int X[N], Y[N];
		for(int i=0;i<N;i++){
			scanf("%lld", &X[i]);
		}
		for(int i=0;i<N;i++){
			scanf("%lld", &Y[i]);
		}
		for(int i=0;i<N;i++){
			if(X[i]<Y[i]){
				sum++;
			}
		}
		printf("Case #%d: %lld\n", x+1, sum);
		
	}
	
	
	
	return 0;
}
