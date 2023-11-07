#include <iostream>
#include <cmath>

using namespace std;

int main() {
    for (int a = 1; a <= 100; a++) { // Iniciamos el bucle for para a
        cout << "Introduzca el valor de a, siendo este el primer lado del triangulo: "; // Introducimos el valor de a
        cin >> a; // Leemos el valor de a

        for (int b = a; b <= 100; b++) { // Iniciamos el bucle for para b
            cout << "Introduzca el valor de b, siendo este el segundo lado del triangulo: "; // Introducimos el valor de b
            cin >> b; // Leemos el valor de b

            int c = sqrt((a^2) + (b^2)); // Calculamos el valor de c

            if ( c == floor(c) && a + b > c) {
                cout << "El triangulo cumple que a + b > c" << endl;
            }
            else {
                cout << "El triangulo no cumple a + b > c" << endl;
            }


            if ( c == floor((a^2) + (b^2))) {
                cout << "Y los tres lados forman un triangulo pitagorico" << endl;
                cout << "El valor de c es: " << c << endl;
            }
            else {
                cout << "Y los tres lados no forman un triangulo pitagorico" << endl;
            }



            return 0;
        }

    }

}