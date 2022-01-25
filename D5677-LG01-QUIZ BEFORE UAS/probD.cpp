#include <stdio.h>
#include <string.h>

struct nama
{
    char A[101];
};

int main()
{
    int T;
    scanf("%d", &T);
    for (int x = 0; x < T; x++)
    {
        int N;
        int K;
        scanf("%d %d", &N, &K);
        struct nama isi[N];
        for (int i = 0; i < N; i++)
        {
            scanf("%s", isi[i].A);
        }

        // proses sorting dengan bubble sort
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N - 1 - i; j++)
            {
                int hasil = strcmp(isi[j].A, isi[j + 1].A);
                if (hasil > 0)
                {
                    struct nama temp = isi[j];
                    isi[j] = isi[j + 1];
                    isi[j + 1] = temp;
                }
            }
        }
        // // cek print aja
        // for(int i=0;i<N;i++){
        //     printf("%s\n", isi[i].A);
        // }

        printf("Case #%d: %s\n", x + 1, isi[K - 1].A);
    }

    return 0;
}