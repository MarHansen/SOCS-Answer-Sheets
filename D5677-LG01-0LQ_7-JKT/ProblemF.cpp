#include<stdio.h>


int main(){
	int N;
	scanf("%d", &N);
	long long int A[N];
	long long int sum=0;
	for(int i=0;i<N;i++){
		scanf("%lld", &A[i]);
		sum+= A[i];
	}
	if(sum %2 !=0){
		for(int j=0;j<N;j++){
			if(A[j] %2 !=0){
				sum -= A[j];
				break;
			}
		}
	}
	
	printf("%lld\n", sum);
	
	return 0;
}
