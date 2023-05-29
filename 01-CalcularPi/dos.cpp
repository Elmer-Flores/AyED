#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

double pi_original(int iteraciones) {
    double pi = 0;
    int inicio = 0;
    for (inicio; inicio < iteraciones; ++inicio) {
        pi += pow(-1, inicio) / (2*inicio + 1);
    }
    return pi*4;
}


int main() {
    cout << setprecision(7);
    cout << pi_original(1000000) << endl;
    return 0;
}