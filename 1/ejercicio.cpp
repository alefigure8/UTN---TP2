//Nombre: GOMEZ NIETO ALEJANDRO
//TP Nº 1
//EJ Nº 1
//Comentarios: Hacer un programa para ingresar por teclado un número y luego emitir por pantalla un cartel aclaratorio indicando si el mismo es positivo, negativo o cero.
#include <iostream>
using namespace std;

int main (void){
  int num;

  cout << "ingresar un numero: ";
  cin >> num;

  if(num > 0){
    cout << num << " es positivo";
  } else {
    if(num < 0){
      cout << num << " es negativo";
    } else {
      cout << "Es cero";
    }
  }
    return 0;
}
