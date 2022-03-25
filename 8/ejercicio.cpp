//Nombre: GOMEZ NIETO ALEJANDRO
//TP Nº 1
//EJ Nº 5
//Comentarios:Basado en los 2 ejercicios anteriores, hacer un programa para ingresar por teclado la longitud de los tres lados de un triángulo y luego listar que tipo de triángulo es.

#include <iostream>
using namespace std;

int main (void){
  int a, b, c;

  cout <<"ingrese la primera longitud del triangulo: ";
  cin >> a;
  cout <<"ingrese la primera longitud del triangulo: ";
  cin >> b;
  cout <<"ingrese la primera longitud del triangulo: ";
  cin >> c;

  if((a == b) && (b == c)){
    cout << endl << "El triangulo es equilatero";
  } else if ((a!=b) && (b!=c) && (c != a)){
    cout << endl << "El triangulo es Escaleno";
  } else {
    cout << endl << "El triangulo es Isosceles";
  }

  return 0;
}
