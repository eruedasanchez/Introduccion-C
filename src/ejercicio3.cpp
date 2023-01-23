#include <iostream>
using namespace std;

int f(int x, int y){
    if(x > y){
        return x + y;
    } else {
        return x * y;
    }

}

int main() {
    int x = 0;
    cout << "Ingrese el primer valor para realizar la operacion: " << endl;
    cin >> x;

    int y = 0;
    cout << "Ingrese el segundo valor para realizar la operacion: " << endl;
    cin >> y;

    int res = f(x,y);
    
    cout << "El resultado de la operacion entre " << x << " y " << y << " es igual a: " << res << endl;
    return 0;
}