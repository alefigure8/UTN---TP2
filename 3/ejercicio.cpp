//Nombre: GOMEZ NIETO ALEJANDRO
//TP Nº 1
//EJ Nº 3
//Comentarios: Hacer un programa para ingresar por teclado un número y luego informar por pantalla con un cartel aclaratorio si el mismo es par o impar

#include <iostream>
using namespace std;

int main (void){
   int num;

   cout << "Ingrese un numero: ";
   cin >> num;

   if(num % 2 == 0){
     cout << endl << num << " es par";
   } else {
     cout << endl << num << " es impar";
   }

  return 0;
}
