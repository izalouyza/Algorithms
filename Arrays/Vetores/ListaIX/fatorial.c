#include<stdio.h>
#include<locale.h>

// Função para calcular o fatorial de um número
int fatorial(int n) {
    int fat = 1;
    for (int i = 1; i <= n; i++) {
        fat *= i;
    }
    return fat;
}

int main() {
		setlocale(LC_ALL, "portuguese");
    int v1[5], v2[5];

    // Solicitar os 5 números inteiros maiores ou iguais a zero
    for (int i = 0; i < 5; i++) {
        do {
            printf("Digite o %dº número inteiro (maior ou igual a zero): ", i + 1);
            scanf("%d", &v1[i]);
        } while (v1[i] < 0);  // Garantir que o número seja maior ou igual a zero

        // Armazenar o fatorial no vetor v2
        v2[i] = fatorial(v1[i]);
    }

    // Exibir o conteúdo dos vetores v1 e v2
    printf("\nVetor v1 (valores originais):\n");
    for (int i = 0; i < 5; i++) {
        printf("v1[%d] = %d\n", i, v1[i]);
    }

    printf("\nVetor v2 (fatoriais):\n");
    for (int i = 0; i < 5; i++) {
        printf("v2[%d] = %d\n", i, v2[i]);
    }

    return 0;
}
