#include<stdio.h>

int main(){
	int a;
	double b;
	scanf("%d %lf", &a, &b);
	
	double x=a;
	for(int i=0;i<3;i++){
		x+=(b/100.00)*x;
	}
	printf("%0.2lf\n", x);



	return 0;
}
