//Nombre: GOMEZ NIETO ALEJANDRO
//TP Nº 1
//EJ Nº 11
//Comentarios: Hacer un programa para ingresar cinco números y listar cuántos de esos cinco números son positivos

#include <iostream>
using namespace std;

int main (void){
  int a, b, c, d, e, count;
  count = 0;

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

  if(a > 0){
    count++;
  }

  if(b > 0){
    count++;
  }

  if(c > 0){
    count++;
  }

  if(d > 0){
    count++;
  }

  if(e > 0){
    count++;
  }

  cout << endl << "Los numeros positivos son " << count;

  return 0;
}
