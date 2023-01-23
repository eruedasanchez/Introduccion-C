#include <iostream>
#include <assert.h>
using namespace std;

int combinatorio(int n, int k){
    assert(n >= k);

    if (n == k){
        return 1;
    }

    if (k == 1){
        return n;
    } else {
        return combinatorio(n-1, k) + combinatorio(n-1, k-1);
    }
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



