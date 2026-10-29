#include <stdio.h>

int main() {
    char nome[50];
    float precoAnterior, precoAtual, variacao;
    int i;

    printf("=== ANALISADOR DE PRECOS ===\n\n");

    // Repete 3 vezes para os 3 produtos
    for (i = 1; i <= 3; i++) {
        printf("--- Produto %d ---\n", i);
        
        printf("Digite o nome do produto: ");
        scanf("%s", nome); // Lê o nome (digite sem espaços)
        
        printf("Digite o preco anterior (R$): ");
        scanf("%f", &precoAnterior);
        
        printf("Digite o preco atual (R$): ");
        scanf("%f", &precoAtual);
        
        // Calcula a variação percentual
        variacao = ((precoAtual - precoAnterior) / precoAnterior) * 100;
        
        // Mostra o resultado da variação
        printf("Variacao: %.2f%%\n", variacao);
        
        // Compara os preços
        if (precoAtual > precoAnterior) {
            printf("Status: AUMENTO (Ficou mais caro)\n");
        } else if (precoAtual < precoAnterior) {
            printf("Status: REDUCAO (Ficou mais barato)\n");
        } else {
            printf("Status: ESTAVEL (Mesmo preco)\n");
        }
        
        printf("------------------------\n\n");
    }

    return 0;
}