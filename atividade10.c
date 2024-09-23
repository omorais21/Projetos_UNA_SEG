#include <stdio.h>
#include <string.h>

int contarVogais(char str[]) {
    int count = 0;
    for (int i = 0; i < strlen(str); i++) {
        char c = tolower(str[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            count++;
        }
    }
    return count;
}

int main() {
    char str[100];
    printf("Digite uma string: ");
    fgets(str, 100, stdin);
    str[strlen(str) - 1] = '\0'; // remover o caractere de nova linha
    int vogais = contarVogais(str);
    printf("A string tem %d vogais.\n", vogais);
    return 0;
}