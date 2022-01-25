#include<stdio.h>

int cek(int A, int B){
	if(A == B){
		return 1;
	}	
	if(A == 1){
		if(A == B){
			return 1;
		}else{
			return 0;
		}
	}
	if(A%2 == 0){
		A = A/2;
		return cek(A, B);
	}
	if(A%2 == 1){
		A = (A*3)+1;
		return cek(A, B);
	}
}

int main(){
	int T;
	scanf("%d", &T);
	for(int i=0;i<T;i++){
		int A,B;
		int tumbal;
		scanf("%d %d", &A, &B);
		cek(A, B);
		tumbal = cek(A, B);
		if(tumbal == 1){
			printf("Case #%d: YES\n", i+1);
		}else{
			printf("Case #%d: NO\n", i+1);
		}
	}
		
		
	
	
	return 0;
}
