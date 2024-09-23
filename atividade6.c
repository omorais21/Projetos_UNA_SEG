#include <stdio.h>

int fatorial(int num) {
    int resultado = 1;
    for (int i = 1; i <= num; i++) {
        resultado *= i;
    }
    return resultado;
}

int main() {
    int num;
    printf("Digite um número: ");
    scanf("%d", &num);
    printf("O fatorial de %d é: %d\n", num, fatorial(num));
    return 0;
}