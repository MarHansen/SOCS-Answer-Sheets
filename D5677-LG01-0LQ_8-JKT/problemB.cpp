#include<stdio.h>


int main(){
	int T;
	scanf("%d", &T);
	for(int i=0;i<T;i++){
		int N;
		int count=0;
		scanf("%d", &N);
		int M[N];
		for(int j=0;j<N;j++){
			scanf("%d", &M[i]);
		}
		for(int j=0;j<N;j++){
			for(int k=j+1;k<N;k++){
				if(M[j] == M[k]){
					count++;
					
				}
			}
		}
		printf("%d", count);
	}
	
	
	
	
	return 0;
}
