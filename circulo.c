#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float raioCirculo;
    float area; 
    float perimetro;

    printf("Qual o tamanho do raio do círculo? (Em centímetros)\n");
    scanf("%f", &raioCirculo);

    area = (raioCirculo * raioCirculo) * 3.14;
    perimetro = (2 * 3.14) * raioCirculo;

    printf("A área do círculo é: %.2fcm\n", area);
    printf("O perímetro do círculo é: %.2fcm\n", perimetro);
    
    return 0;
}