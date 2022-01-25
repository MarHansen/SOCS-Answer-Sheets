#include<stdio.h>


int main(){
	int a;
	int b;
	int plus;
	int min;
	int kali;
	int bagi;
	int modulo;
	scanf("%d %d", &a, &b);
	
	plus=a+b;
	min=a-b;
	kali=a*b;
	bagi=a/b;
	modulo=a%b;
	
	printf("%d\n", plus);
	printf("%d\n", min);
	printf("%d\n", kali);
	printf("%d\n", bagi);
	printf("%d\n", modulo);
	
	return 0;
}
