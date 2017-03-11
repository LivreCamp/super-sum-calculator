/* Super Sum Calculator
 * Esse é um código de uma super calculadora
 * Ela pode somar números que o resultado pode ser até 2^31-1
 */
#include <stdio.h>

int main() {
    /* variaveis */
    int numX;       // guarda o numero A
    int numY;       // guarda o numero B
    int resultado;  // guarda o resultado

    /* mensagens para o usuario */
    printf("Copyright LivreCamp©. Todos direitos reservados.\n");
    printf("Sou um programa que soma dois números inteiros X e Y.\n");

    /* entrada de dados */
    printf("Digite o número X: ");
    scanf("%d", &numX);
    printf("Digite o número Y: ");
    scanf("%d", &numY);

    /* calculo do resultado */
    resultado = numX - numY;

    /* saida de dados */
    printf("O resultado é %d.\n", resultado);
}
