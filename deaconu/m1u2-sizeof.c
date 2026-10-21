#include <stdio.h>

int main() {

  // size of enum is size of int.
double suma_int = sizeof(char) + sizeof(unsigned char) + sizeof(int) + 
                      sizeof(short) + sizeof(unsigned short) + 
                      sizeof(int) + sizeof(unsigned int) + 
                      sizeof(long) + sizeof(unsigned long);
    double media_int = suma_int / 9.0;

    
    double suma_reale = sizeof(float) + sizeof(double) + sizeof(long double);
    double media_reale = suma_reale / 3.0;

    printf("Media octetilor pentru tipurile intregi: %.2f\n", media_int);
    printf("Media octetilor pentru tipurile reale: %.2f\n", media_reale);

    return 0;
}