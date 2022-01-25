#include<stdio.h>

//template merge sort
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
    int T;
    scanf("%d", &T);
    for(int x=0;x<T;x++){
        int N;
        int search;
        scanf("%d", &N);

        int MMR[N];
        for(int i=0;i<N;i++){
            scanf("%d", &MMR[i]);
        }
        split(MMR, 0, N-1);
        scanf("%d", &search);

        int temp = -1;
        for(int i=0;i<N;i++){
            if(MMR[i] == search){
                temp = i;
                break;
            }
        }
        if(temp == -1){
            printf("CASE #%d: -1 -1\n", x+1);
        }else if(temp == N-1){
            printf("CASE #%d: %d %d\n",x+1, MMR[temp-1], MMR[temp]);
        }else if(temp != N-1){
            printf("CASE #%d: %d %d\n",x+1, MMR[temp], MMR[temp+1]);
        }


    }


    return 0;
}