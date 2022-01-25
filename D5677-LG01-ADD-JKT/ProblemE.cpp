#include<stdio.h>

int main(){
	int N;
	int jojo, lili, bibi;
	int nilai;
	int total;
	int sum=0;
	scanf("%d", &N);
	scanf("%d %d %d", &jojo, &lili, &bibi);
	for(int i=0;i<N;i++){
		scanf("%d", &nilai);
		sum+=nilai;
	}
	total=(jojo+lili+bibi+sum)/ float (N+3);
	
	if(jojo<total){
		printf("Jojo tidak lolos\n");
	}else{
		printf("Jojo lolos\n");
	}
	
	if(lili<total){
		printf("Lili tidak lolos\n");
	}else{
		printf("Lili lolos\n");
	}
	
	if(bibi<total){
		printf("Bibi tidak lolos\n");
	}else{
		printf("Bibi lolos\n");
	}
	return 0;
}
