#include<stdio.h>


int main(){
	char N[11];
	char M[101];
	char kelas1;
	int kelas2;
	
	scanf("%s\n", N);
	scanf("%[^\n]\n", M);
	scanf("%c %d", &kelas1, &kelas2);
	
	printf("Id\t: %s\n", N);
	printf("Name\t: %s\n", M);
	printf("Class\t: %c\n", kelas1);
	printf("Num\t: %d\n", kelas2);
	
	
	
	return 0;
}
