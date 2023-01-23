#include <iostream>
using namespace std;

int f(int x, int y){
return x + y;
}

int main() {
    int x = 0;
    cout << "Ingrese el primer valor para realizar la suma: " << endl;
    cin >> x;

    int y = 0;
    cout << "Ingrese el segundo valor para realizar la suma: " << endl;
    cin >> y;

    int res = f(x,y);
    
    cout << "El resultado es de la suma entre " << x << " y " << y << " es igual a: " << res << endl;
    return 0;
}