#include<stdio.h>
#include<string.h> 	 	


int main(){
	int T;
	scanf("%d", &T);
	for(int i=0;i<T;i++){
		char S[1000];
		scanf("%s", S);
		printf("Case %d:", i+1);
		printf(" ");
		for(int j=strlen(S);j>0;j--){
			printf("%d", S[j-1]%2);
		}
		printf("\n");
		
	}
	
	
	
	return 0;
}
