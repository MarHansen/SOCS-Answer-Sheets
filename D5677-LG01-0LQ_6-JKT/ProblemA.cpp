#include<stdio.h>

int main(){
  int T,N;
  

  scanf("%d", &T);

  for(int i=1;i<=T;i++){
    scanf("%d", &N);
    int a[N],b[N],jumlah[N];
    
    for(int j=0;j<N;j++){
      scanf("%d",&a[j]);
    }
    for(int j=0;j<N;j++){
      scanf("%d",&b[j]);
    }
    for(int k=0;k<N;k++){
      jumlah[k]=a[k]-b[k];
    }
    printf("Case #%d:",i);
    for (int i = 0; i < N; i++) {
      printf(" %d",jumlah[i]);
    }
    printf("\n");
  }



  return 0;
}
