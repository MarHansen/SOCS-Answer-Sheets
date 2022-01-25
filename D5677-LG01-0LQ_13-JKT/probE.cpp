#include <stdio.h>
#include <string.h>

struct mahasiswa
{
    char nama[11];
    int nilai;
};

int main()
{
    int T;
    scanf("%d ", &T);
    for (int x = 0; x < T; x++)
    {
        int N;
        scanf("%d", &N);
        struct mahasiswa rank[N];
        for (int i = 0; i < N; i++)
        {
            scanf("%[^#]#%d ", rank[i].nama, &rank[i].nilai);
        }
        char nyari[11];
        scanf("%s", nyari);
        // fgets(nyari, 11, stdin); //masi gapercaya knp gabisa pake fgets :(

        for (int i = 0; i < N; i++)
        { // sorting kecil ke gede dari angka/ranknya
            for (int j = 0; j < N - 1 - i; j++)
            {
                if (rank[j + 1].nilai > rank[j].nilai)
                {
                    struct mahasiswa temp = rank[j];
                    rank[j] = rank[j + 1];
                    rank[j + 1] = temp;
                }
            }
        }

        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N - 1 - i; j++)
            {
                if (rank[j].nilai == rank[j + 1].nilai)
                { // klo misalnya ranknya sama dia bakal sort sesuai nama
                    int hasil = strcmp(rank[j].nama, rank[j + 1].nama);
                    if (hasil > 0)
                    {
                        struct mahasiswa temp = rank[j];
                        rank[j] = rank[j + 1];
                        rank[j + 1] = temp;
                    }
                }
            }
        }

        printf("Case #%d: ", x + 1);
        for (int i = 0; i < N; i++)
        {
            int hasil = strcmp(nyari, rank[i].nama);
            if (hasil == 0)
            {
                printf("%d", i + 1);
                break;
            }
        }
        printf("\n");
    }

    return 0;
}
