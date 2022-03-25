//Nombre: GOMEZ NIETO ALEJANDRO
//TP Nº 1
//EJ Nº 12
//Comentarios: Hacer un programa para ingresar por teclado la fecha de nacimiento de una persona, ingresando día, mes y año como 3 datos individuales. Luego ingresar la fecha actual ingresando día, mes y año como 3 datos individuales. Calcular luego la edad en años de esa persona y listarlo por pantalla.

#include <iostream>
using namespace std;

int main (void){
  int d1, m1, a1, d2, m2, a2, result;

  cout <<"ingrese dia de la primera fecha: ";
  cin >> d1;
  cout <<"ingrese mes de la primera fecha: ";
  cin >> m1;
  cout <<"ingrese año de la primera fecha: ";
  cin >> a1;

  cout <<"ingrese dia de la segunda fecha: ";
  cin >> d2;
  cout <<"ingrese mes de la segunda fecha: ";
  cin >> m2;
  cout <<"ingrese año de la segunda fecha: ";
  cin >> a2;

  result = a2 - a1;

  if (m1 > m2){
    result--;
  }

  if (m1 == m2 && d1 > d2){
    result--;
  }

    cout << endl << "La edad es " << result;

  return 0;
}
