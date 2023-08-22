#include <stdio.h>
#include<math.h>
int main() {
    int numero1, numero2, add, mult;
    float divs, subt, restoda;

    printf("Digite dois numeros: ");
    scanf("%d %d", &numero1, &numero2);

    add = numero1 + numero2;
    mult = numero1 * numero2;
    divs = (float)numero1 / (float)numero2;
    subt = numero1 - numero2;

    printf("Soma: %d \nMultiplicacao: %d \nSubtracao: %d\nDivisao: %.2f", add, mult, subt, divs);
    
    
    restoda = numero1%numero2;
    printf("\nResto da divisao: %d " , restoda);

}
