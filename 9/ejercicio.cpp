//Nombre: GOMEZ NIETO ALEJANDRO
//TP Nº 1
//EJ Nº 9
//Comentarios: Hacer un programa para ingresar tres números y listar el máximo de ellos.

#include <iostream>
using namespace std;

int main (void){
  int a, b, c, max;

  cout <<"ingrese el primer numero: ";
  cin >> a;
  cout <<"ingrese el segundo numero: ";
  cin >> b;
  cout <<"ingrese el tercero numero: ";
  cin >> c;

  if( a > b){
    max = a;
  } else {
    max = b;
  }

  if(c > max){
    max = c;
  }

  cout << endl << "El maximo es " << max;

  return 0;
}
