#include<stdio.h>


int main(){
	int T;
	int hasil;
	int hasil2;
	scanf("%d", &T);
	
	for(int i=1;i<=T;i++){
		int A, B;
		int sum=1;
		int total=0;
		scanf("%d %d", &A, &B);
		
		A=A%10;//untuk mencari angka satuan dari puluhan
		B=B%10;//sama juga untuk yang b
		hasil=A+B;//kemudian hasil satuan dr puluhan dijumlahkan
		hasil=hasil%10;//mengambil puluhan dari ratusan
		
			
		printf("Case #%d: %d\n",i, hasil);
		
	}
	
	
	
	
	return 0;
}
