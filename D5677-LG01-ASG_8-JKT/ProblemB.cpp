#include<stdio.h>


int main(){
	int N;
	long long int sum = 0;
	scanf("%d", &N);
	for(int i=0;i<N;i++){
		long long int a[N];
		scanf("%lld", &a[i]);
		if(a[i]>0){
			sum+=a[i];
		}
	}
	printf("%lld\n", sum);
	
	
	
	return 0;
}
