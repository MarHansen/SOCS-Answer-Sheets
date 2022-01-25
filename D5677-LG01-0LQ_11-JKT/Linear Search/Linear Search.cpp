#include<stdio.h>

void linear(int a[], int size, int search){
    for(int i=0;i<size;i++){
        if(a[i]==search){
            printf("%d", search);
            return;
        }
    }
    printf("Ga nemu");

}

int main(){
    int a[]={1 ,2 ,3 ,4 ,5, 6, 7};
    int size = sizeof(a)/sizeof(a[0]);
    int search = 1;

    linear(a, size, search);



    return 0;
}