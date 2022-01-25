#include<stdio.h>


int main(){
	int t, n, c;
	scanf("%d", &t);
	for(int i=0;i<t;i++){
		scanf("%d", &n);
		for(int j=1;j<=n;j++){
			for(int k=1;k<=n;k++){
				if(j==1||j==n||k==n||k==1||j==k||k==(n-j+1)){
					printf("*");
				}else{
					printf(" ");
				}
			}
			printf("\n");	
		}
		printf("\n");
	}
	
	
	
	return 0;
}
