#include <stdio.h>

int main() {
    float tempo, velocidade, distancia, litros;
    
    printf("Digite o tempo gasto na viagem (em horas): ");
    scanf("%f", &tempo);
    
    printf("Digite a velocidade média (em km/h): ");
    scanf("%f", &velocidade);
    
    distancia = tempo * velocidade;
    litros = distancia / 12.0;
    
    printf("A quantidade de litros de gasolina utilizada foi: %.2f litros\n", litros);
    
    return 0;
}
