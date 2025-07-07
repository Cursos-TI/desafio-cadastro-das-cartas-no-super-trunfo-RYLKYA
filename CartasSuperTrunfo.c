#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

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
    fgets(cidade1, 50, stdin);
    
    printf("População da Cidade: "); //Inserir a População da 1⁰ carta
    scanf("%d", populacao1);
    
    printf("Área em KM²: ");
    scanf("%.2f", &area1);

    return 0;