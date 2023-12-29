//fig 1.14
//empleo de la instruccion if, pide dos numeros y describe su relacion

#include <iostream>

using namespace std;

int main()
{
    int num1, num2;
    cout << "Relaciones entre dos numeros. \n";

    cout << "Teclea un numero: ";
    cin >> num1;

    cout << "Teclee otro numero: ";
    cin >> num2;

    cout << endl << "Las relaciones son las siguientes:";

    //Describimos las relaciones usando la funcion si

    if(num1 == num2 )
        cout << "\nLos numeros " << num1 << " y " << num2 << "son identicos";

   if(num1 != num2 )
        cout << "\nLos numeros " << num1 << " y " << num2 << " son distintos";
    
   if(num1 <= num2 )
        cout << "\nEl numero " << num1 << " es menor o igual a " << num2;

   if(num1 >= num2 )
        cout << "\nEl numero " << num1 << " es mayor o igual a " << num2;

  if(num1 < num2 )
        cout << "\nEl numero " << num1 << " es menor a " << num2;   

  if(num1 > num2 )
        cout << "\nEl numero " << num1 << " es mayor a " << num2;     

    cout << "\nFin del programa.";

    return 0;
}
