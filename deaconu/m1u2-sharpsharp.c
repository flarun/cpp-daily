#include <stdio.h>

// Definim o macrocomandă care creează o funcție sau un nume combinat
#define CREEAZA_VARIABILA(nume, numar) nume ## numar

int main() {
    // Prin expansiune, "val" ## "1" devine variabila "val1"
    int CREEAZA_VARIABILA(val, 1) = 10; 
    int CREEAZA_VARIABILA(val, 2) = 20;

    printf("val1 = %d\n", val1); // Va afișa 10
    printf("val2 = %d\n", val2); // Va afișa 20

    return 0;
}