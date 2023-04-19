//A través de una función que reciba por referencia un número entero,
// calcular el cubo de dicho número y mostrarlo en el bloque principal de ejecución del programa.

#include <stdio.h>
int cubo (int *n)
{
    int r;
    r=(*n)*(*n)*(*n);
    return r;
}
int main() {
    int n;
    printf("Ingrese un entero:\n");
    scanf ("%d",&n);
    int resultado = cubo(&n);
    printf("El cubo de %d es:%d.\n", n, resultado);
    return 0;
}
