#include<stdio.h>

int main(){
	int T;
	scanf("%d", &T);
	
	for(int i=0;i<T;i++){
		int h, m;
		char a[3];
		scanf("%02d:%02d %c%c", &h, &m, &a[0], &a[1]);
		
		printf("Case #%d: ", i+1);
		if(a[0] == 'a' && h == 12){
			printf("00:%02d", m);
		}else if(a[0] == 'p' && h == 12){
			printf("%02d:%02d", h, m);
		}else if(a[0] == 'p'){
			printf("%02d:%02d", h+12, m);
		}else if(a[0] == 'a'){
			printf("%02d:%02d", h, m);
		}
		printf("\n");
	}
	
	
	return 0;
}
