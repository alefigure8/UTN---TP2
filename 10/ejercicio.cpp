//Nombre: GOMEZ NIETO ALEJANDRO
//TP Nº 1
//EJ Nº 9
//Comentarios: Hacer un programa para ingresar tres números y listar el máximo de ellos.

#include <iostream>
using namespace std;

int main (void){
  int a, b, c, d, e, max;

  cout <<"ingrese el primer numero: ";
  cin >> a;
  cout <<"ingrese el segundo numero: ";
  cin >> b;
  cout <<"ingrese el tercero numero: ";
  cin >> c;
  cout <<"ingrese el cuarto numero: ";
  cin >> d;
  cout <<"ingrese el quinto numero: ";
  cin >> e;

  if( a > b){
    max = a;
  } else {
    max = b;
  }

  if(c > max){
    max = c;
  }

   if(d > max){
    max = d;
  }

   if(e > max){
    max = e;
  }

  cout << endl << "El maximo es " << max;

  return 0;
}
