#include <stdio.h>

#define MAX_DATA 100

int main(void)
{
    int data[MAX_DATA];
    int n, i;
    int genap = 0, ganjil = 0;

    printf("Masukkan jumlah data: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Data ke-%d: ", i + 1);
        scanf("%d", &data[i]);

        if (data[i] % 2 == 0)
        {
            genap++;
        }
        else
        {
            ganjil++;
        }
    }

    printf("\nJumlah genap : %d\n", genap);
    printf("Jumlah ganjil: %d\n", ganjil);

    return 0;
}