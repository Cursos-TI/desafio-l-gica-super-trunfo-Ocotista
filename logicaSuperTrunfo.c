#include <stdio.h>

// Estrutura para armazenar os dados de uma cidade
typedef struct {
    char nome[50];
    char codigo[10];
    int populacao;
    float area;
    float pib;
} Cidade;

// Função para comparar duas cidades com base na população
void compararPopulacao(Cidade cidade1, Cidade cidade2) {
    if (cidade1.populacao > cidade2.populacao) {
        printf("Cidade 1 (%s) tem maior população.\n", cidade1.nome);
    } else if (cidade1.populacao < cidade2.populacao) {
        printf("Cidade 2 (%s) tem maior população.\n", cidade2.nome);
    } else {
        printf("Ambas as cidades têm a mesma população.\n");
    }
}

// Função para comparar duas cidades com base na área
void compararArea(Cidade cidade1, Cidade cidade2) {
    if (cidade1.area > cidade2.area) {
        printf("Cidade 1 (%s) tem maior área.\n", cidade1.nome);
    } else if (cidade1.area < cidade2.area) {
        printf("Cidade 2 (%s) tem maior área.\n", cidade2.nome);
    } else {
        printf("Ambas as cidades têm a mesma área.\n");
    }
}

// Função para comparar duas cidades com base no PIB
void compararPIB(Cidade cidade1, Cidade cidade2) {
    if (cidade1.pib > cidade2.pib) {
        printf("Cidade 1 (%s) tem maior PIB.\n", cidade1.nome);
    } else if (cidade1.pib < cidade2.pib) {
        printf("Cidade 2 (%s) tem maior PIB.\n", cidade2.nome);
    } else {
        printf("Ambas as cidades têm o mesmo PIB.\n");
    }
}

int main() {
    // Definição de duas cidades
    Cidade cidade1, cidade2;

    // Cadastro dos dados da cidade 1
    printf("Digite o nome da Cidade 1: ");
    scanf("%s", cidade1.nome);
    printf("Digite o código da Cidade 1: ");
    scanf("%s", cidade1.codigo);
    printf("Digite a população da Cidade 1: ");
    scanf("%d", &cidade1.populacao);
    printf("Digite a área da Cidade 1 (em km²): ");
    scanf("%f", &cidade1.area);
    printf("Digite o PIB da Cidade 1 (em bilhões): ");
    scanf("%f", &cidade1.pib);

    // Cadastro dos dados da cidade 2
    printf("\nDigite o nome da Cidade 2: ");
    scanf("%s", cidade2.nome);
    printf("Digite o código da Cidade 2: ");
    scanf("%s", cidade2.codigo);
    printf("Digite a população da Cidade 2: ");
    scanf("%d", &cidade2.populacao);
    printf("Digite a área da Cidade 2 (em km²): ");
    scanf("%f", &cidade2.area);
    printf("Digite o PIB da Cidade 2 (em bilhões): ");
    scanf("%f", &cidade2.pib);

    // Comparação dos atributos
    printf("\nComparando as cidades...\n");
    compararPopulacao(cidade1, cidade2);
    compararArea(cidade1, cidade2);
    compararPIB(cidade1, cidade2);

    return 0;
}
