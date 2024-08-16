#include <stdio.h>

int main() {
    float lado, area, resultado;
    
    printf("Digite o lado do quadrado: ");
    scanf("%f", &lado);
    
    area = lado * lado;
    resultado = 2 * area;
    
    printf("O dobro da área é: %.2f\n", resultado);
    
    return 0;
}
