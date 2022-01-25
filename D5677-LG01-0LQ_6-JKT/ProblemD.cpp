#include<stdio.h>
#include<string.h>

int main(){
	int T,N;
	char s[1000];
	scanf("%d", &T);
	for(int i=1;i<=T;i++){
		scanf("%s", &s);
		printf("Case %d:", i);
		printf(" ");
		for(int j=0;j<strlen(s);j++){
			printf("%d", s[j]);
			if(j!=strlen(s)-1){
				printf("-");
			}
		}
		printf("\n");
	}
	
	
	
	
	
	return 0;
}
