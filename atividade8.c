#include <stdio.h>

void bubbleSort(int arr[]) {
    int tamanho = 10;
    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = 0; j < tamanho - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void printArray(int arr[]) {
    int tamanho = 10;
    printf("Array ordenado em ordem crescente: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[10];
    printf("Digite 10 números inteiros:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    bubbleSort(arr);
    printArray(arr);
    return 0;
}