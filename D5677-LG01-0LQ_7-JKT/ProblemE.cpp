#include<stdio.h>
#include<math.h>

int main(){
	int T;
	scanf("%d", &T);
	for(int i=1;i<=T;i++){
		long long int N;
		int sum=0;
		scanf("%lld", &N);
		for(int j=1;j<=sqrt(N);j++){
			if(N%j==0){
				sum++;
				if(N/j !=j)
				sum++;
			}
		}
		printf("Case #%d:", i);
		printf(" %d", sum);
		printf("\n");
	}
	
	
	
	return 0;
}
