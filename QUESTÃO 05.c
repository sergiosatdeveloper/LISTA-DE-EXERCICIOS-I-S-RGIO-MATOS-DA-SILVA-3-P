#include <stdio.h>

int main() {
    float custoFabrica, custoFinal;
    
    printf("Digite o custo de fábrica do carro: ");
    scanf("%f", &custoFabrica);
    
    custoFinal = custoFabrica + (custoFabrica * 0.28) + (custoFabrica * 0.45);
    
    printf("O custo final ao consumidor é: R$ %.2f\n", custoFinal);
    
    return 0;
}
