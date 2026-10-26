#include <stdio.h>

#define MAX_DATA 50

int cari_indeks_terakhir(const int data[], int jumlah_data, int target);

int main(void)
{
    int data[MAX_DATA];
    int n, i, target;

    if (scanf("%d", &n) != 1) return 0;

    for (i = 0; i < n; i++)
    {
        scanf("%d", &data[i]);
    }

    scanf("%d", &target);

    int idx_terakhir = cari_indeks_terakhir(data, n, target);

    printf("==================================\n");
    printf("    INDEKS KEMUNCULAN TERAKHIR    \n");
    printf("==================================\n");
    printf("Jumlah data     : %d\n", n);
    printf("Data            : ");
    for (i = 0; i < n; i++)
    {
        printf("%d", data[i]);
        if (i < n - 1) printf(" ");
    }
    printf("\n");
    printf("Target          : %d\n", target);
    printf("Indeks terakhir : %d\n", idx_terakhir);
    printf("==================================\n");

    return 0;
}

int cari_indeks_terakhir(const int data[], int jumlah_data, int target)
{
    int indeks_terakhir = -1;
    for (int i = 0; i < jumlah_data; i++)
    {
        if (data[i] == target)
        {
            indeks_terakhir = i;
        }
    }
    return indeks_terakhir;
}