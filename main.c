#include <stdio.h>
#include <string.h>
#include "cadenas.h"
#include "cadenas.c"

int main() {
    char V1[] = "murcielago";
    char V2[] = "ordenador";
    char V3[100];
    int opcion;
    
    do {
        printf("\nMENÚ DEL PROGRAMA\n");
        printf("1. Contar vocales en V1 (recursivo)\n");
        printf("2. Eliminar consonantes de V2 (recursivo)\n");
        printf("3. Intercalar letras de V1 y V2 (recursivo)\n");
        printf("4. Duplicar cada letra de V1 (recursivo)\n");
        printf("5. Convertir V1 y V2 a minúsculas (iterativo)\n");
        printf("6. Convertir V1 y V2 a minúsculas (recursivo)\n");
        printf("7. Ordenar V1+V2 alfabéticamente (recursivo)\n");
        printf("0. Salir\n");
        printf("Seleccione opción: ");
        scanf("%d", &opcion);
        
        switch(opcion) {
            case 1:
                printf("Número de vocales en V1: %d\n", contarVocales(V1));
                break;
            case 2:
                eliminarConsonantes(V2, V3);
                printf("V2 sin consonantes: %s\n", V3);
                break;
            case 3:
                intercalarCadenas(V1, V2, V3);
                printf("Cadenas intercaladas: %s\n", V3);
                break;
            case 4:
                duplicarLetras(V1, V3);
                printf("V1 duplicado: %s\n", V3);
                break;
            case 5:
                aMinusculas_Iterativo(V1);
                aMinusculas_Iterativo(V2);
                printf("V1 en minúsculas: %s\n", V1);
                printf("V2 en minúsculas: %s\n", V2);
                break;
            case 6:
                aMinusculas_Recursivo(V1);
                aMinusculas_Recursivo(V2);
                printf("V1 en minúsculas: %s\n", V1);
                printf("V2 en minúsculas: %s\n", V2);
                break;
            case 7:
                strcpy(V3, V1);
                strcat(V3, V2);
                ordenarCadena(V3, 0, strlen(V3) - 1);
                printf("Cadena ordenada: %s\n", V3);
                break;
            case 0:
                printf("Saliendo...\n");
                break;
            default:
                printf("Opción inválida.\n");
                break;
        }
    } while (opcion != 0);
    
    return 0;
}