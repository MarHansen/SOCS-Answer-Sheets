#include<stdio.h>

void merge(int arr[], int s, int mid, int e){
	int s1=s;
	int s2=mid+1;
	int e1=mid;
	int e2=e;
	int temp[100000];
	int index=s;
	
	while(s1<=e1 && s2<=e2){
		if(arr[s1]<arr[s2]){
			temp[index++]=arr[s1++];
		}else{
			temp[index++]=arr[s2++];
		}
	}
	
	while(s1<=e1){
		temp[index++]=arr[s1++];
	}while(s2<=e2){
		temp[index++]=arr[s2++];
	}
	
	for(int i=s; i<=e; i++){
		arr[i]=temp[i];
	}
}

void split(int arr[], int s,int e){
	if(s<e){
		int mid=(s+e)/2;
		split(arr, s, mid);
		split(arr, mid+1, e);
		merge(arr, s, mid, e);
	}
}

int main(){
    int N;
    scanf("%d", &N);
    int P[N];
    for(int i=0;i<N;i++){
        scanf("%d", &P[i]);
    }

    split(P, 0, N-1);

    int count = 0;
    for(int i=0;i<N;i++){
        if(P[i] != P[i+1]){
            count++;
        }
    }
    printf("%d\n", count);



    return 0;
}