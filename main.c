#include <stdio.h>
#include <stdlib.h>

(a)
int main()
{
    printf("**********\n");
    printf("*        *\n");
    printf("*        *\n");
    printf("*        *\n");
    printf("*        *\n");
    printf("*        *\n");
    printf("*        *\n");
    printf("**********\n");

    printf("***\n");
printf(  "*     *\n");
printf(" *       *\n");
printf("*        *\n");
printf("*        *\n");
printf(" *       *\n");
    printf("***\n");

    printf("*\n");
   printf("***\n");
printf("  ****\n");
printf(" *****\n");
printf("*******\n");
printf("*********\n");
printf("    * \n");
printf("    * \n");


 printf("   *  \n");
 printf(" *   *\n");
 printf("*     *\n");
printf("*       *\n");
printf(" *     *\n");
printf("    * \n");

   return 0;
}

c)
#include <stdio.h>

int main() {
    int num1, num2;

    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &num1);

    printf("Digite o segundo número inteiro: ");
    scanf("%d", &num2);

    return 0;
}


(d)
#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (9 * celsius + 160) / 5;

     printf("A temperatura em fahrenheit é: %.2f \n", fahrenheit);

    return 0;
}


(e) 
#include <stdio.h>

int main() {
    float fahrenheit, celsius;

    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &fahrenheit);

     printf("A temperatura em celsius é: %.2f \n", celsius);

    return 0;
}

(f) 
#include <stdio.h>
#define PI 3.14159

int main() {
    float raio, altura, volume;

    printf("Digite o raio da base da lata (em cm): ");
    scanf("%f", &raio);

    printf("Digite a altura da lata (em cm): ");
    scanf("%f", &altura);

    volume = PI * raio * raio * altura;

    printf("Valor do volume é %.2f\n", volume);

    return 0;
}
