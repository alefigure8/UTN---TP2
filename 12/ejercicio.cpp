//Nombre: GOMEZ NIETO ALEJANDRO
//TP Nº 1
//EJ Nº 12
//Comentarios: Hacer un programa para leer tres números diferentes y determinar e informar el número del medio. Ejemplo: si se ingresan 6, 10, 8, se emitirá 8.

#include <iostream>
using namespace std;

int main (void){
  int a, b, c, mid;

  cout <<"ingrese el primer numero: ";
  cin >> a;
  cout <<"ingrese el segundo numero: ";
  cin >> b;
  cout <<"ingrese el tercero numero: ";
  cin >> c;

  if(a > b && b < c){
    mid = b;
  }

  if(a > c && c < b){
    mid = c;
  }

  if(b > a && a < c){
    mid = a;
  }

  if(b > c && c < a){
    mid = c;
  }

  if(c > b && b < a){
    mid = b;
  }

  if(c > a && a < b){
    mid = a;
  }

   cout << endl << "El del medio es " << mid;

  return 0;
}
