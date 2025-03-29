#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    float nota[5][3], soma = 0, media = 0;
    char nome[5][20];
    int i, j;

    // Armazenar nome dos alunos
    printf("Digite o nome dos 5 alunos:\n");
    for (i = 0; i < 5; i++) {
        printf("Nome do %dº aluno: ", i + 1);
        gets(nome[i]);  // usando gets() para ler o nome do aluno
    }

    // Armazenar notas dos alunos
    for (i = 0; i < 5; i++) {
        printf("Digite as notas do %dº aluno (%s):\n", i + 1, nome[i]);
        for (j = 0; j < 3; j++) {
            printf("Nota %d: ", j + 1);
            scanf("%f", &nota[i][j]);
            soma += nota[i][j];  // somando as notas
        }
        media = soma / 3.0;  // calculando a média
        printf("A média do aluno %s é %.2f\n", nome[i], media);
    }

    return 0;
}
