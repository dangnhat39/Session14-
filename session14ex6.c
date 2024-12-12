#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int letterCount = 0;

    printf("Nhap chuoi: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; i < strlen(str); i++) {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            letterCount++;
        }
    }

    printf("So ky tu la chu cai trong chuoi la: %d\n", letterCount);

    return 0;
}

