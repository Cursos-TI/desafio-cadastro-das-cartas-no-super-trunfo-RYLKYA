#include <stdio.h>

int main() {
    char estado1[20];
    char codigo1[20];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosturisticos1;
    
    char estado2[20];
    char codigo2[20];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;
    
    printf("Insira os dados da carta 1\n"); // Inserir os dados da 1⁰ carta
    printf("Nome do Estado (De A até H): \n"); // Inserir o Estado da 1⁰ carta
    scanf("%s", &estado1);
    
    printf("\n");
    
    printf("Código da carta (O Estado + um número de 01 até 04): \n"); // Inserir o Código da 1⁰ carta
    scanf("%s", &codigo1);
    
    printf("\n");
    
    printf("Nome da Cidade (Sem Espaços): \n"); // Inserir a Cidade da 1⁰ carta
    scanf("%s", &cidade1);
    
    printf("\n");
    
    printf("População da Cidade: \n"); //Inserir a População da 1⁰ carta
    scanf("%d", &populacao1);
    
    printf("\n");
    
    printf("Área em KM²: \n"); //Inserir a Área em KM²
    scanf("%f", &area1);
    
    printf("\n");
    
    printf("PIB da carta: \n"); //Inserir o PIB
    scanf("%f", &pib1);
    
    printf("\n");
    
    printf("Quantidade de Pontos Turísticos: \n"); //Inserir a Quantidade de Pontos Turísticos
    scanf("%d", &pontosturisticos1, "\n");
    
    float mediaDensidade1 = (populacao1 + area1) / 2;
    float mediaPibPerCapita1 = (pib1 + populacao1) / 2;
    
    printf("\n");
    printf("\n");
    
    printf("Agora, insira os dados da carta 2\n"); // Inserir os dados da 2⁰ carta
    printf("Nome do Estado (De A até H): \n"); // Inserir o Estado da 2⁰ carta
    scanf("%s", &estado2);
    
    printf("\n");
    
    printf("Código da carta (O Estado + um número de 01 até 04): \n"); // Inserir o Código da 1⁰ carta
    scanf("%s", &codigo2);
    
    printf("\n");
    
    printf("Nome da Cidade: \n"); // Inserir a Cidade da 1⁰ carta
    scanf("%s", &cidade2);
    
    printf("\n");
    
    printf("População da Cidade: \n"); //Inserir a População da 1⁰ carta
    scanf("%d", &populacao2);
    
    printf("\n");
    
    printf("Área em KM²: \n"); //Inserir a Área em KM²
    scanf("%f", &area2);
    
    printf("\n");
    
    printf("PIB da carta: \n"); //Inserir o PIB
    scanf("%f", &pib2);
    
    printf("\n");
    
    printf("Quantidade de Pontos Turísticos: \n"); //Inserir a Quantidade de Pontos Turísticos
    scanf("%d", &pontosturisticos2, "\n");
    
    float mediaDensidade2 = (populacao2 + area2) / 2;
    float mediaPibPerCapita2 = (pib2 + populacao2) / 2;
    
    printf("\n");
    printf("\n");
    printf("\n");
    
    printf("Dados da Carta 1: \n"); //Códigos para retornar os dados da Carta 1
    printf("Estado: %s\n", estado1);
    printf("Código da carta: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área em KM²: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosturisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", mediaDensidade1);
    printf("PIB Per Capita: %.2f reais\n", mediaPibPerCapita1);
    
    
    printf("\n");
    printf("\n");
    
    printf("Dados da Carta 2: \n"); //Códigos para retornar os dados da Carta 2
    printf("Estado: %s\n", estado2);
    printf("Código da carta: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área em KM²: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turísticos: %d", pontosturisticos2);    
    printf("Densidade Populacional: %.2f hab/km²\n", mediaDensidade2);
    printf("PIB Per Capita: %.2f reais\n", mediaPibPerCapita2);
    
    
    return 0;
}    