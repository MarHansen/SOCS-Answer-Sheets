#include <stdio.h>
#include <string.h>

struct random
{
    char a[201];
};

int main()
{
    int R;
    int C;
    scanf("%d %d", &R, &C);
    struct random huruf[R];
    for (int i = 0; i < R; i++)
    {
        scanf("%s", huruf[i].a);
    }
    

  
    for (int x = 0; x < R; x++)
    {
        for (int i = 0; i < C; i++)
        {
            for (int  j = 0; j < C - 1 - i; j++)
            {
                if (huruf[x].a[j] > huruf[x].a[j+1])
                {
                    char temp = huruf[x].a[j];
                    huruf[x].a[j] = huruf[x].a[j+1];
                    huruf[x].a[j+1] = temp;
                }
            }
        }
    }


    // printf("Bublle sort 2 :");
    for(int i=0;i<R;i++){
        for(int j=0;j<R-1-i;j++){
            if(huruf[j].a[0] < huruf[j+1].a[0]){
                struct random temp = huruf[j];
                huruf[j] = huruf[j+1];
                huruf[j+1] = temp;
            }
        }
    }



    // printf("Bublle sort 3 :");
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < R - 1 - i; j++)
        {
            int hasil = strcmp(huruf[j].a, huruf[j + 1].a);
            if (hasil < 0)
            {
                struct random temp = huruf[j];
                huruf[j] = huruf[j+1];
                huruf[j+1] = temp;
            }
        }
    }

   
    // printf("Ini harusnya print");
    for (int i = 0; i < R; i++)
    {
         printf("%s\n", huruf[i].a);
    }

    return 0;
}