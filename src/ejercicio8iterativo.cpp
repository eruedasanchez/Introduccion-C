#include <iostream>
#include <assert.h>
using namespace std;

int factorial(int num){
    int fact = 1;
    
    for(int i = 1; i <= num; i++){
        fact = fact * i;
    }
    return fact;
}

int combinatorio(int n, int k){
    assert(n >= k);
    int res = factorial(n) / (factorial(k) * factorial(n-k)); 
    return res;
}

int main() {
    int n = 0;
    cout << "Ingrese el primer numero para calcular el combinatorio: " << endl;
    cin >> n;

    int k = 0;
    cout << "Ingrese el segundo numero para calcular el combinatorio: " << endl;
    cin >> k;

    int res = combinatorio(n,k);
    
    cout << "El numero combinatorio entre " << n << " y " << k << " es igual a " << res << endl;
    return 0;
}
