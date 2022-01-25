#include<stdio.h>

int main(){
	int d, s, t;
	scanf("%d %d %d", &d, &s, &t);

	if(d>s && s>t){
		printf("Daging\n");
		printf("Sayur\n");
		printf("Telur\n");
	}else if(d<s && d>t){
		printf("Sayur\n");
		printf("Daging\n");
		printf("Telur\n");
	}else if(d>s && d<t){
		printf("Telur\n");
		printf("Daging\n");
		printf("Sayur\n");
	}else if(d<s && s<t){
		printf("Telur\n");
		printf("Sayur\n");
		printf("Daging\n");
	}else if(d>t && d>s){
		printf("Daging\n");
		printf("Telur\n");
		printf("Sayur\n");
	}else if(s>t && t>d){
		printf("Sayur\n");
		printf("Telur\n");
		printf("Daging\n");
	}




	return 0;
}
