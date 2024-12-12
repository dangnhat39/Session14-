#include <stdio.h>

int main() {
    char chuoi[100];

    
    printf("Nhap vao mot chuoi bat ky: ");
    fgets(chuoi, sizeof(chuoi), stdin); 

    
    for (int i = 0; chuoi[i] != '\0'; i++) {
        printf("%c ", chuoi[i]);
    }

    return 0;
}

