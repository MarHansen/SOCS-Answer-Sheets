#include<stdio.h>

int main(){
	int a,b,hasil;
	
	scanf("%d", &a);
	for(int i=0;i<a;i++){
		int a;
		int b;
		int hasil;
		scanf("%d %d", &a, &b);
		hasil=(a/b)<<b;
		printf("%d\n", hasil);

	}
	



	return 0;
}
