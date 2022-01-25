#include<stdio.h>


int main(){
	int T;
	scanf("%d", &T);
	
	for(int i=0;i<T;i++){
		int a, b, c;
		int cashback;
		scanf("%d %d %d", &a, &b, &c);
		cashback = a*(b/100);
		if(cashback>c){
			cashback = c;
		}
		printf("Case #%d: %d\n", i+1, cashback);
	}
	
	
	return 0;
}
