#include<stdio.h>
#include<string.h>


int main(){
	char S[10000];
	scanf("%[^\n]", &S);
	
	for(int i=0;i<strlen(S);i++){
		if(S[i] == 'I' ||S[i] == 'i'){
			S[i]='1';
		}else if(S[i] == 'R'||S[i] == 'r'){
			S[i]='2';
		}else if(S[i] == 'E'||S[i] == 'e'){
			S[i]='3';
		}else if(S[i] == 'A'||S[i] == 'a'){
			S[i]='4';
		}else if(S[i] == 'S'||S[i] == 's'){
			S[i]='5';
		}else if(S[i] == 'G'||S[i] == 'g'){
			S[i]='6';
		}else if(S[i] == 'T'||S[i] == 't'){
			S[i]='7';
		}else if(S[i] == 'B'||S[i] == 'b'){
			S[i]='8';
		}else if(S[i] == 'P'||S[i] == 'p'){
			S[i]='9';
		}else if(S[i] == 'O'||S[i] == 'o'){
			S[i]='0';
		}else if(S[i]>='a' && S[i]<='z'){
			S[i]=S[i]-32;
		}
		
	}
	printf("%s\n", S);
	
	
	
	
	
	
	return 0;
}
