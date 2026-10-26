#include <stdio.h>

#define MAX_DATA 100

int main(void)
{
    int data[MAX_DATA];
    int n, i;

    printf("Masukkan jumlah data: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Data ke-%d: ", i + 1);
        scanf("%d", &data[i]);
    }

    printf("\nData asli   : ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", data[i]);
    }

    printf("\nData terbalik: ");
    for (i = n - 1; i >= 0; i--)
    {
        printf("%d ", data[i]);
    }
    printf("\n");

    return 0;
}