#include <stdio.h>

int main() {
    int arr[10];
    printf("Digite 10 números inteiros:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    int maior = arr[0], menor = arr[0];
    for (int i = 1; i < 10; i++) {
        if (arr[i] > maior) maior = arr[i];
        if (arr[i] < menor) menor = arr[i];
    }
    printf("O maior elemento é: %d\n", maior);
    printf("O menor elemento é: %d\n", menor);
    return 0;
}