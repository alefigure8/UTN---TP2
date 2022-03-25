//Nombre: GOMEZ NIETO ALEJANDRO
//TP Nº 1
//EJ Nº 12
//Comentarios: n año es bisiesto si es múltiplo de 4, exceptuando a los años que son múltiplos de 100 pero que no sean múltiplos de 400. Esto último significa que el año 1900 no es bisiesto, pero el año 2000 si lo es. Hacer un programa para que ingresar un año y listar por pantalla si es bisiesto o no lo es.

#include <iostream>
using namespace std;

int main (void){
  int a;

  cout <<"ingrese el año: ";
  cin >> a;

  if((a % 100 == 0 ) && (a % 400 == 0)){
    cout << endl << "El año " << a << " es bisiesto";
  } else if ((a % 4 == 0) && (a % 100 != 0)){
    cout << endl << "El año " << a << " es bisiesto";
  } else {
    cout << endl << "El año " << a << " no es bisiesto";
  }
  return 0;
}
