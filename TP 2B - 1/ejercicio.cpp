//Nombre: GOMEZ NIETO ALEJANDRO
//TP Nº 2B
//EJ Nº 1
//Comentarios: 

#include <iostream>
using namespace std;

int main (void){
  char option;
  string lenguage;
  int price, hour;
  bool urgent;

  cout << "Indique el tipo de lenguaje: ";
  cin >> option;
  cout << "Indique la cantidad de horas: ";
  cin >> hour;
  cout << "Indique si es de carcter urgente: ";
  cin >> urgent;

  switch(option){
    case 'C':
      price = hour * 2500;
      lenguage = "C++";
      break;
    case '#':
      price = hour * 2100;
      lenguage = "C#";
      break;
    case 'p':
      price = hour * 1400;
      lenguage = "Python";
      break;
    case 'G':
      price = hour * 2000;
      lenguage = "Go";
      break;
    default:
      cout << "Error al elegir el lenguaje";
      break;
  }

  if(urgent){
    price = price*2.20;
  }

  cout << endl << "Lenguage: " << lenguage
       << endl << "Cantidad de horas: " << hour
       << endl << "El precio del proyecto es: $" << price;

  return 0;
}
