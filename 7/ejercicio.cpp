//Nombre: GOMEZ NIETO ALEJANDRO
//TP Nº 1
//EJ Nº 5
//Comentarios: Hacer un programa para ingresar por teclado tres números e informar con una leyenda aclaratoria si los tres son todos distintos entre sí, caso contrario no emitir nada.

#include <iostream>
using namespace std;

int main (void){
  int a, b, c;

  cout <<"ingrese el primer numero: ";
  cin >> a;
  cout <<"ingrese el segundo numero: ";
  cin >> b;
  cout <<"ingrese el tercero numero: ";
  cin >> c;

  if((a != b) && (b != c) && (a != c)){
    cout << "Los numeros son distintos";
  }

  return 0;
}
