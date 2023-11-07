#include <iostream>
#include <cmath>

using namespace std;

int main() {
    for (int a = 3; a < 4; a++) {
        cout << "Introduzca el valor de a, siendo este el primer lado del triangulo: ";
        cin >> a;
        for (int b = 4; b < 5; b++) {
            cout << "Introduzca el valor de b, siendo este el segundo lado del triangulo: ";
            cin >> b;
            int c = sqrt((a^2) + (b^2));
            cout << "\nEl valor del tercer lado del triangulo es: " << c << endl;
            cout << "Lo resolvemos gracias a la formula de Pitagoras" <<endl;



            return 0;
        }
        return 0;
    }
    return 0;
}