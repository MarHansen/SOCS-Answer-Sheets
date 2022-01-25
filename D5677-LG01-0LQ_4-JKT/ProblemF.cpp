#include<stdio.h>

int main(){
	long int a;
	long int b;
	long int hasil=0;
	scanf("%d %d",&a, &b);
	for(int i=a;i<=b;i++){
		hasil +=i;
	}
	printf("%ld\n", hasil);



	return 0;
}
