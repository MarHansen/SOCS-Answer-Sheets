#include<stdio.h>


int main(){
	char N[11];
	char M[101];
	char kelas1;
	int kelas2;
	
	scanf("%s\n", N);
	scanf("%[^\n]\n", M);
	scanf("%c %d", &kelas1, &kelas2);
	
	printf("%-5s : %s\n","Id", N);
	printf("%-5s : %s\n","Name", M);
	printf("%-5s : %c\n","Class", kelas1);
	printf("%-5s : %d\n","Num", kelas2);
	
	
	
	return 0;
}
