//Nombre: GOMEZ NIETO ALEJANDRO
//TP Nº 1
//EJ Nº 12
//Comentarios: Hacer un programa para ingresar por teclado las cuatro notas de los exámenes obtenidas por un alumno y luego emitir uno solo de los cartel de acuerdo a las siguientes condiciones.

#include <iostream>
using namespace std;

int main (void){
  int a, b, c, d;

  cout <<"ingrese el primer numero: ";
  cin >> a;
  cout <<"ingrese el segundo numero: ";
  cin >> b;
  cout <<"ingrese el tercer numero: ";
  cin >> c;
  cout <<"ingrese el cuarto numero: ";
  cin >> d;

 if(a <= b && b <= c && c <= d){
   cout << "Los numeros estan ordenados";
 } else {
   cout << "Los numeros no estan ordenados";
 }
  return 0;
}
