//Nombre: GOMEZ NIETO ALEJANDRO
//TP Nº 1
//EJ Nº 5
//Comentarios: Hacer un programa para ingresar por teclado tres números y luego determinar e informar con una leyenda aclaratoria si los tres son iguales entre sí, caso contrario no emitir nada. 

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

  if((a == b) && (b == c)){
    cout << "Los numeros son iguales";
  } else {
    cout << "Los numeros no son iguales";
  }

  return 0;
}
