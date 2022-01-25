#include<stdio.h>
#include<string.h>

void balik(char *S){
	if(*S == '\0'){
		return;
	}else{
		balik(S+1);
		printf("%c", *S);
	}
}

int main(){
	int T;
	scanf("%d", &T);getchar();
	for(int i=0;i<T;i++){
		char S[1001]={NULL};
		//fflush(stdin);
		scanf("%[^\n]", S);getchar();
		//fgets(S, 1001, stdin);
		printf("Case #%d: ", i+1);
		balik(S);
		printf("\n");
	}
	
	return 0;
}
