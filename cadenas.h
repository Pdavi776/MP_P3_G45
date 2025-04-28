#ifndef CADENAS_H
#define CADENAS_H

// Declaraciones de funciones

int contarVocales(const char *cadena);
void eliminarConsonantes(const char *origen, char *destino);
void intercalarCadenas(const char *v1, const char *v2, char *v3);
void duplicarLetras(const char *origen, char *destino);
void aMinusculas_Iterativo(char *cadena);
void aMinusculas_Recursivo(char *cadena);
void ordenarCadena(char *cadena, int izquierda, int derecha);

#endif