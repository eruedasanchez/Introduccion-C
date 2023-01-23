#include <iostream>
#include <assert.h>
using namespace std;

int sumaMenoresImparesQue(int n){
    if (n == 1){
        return 0;
    } else if (n % 2 == 0) {
        /* Caso par */
         return sumaMenoresImparesQue(n-1) + (n-1); 
    } else {
        /* Caso impar */
        return sumaMenoresImparesQue(n-1);

    }
}

int main() {
    int n = 0;
    cout << "Ingrese el numero que desea la calcular la suma de todos los menores impares: " << endl;
    cin >> n;

    int res = sumaMenoresImparesQue(n);
    
    cout << "La suma de todos los numeros menores impares a " << n << " es igual a " << res << endl;
    return 0;
}