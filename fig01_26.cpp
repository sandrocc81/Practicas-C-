//Programa: Recibir tres numeros, calcular suma, promedio, producto, mayor y menor de ellos

#include <iostream>
using namespace std;

int main()
{
    //declaramos tres variables tipo entero
    int num1, num2, num3, sum, prom, menor, mayor;

    //solicitamos los valores al usuario en pantalla
    cout << "Teclea el primer valor: ";
    cin >> num1;
    cout << "Teclear el segndo valor: ";
    cin >> num2;
    cout << "Teclea el tercer valor: ";
    cin >> num3;

    //realizamos operaciones y las enviamos a la salida
    //calcular la suma
    sum = num1 + num2 +num3;
    cout << "\nLa suma de los numeros es: " << sum;
    
    //calcular el promedio
    cout << "\nEl promedio de los tres numeros es: " << sum/3;

    //calcular el producto
    cout << "\nEl producto de los tres numeros es: " << num1 * num2 * num3;

    //mostrar el menor y el mayor de los numeros
    //encontrando el mayor
    mayor = num1;
    if (num2 > mayor)
        mayor = num2;
    if (num3 > mayor)
        mayor = num3;
    //encontrando el numero menor
    menor = num1;
    if(num2 < menor)
        menor = num2;
    if(num3 < menor)
        menor = num3;

    //imprimimos el valor mayo y menor
    cout << endl << "El valor mayor es: " << mayor;
    cout << endl << "El valor menor es: " << menor;

    cout << endl << "Fin de la aplicacion.";

    return 0;
        

        
}