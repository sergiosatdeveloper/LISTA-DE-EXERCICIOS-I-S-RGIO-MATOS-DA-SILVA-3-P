#include <stdio.h>

int main() {
    float pesoPescado, excesso, multa;
    
    printf("Digite a quantidade de Kg de peixe pescado: ");
    scanf("%f", &pesoPescado);
    
    if (pesoPescado > 50) {
        excesso = pesoPescado - 50;
        multa = excesso * 4.0;
        printf("Excesso: %.2f Kg\n", excesso);
        printf("Multa a pagar: R$ %.2f\n", multa);
    } else {
        printf("Nenhum excesso. Nenhuma multa a pagar.\n");
    }
    
    return 0;
}
