#include <stdio.h>
#include <string.h>

int main() {
    char chuoi[100], daoNguoc[100];
    int n, i, j;

    printf("Nhap vao mot chuoi bat ky: ");
    fgets(chuoi, sizeof(chuoi), stdin);

    chuoi[strcspn(chuoi, "\n")] = '\0';

    n = strlen(chuoi);

    for (i = n - 1, j = 0; i >= 0; i--, j++) {
        daoNguoc[j] = chuoi[i];
    }
    daoNguoc[j] = '\0';

    printf("Chuoi dao nguoc la: %s\n", daoNguoc);

    return 0;
}

