//Nombre: GOMEZ NIETO ALEJANDRO
//TP Nº 1
//EJ Nº 4
//Comentarios: Hacer un programa para ingresar por teclado dos números y luego informar por pantalla la diferencia absoluta entre ambos.

#include <iostream>
using namespace std;

int main (void){
   int num1, num2;

  cout << "Ingrese un numero: ";
  cin >> num1;
  cout << "Ingrese otro numero: ";
  cin >> num2;

  if((num1 > 0 && num2 < 0) || (num2 > 0 && num1 < 0)){
    cout << "El numero absoluto es: ";
    num1 < 0 ? cout << (num1 - num1 * 2) + num2 : cout << num2 + (num1 - num1 * 2);
  } else {
    cout << "El numero absoluto es: ";
    num1 < num2 ? cout << num2 - num1 : cout << num1 - num2;
  }

  return 0;
}
