#include<stdio.h>
#include<string.h>

int main(){
	int N;
	char S[1000];
	int str;
	scanf("%d", &N);
	
	for(int i=1;i<=N;i++){
		scanf("%s", &S);
		str=strlen(S);
		printf("Case #%d :", i);
		printf(" ");
		for(int j=str-1;j>=0;j--){
			printf("%c", S[j]);
		}
		printf("\n");
	}
	
	
	
	
	return 0;
}
