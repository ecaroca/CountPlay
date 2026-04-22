#include <stdio.h>

int main(void) {
    int opcion;
    double numero1;
    double numero2;
    double resultado;
    int continuar = 1;

    while (continuar == 1) {
        printf("\n=================================\n");
        printf("     Count Play\n");
        printf("=================================\n");
        printf("1. Suma\n");
        printf("2. Resta\n");
        printf("3. Multiplicacion\n");
        printf("4. Division\n");
        printf("5. Salir\n");
        printf("Opcion: ");
        scanf("%d", &opcion);

        if (opcion == 5) {
            printf("Saliendo de la calculadora...\n");
            break;
        }

        if (opcion < 1 || opcion > 5) {
            printf("Opcion no valida.\n");
            continue;
        }

        printf("Ingrese el primer numero: ");
        scanf("%lf", &numero1);

        printf("Ingrese el segundo numero: ");
        scanf("%lf", &numero2);

        switch (opcion) {
            case 1:
                resultado = numero1 + numero2;
                printf("Resultado: %.2lf\n", resultado);
                break;

            case 2:
                resultado = numero1 - numero2;
                printf("Resultado: %.2lf\n", resultado);
                break;

            case 3:
                resultado = numero1 * numero2;
                printf("Resultado: %.2lf\n", resultado);
                break;

            case 4:
                if (numero2 != 0) {
                    resultado = numero1 / numero2;
                    printf("Resultado: %.2lf\n", resultado);
                } else {
                    printf("Error: no se puede dividir por cero.\n");
                }
                break;
        }
    }

    return 0;
}