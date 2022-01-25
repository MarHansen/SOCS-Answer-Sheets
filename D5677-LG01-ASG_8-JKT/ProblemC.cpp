#include<stdio.h>

struct jadwal{
	char code[9];
	char day[10];
	int time;
};

int main(){
	int N;
	scanf("%d", &N);
	struct jadwal no[N];
	for(int i=0;i<N;i++){
		scanf("%s", no[i].code);
		scanf("%s", no[i].day);
		scanf("%d", &no[i].time);
	}
	int Q;
	scanf("%d", &Q);
	for(int i=0;i<Q;i++){
		int x;
		scanf("%d", &x);
		printf("Query #%d:\n", i+1);
		printf("Code: %s\n", no[x-1].code);
		printf("Day: %s\n", no[x-1].day);
		printf("Time: %02d:00\n", no[x-1].time);
	}
	
	
	
	return 0;
}
