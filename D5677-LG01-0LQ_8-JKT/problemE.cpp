#include<stdio.h>
#include<string.h>

int main(){
	int T;
	scanf("%d", &T);
	for(int x=0;x<T;x++){
		char S[1001];
		scanf("%s", S);
		for(int i=0;i<strlen(S);i++){
			if(S[i]>='a' && S[i]<='z'){
				S[i]=S[i]-32;
			}else if(S[i]>='A' && S[i]<='Z'){
				S[i]=S[i]+32;
			}
		}
		printf("Case #%d:", x+1);
		printf(" ");
		for(int i=strlen(S);i>0;i--){
			printf("%c", S[i-1]);
		}
		printf("\n");
	}
	
	
	
	return 0;
}
