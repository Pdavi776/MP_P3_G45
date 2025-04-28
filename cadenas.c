#include "cadenas.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>

// Opción 1
int contarVocales(const char *cadena) {
    if (*cadena == '\0') return 0;
    char c = tolower(*cadena);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') +
           contarVocales(cadena + 1);
}

// Opción 2
void eliminarConsonantes(const char *origen, char *destino) {
    if (*origen == '\0') {
        *destino = '\0';
        return;
    }
    char c = tolower(*origen);
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
        *destino = *origen;
        eliminarConsonantes(origen + 1, destino + 1);
    } else {
        eliminarConsonantes(origen + 1, destino);
    }
}

// Opción 3
void intercalarCadenas(const char *v1, const char *v2, char *v3) {
    if (*v1 == '\0' && *v2 == '\0') {
        *v3 = '\0';
        return;
    }
    if (*v1 != '\0') {
        *v3 = *v1;
        v3++;
        v1++;
    }
    if (*v2 != '\0') {
        *v3 = *v2;
        v3++;
        v2++;
    }
    intercalarCadenas(v1, v2, v3);
}

// Opción 4
void duplicarLetras(const char *origen, char *destino) {
    if (*origen == '\0') {
        *destino = '\0';
        return;
    }
    *destino = *origen;
    *(destino + 1) = *origen;
    duplicarLetras(origen + 1, destino + 2);
}

// Opción 5
void aMinusculas_Iterativo(char *cadena) {
    for (int i = 0; cadena[i] != '\0'; i++) {
        cadena[i] = tolower(cadena[i]);
    }
}

// Opción 6
void aMinusculas_Recursivo(char *cadena) {
    if (*cadena == '\0') return;
    *cadena = tolower(*cadena);
    aMinusculas_Recursivo(cadena + 1);
}

// Opción 7 (quicksort)
void ordenarCadena(char *cadena, int izquierda, int derecha) {
    if (izquierda >= derecha) return;

    int i = izquierda;
    int j = derecha;
    char pivote = cadena[(izquierda + derecha) / 2];

    while (i <= j) {
        while (cadena[i] < pivote) i++;
        while (cadena[j] > pivote) j--;
        if (i <= j) {
            char temp = cadena[i];
            cadena[i] = cadena[j];
            cadena[j] = temp;
            i++;
            j--;
        }
    }

    ordenarCadena(cadena, izquierda, j);
    ordenarCadena(cadena, i, derecha);
}