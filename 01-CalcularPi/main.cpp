#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;


double pi_calculo() {
    double pi = 0;
    double numerador = 1;
    double denominador = 1;
    double iteraciones = 0;
    double piSiguiente = 0;

    do {
        pi = pi + (numerador/denominador); // 1 - 1/3 + 1/5 - 1/7
        denominador += 2;
        numerador *= -1;
        piSiguiente = pi + (numerador/denominador); // -1/3 + 1/5 - 1/7 + 1/9
        iteraciones++;
    } while (abs(pi-piSiguiente) > 0.0000001);

    return pi*4;
}


int main() {
    cout << setprecision(7);
    cout << pi_calculo();
    return 0;
}