#include <stdio.h>

int main() {
    char estado1[20];
    char codigo1[20];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosturisticos1;
    
    printf("Insira os dados da carta 1\n"); // Inserir os dados da 1⁰ carta
    printf("Nome do Estado (De A a H): "); // Inserir o Estado da 1⁰ carta
    scanf("%s", &estado1);
    
    printf("Código da carta (Estado escolhido + 01): "); // Inserir o Código da 1⁰ carta
    scanf("%s", &codigo1);
    
    printf("Nome da Cidade: "); // Inserir a Cidade da 1⁰ carta
    scanf("%s", &cidade1);
    
    printf("População da Cidade: "); //Inserir a População da 1⁰ carta
    scanf("%d", &populacao1);
    
    printf("Área em KM²: "); //Inserir a Área em KM²
    scanf("%f", &area1);
    
    printf("PIB da carta: "); //Inserir o PIB
    scanf("%f", &pib1);
    
    printf("Quantidade de Pontos Turísticos: "); //Inserir a Quantidade de Pontos Turísticos
    scanf("%d", &pontosturisticos1, "\n");
    
    printf("\n"); //Linha em branco com o propósito de deixar mais agradável a leitura
    
    printf("Dados da Carta 1: \n"); //Códigos para retornar os dados da Carta 1
    printf("Estado: %s\n", estado1);
    printf("Código da carta: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    
    return 0;
}    