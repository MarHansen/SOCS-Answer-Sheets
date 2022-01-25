#include<stdio.h>

int main(){
	int n;
	int q, q1, q2;
	int a,b;
	scanf("%d", &n);
	int nx[n];
	int total;
	int i;
	int j;
	int k;
	for(i=1;i<=n;i++){
		scanf("%d", &nx[i]);
		
	}
	scanf("%d", &q);
	for(j=0;j<q;j++){
		scanf("%d %d",&q1, &q2);
	}
	for(k=q1;k<q2;k++){
		nx[k]+=i;
		printf("%d", nx[k]);
	}
	
	
	
	return 0;
}
