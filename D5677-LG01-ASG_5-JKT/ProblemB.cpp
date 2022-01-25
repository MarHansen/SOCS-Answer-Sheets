#include<stdio.h>


int main(){
	long int a, sum;
	int t, n;
	scanf("%d", &t);
	for(int i=1;i<=t;i++){
		sum=0;
		scanf("%d", &n);
		for(int j=1;j<=n;j++){
			scanf("%ld", &a);
			sum+=a;
		}
		printf("Case #%d: %ld\n", i, sum);
	}
	
	
	
	
	
	
	return 0;
}
