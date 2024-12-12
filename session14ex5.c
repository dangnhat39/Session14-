#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    int wordCount = 0;
    int inWord = 0;

    printf("Nhap chuoi: ");
    fgets(str, sizeof(str), stdin);

    for(int i = 0; i < strlen(str); i++){
        if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')){
            if(!inWord){
                wordCount++;
                inWord = 1;
            }
        } else {
            inWord = 0;
        }
    }

    printf("So luong tu trong chuoi la: %d\n", wordCount);

    return 0;
}

