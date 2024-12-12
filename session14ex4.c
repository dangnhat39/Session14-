#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello, world! Welcome to C programming.";
    char ch;
    int count = 0;

    printf("Nhap mot ky tu bat ky: ");
    scanf("%c", &ch);

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == ch) {
            count++;
        }
    }

    printf("So lan ky tu '%c' xuat hien trong chuoi la: %d\n", ch, count);

    return 0;
}

