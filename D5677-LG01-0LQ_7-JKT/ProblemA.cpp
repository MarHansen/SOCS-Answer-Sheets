#include<stdio.h>
#include<string.h>

int main(){
	for(int i=0;i<3;i++){
		int N;
		scanf("%d", &N);
		char S[N];
		scanf("%s", S);
		int panjang;
		panjang = strlen(S)-1;
		printf("%c%c\n", S[panjang], S[0]);
	
	}
	
	
	
	return 0;
}
