#include<stdio.h>

int main(){
	char n1[100];
	double t1;
	char u1[100];
	char n2[100];
	double t2;
	char u2[100];
	
	scanf("%s %lf %s %s %lf %s", n1, &t1, u1, n2, &t2, u2);
	printf("Name 1: %s\n", n1);
	printf("Height 1: %0.2lf\n", t1);
	printf("Age 1: %s\n", u1);
	printf("Name 2: %s\n", n2);
	printf("Height 2: %0.2lf\n", t2);
	printf("Age 2: %s\n", u2);
	
	
	
	return 0;
}
