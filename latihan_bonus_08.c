#include <stdio.h>
#include <stdlib.h>

#define MAX_DATA 50

int main(void)
{
    int data[MAX_DATA];
    int n, i;
    int max_diff = 0;

    if (scanf("%d", &n) != 1) return 0;

    for (i = 0; i < n; i++)
    {
        scanf("%d", &data[i]);
    }

    for (i = 0; i < n - 1; i++)
    {
        int diff = abs(data[i + 1] - data[i]);
        if (diff > max_diff)
        {
            max_diff = diff;
        }
    }

    printf("==================================\n");
    printf("  SELISIH MAKSIMUM ANTAR ELEMEN\n");
    printf("==================================\n");
    printf("Jumlah data      : %d\n", n);
    printf("Data             : ");
    for (i = 0; i < n; i++)
    {
        printf("%d", data[i]);
        if (i < n - 1) printf(" ");
    }
    printf("\n");
    printf("Selisih maksimum : %d\n", max_diff);
    printf("==================================\n");

    return 0;
}