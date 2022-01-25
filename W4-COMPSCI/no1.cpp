#include<stdio.h>

int n;

int prima(int loop, int x){
    if(x == loop)
        return 0;
    else{
        if(x % loop == 0){
            return 1;
        }else{
            return prima(loop + 1, x);
        }
    }
}
int main(){
    int T;
    scanf("%d", &T);
    for(int i=0;i<T;i++){
        int j = 2;
        int x;
        scanf("%d", &x);
        printf("Case #%d: ", i+1);

        if(prima(j,x) == 0){
            printf("It's a Prime Number");
        }else{
            printf("Not Prime Number");
        }
        puts("");


    }



    return 0;
}