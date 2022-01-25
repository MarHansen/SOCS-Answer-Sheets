#include<stdio.h>


int main(){
	int T;
	scanf("%d", &T);
	T=3;
	for(int i=0;i<T;i++){
		long long int X;
		int hasil[31];
		int P;
		scanf("%lld %d", &X, &P);
		for(int j=0;j<31;j++){
			hasil[j]=X%2;
			X=X/2;
		}
		printf("%d\n", hasil[P]);
		
		
	}
	
	
	
	
	
	return 0;
}
