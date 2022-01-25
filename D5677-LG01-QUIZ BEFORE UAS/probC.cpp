#include<stdio.h>

struct mahasiswa{
    char id[21];
    char name[101];
    int age;
};

int main(){
    int T;
    scanf("%d", &T);
    getchar();
    struct mahasiswa data[T];
    for(int x=0;x<T;x++){
        scanf("%s", data[x].id);
        getchar();
        scanf("%[^\n]", data[x].name);
        scanf("%d", &data[x].age);
        getchar();
    }

    int Q;
    scanf("%d", &Q);
    getchar();
    for(int x=0;x<Q;x++){
        int query;
        scanf("%d", &query);
        printf("Query #%d:\n", x+1);
        printf("ID: %s\n", data[query-1].id);
        printf("Name: %s\n", data[query-1].name);
        printf("Age: %d\n", data[query-1].age);
    }


    return 0;
}