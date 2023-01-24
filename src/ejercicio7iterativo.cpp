#include <iostream>
#include <assert.h>
using namespace std;

int sumaDivisores(int n){
    int suma = 0;

    for(int divisor = 1; divisor <= n; divisor++){
        if(n % divisor == 0){
            suma += divisor;
        }
    }
    return suma;
}

int main() {
    int n = 0;
    cout << "Ingrese el numero que desea la calcular la suma de todos sus divisores: " << endl;
    cin >> n;

    int res = sumaDivisores(n);
    
    cout << "La suma de todos los divisores de " << n << " es igual a " << res << endl;
    return 0;
}