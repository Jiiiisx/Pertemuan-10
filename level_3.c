#include <stdio.h>

#define MAX_DATA 100

int cari_sekuensial(const int data[], int jumlah_data, int target);

int main(void)
{
    int data[MAX_DATA];
    int n, i, target, posisi;

    printf("Masukkan jumlah data: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Data ke-%d: ", i + 1);
        scanf("%d", &data[i]);
    }

    printf("Hapus nilai: ");
    scanf("%d", &target);

    posisi = cari_sekuensial(data, n, target);

    if (posisi != -1)
    {
        for (i = posisi; i < n - 1; i++)
        {
            data[i] = data[i + 1];
        }
        n--;

        printf("Data akhir : ");
        for (i = 0; i < n; i++)
        {
            printf("%d ", data[i]);
        }
        printf("\n");
    }
    else
    {
        printf("Nilai tidak ditemukan.\n");
    }

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