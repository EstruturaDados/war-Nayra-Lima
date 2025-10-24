#include <stdio.h>
#include <string.h>

/*
    Programa: Cadastro de Territórios
    Descrição: Este programa permite cadastrar 5 territórios,
    armazenando nome, cor do exército e quantidade de tropas.
    Após o cadastro, os dados são exibidos na tela.
*/

// Definição da struct Territorio
typedef struct {
    char nome[30];   // Nome do território
    char cor[10];    // Cor do exército
    int tropas;      // Quantidade de tropas
} Territorio;

int main() {
    Territorio territorios[5]; // Vetor que armazenará 5 territórios
    int i;

    printf("=== SISTEMA DE CADASTRO DE TERRITÓRIOS ===\n\n");

    // Cadastro dos 5 territórios
    for (i = 0; i < 5; i++) {
        printf("Cadastro do Território %d\n", i + 1);

        // Leitura do nome do território
        printf("Digite o nome do território: ");
        scanf(" %29[^\n]", territorios[i].nome);  // Lê até 29 caracteres (evita overflow)

        // Leitura da cor do exército
        printf("Digite a cor do exército: ");
        scanf(" %9s", territorios[i].cor);        // Lê até 9 caracteres (sem espaços)

        // Leitura da quantidade de tropas
        printf("Digite a quantidade de tropas: ");
        scanf("%d", &territorios[i].tropas);

        printf("\n"); // Espaço entre os cadastros
    }

    // Exibição dos dados cadastrados
    printf("\n=== DADOS DOS TERRITÓRIOS CADASTRADOS ===\n\n");

    for (i = 0; i < 5; i++) {
        printf("Território %d:\n", i + 1);
        printf("Nome: %s\n", territorios[i].nome);
        printf("Cor do exército: %s\n", territorios[i].cor);
        printf("Quantidade de tropas: %d\n", territorios[i].tropas);
        printf("-----------------------------\n");
    }

    printf("\nCadastro concluído com sucesso!\n"); // Finalizado

    return 0;
}
