#include <iostream>
#include <assert.h>
using namespace std;

int sumaMenoresImparesQue(int n){
    int suma = 0;

    for(int i = 0; i < n; i++){
        if(i % 2 == 1){
            suma += i;
        }
    }
    return suma;
}

int main() {
    int n = 0;
    cout << "Ingrese el numero que desea la calcular la suma de todos los menores impares: " << endl;
    cin >> n;

    int res = sumaMenoresImparesQue(n);
    
    cout << "La suma de todos los numeros menores impares a " << n << " es igual a " << res << endl;
    return 0;
}