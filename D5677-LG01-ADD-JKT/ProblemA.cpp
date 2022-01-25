#include<stdio.h>

int main(){
	long int a, b, c, d;
	long int kiri, kanan;
	scanf("%ld %ld %ld %ld", &a, &b, &c, &d);
	kiri=a*b;
	kanan=c-d;
	if(kiri==kanan){
		printf("True\n");
	}else{
		printf("False\n");
	}
	
	
	
	
	return 0;
}
