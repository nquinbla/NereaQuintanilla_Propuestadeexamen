#include <iostream>
#include <cmath>

using namespace std;

int main() {
    for (int a = 3; a < 8; a++) {
        cout << "Introduzca el valor de a, siendo este el primer lado del triangulo: ";
        cin >> a;
        for (int b = 4; b < 15; b++) {
            cout << "Introduzca el valor de b, siendo este el segundo lado del triangulo: ";
            cin >> b;

            int c = sqrt((a^2) + (b^2));
            cout << "El valor de c es: " << c << endl;

            if ( c == floor(c) && a + b > c) {
                cout << "El triangulo cumple que a + b > c" << endl;
            }
            else {
                cout << "El triangulo no cumple a + b > c" << endl;
            }


            return 0;
        }
        return 0;
    }


    return 0;
}