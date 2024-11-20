#include <stdio.h>

// Função recursiva para calcular o fatorial
int fatorial(int n) {
    if (n == 0 || n == 1) {
        return 1;  // Caso base: fatorial de 0 e 1 é 1
    } else {
        return n * fatorial(n - 1);  // Passo recursivo
    }
}

int main() {
    int num;
    
    printf("Digite um número inteiro não negativo: ");
    scanf("%d", &num);
    
    if (num < 0) {
        printf("O fatorial não é definido para números negativos.\n");
    } else {
        printf("O fatorial de %d é %d\n", num, fatorial(num));
    }

    return 0;
}