//Nombre: GOMEZ NIETO ALEJANDRO
//TP Nº 1
//EJ Nº 1
//Comentarios: Hacer un programa para ingresar por teclado dos números y luego informar por pantalla con un cartel aclaratorio si el primer número es múltiplo del segundo..

#include <iostream>
using namespace std;

int main (void){
  int num1, num2;

  cout << "Ingrese un numero: ";
  cin >> num1;
  cout << "Ingrese otro numero: ";
  cin >> num2;

  if(num1 % num2 == 0){
    cout << endl << num1 << " es multiplo de " << num2;
  } else {
    cout << endl << num1 << " no es multiplo de " << num2;
  }

    return 0;
}
