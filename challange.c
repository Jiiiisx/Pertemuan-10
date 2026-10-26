#include <stdio.h>

#define MAX_DATA 100

int cari_sekuensial(const int data[], int jumlah_data, int target);

int main(void)
{
    int data_awal[MAX_DATA];
    int data_akhir[MAX_DATA];
    int n, i, n_akhir = 0;

    printf("Masukkan jumlah data: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &data_awal[i]);
    }

    for (i = 0; i < n; i++)
    {
        if (cari_sekuensial(data_akhir, n_akhir, data_awal[i]) == -1)
        {
            data_akhir[n_akhir] = data_awal[i];
            n_akhir++;
        }
    }

    printf("Data akhir: ");
    for (i = 0; i < n_akhir; i++)
    {
        printf("%d ", data_akhir[i]);
    }
    printf("\n");

    return 0;
}

int cari_sekuensial(const int data[], int jumlah_data, int target)
{
    int i;
    for (i = 0; i < jumlah_data; i++)
    {
        if (data[i] == target)
        {
            return i;
        }
    }
    return -1;
}