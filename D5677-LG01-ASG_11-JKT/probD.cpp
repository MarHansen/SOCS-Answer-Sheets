#include <stdio.h>

int main()
{
    int N;
    int M;
    scanf("%d %d", &N, &M);
    int number[N];
    int number2[M];
    int max = -1;
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &number[i]);
    }
    for (int i = 0; i < M; i++)
    {
        scanf("%d", &number2[i]);
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (number[i] == number2[j])
            {
                number[i] = -1;
            }
        }
    }
    for (int i = 0; i < N; i++)
    {
        if (number[i] > max)
        {
            max = number[i];
        }
    }
    printf("Maximum number is %d\n", max);

    return 0;
}