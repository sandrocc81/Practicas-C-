//fig 1.6
//realizar un programa que suma dos numeros enteros

#include <iostream>

using namespace std;

int main()
{
    //declaracion de variables enteras
    int num1, num2, suma;

    //pedimos el primer numero
    cout << "Teclee el primer valor: ";
    cin >> num1;
    cout << "Teclee el segundo valor: ";
    cin >> num2;
    suma = num1 + num2;
    cout << "La suma de: " << num1 << " + " << num2 << " es igual a: " << suma;

    return 0;
}
