#include <stdio.h>
#include <math.h>

int main() {
    float num1, num2, resultado1, resultado2, resultado3;
    
    printf("Digite o primeiro número: ");
    scanf("%f", &num1);
    
    printf("Digite o segundo número: ");
    scanf("%f", &num2);
    
    resultado1 = 2 * num1 * num2;
    resultado2 = (3 * num1) + (num2 / 2);
    resultado3 = sqrt(num1 + num2);
    
    printf("Produto do dobro do primeiro número: %.2f\n", resultado1);
    printf("Soma do triplo do primeiro com a metade do segundo: %.2f\n", resultado2);
    printf("Raiz quadrada da soma dos números: %.2f\n", resultado3);
    
    return 0;
}
