//Nombre: GOMEZ NIETO ALEJANDRO
//TP Nº 2B
//EJ Nº 3
//Comentarios:

#include <iostream>
using namespace std;

int main (void){
  int conejos_blancos = 45;
  int conejos_negros = 50;
  int conejos_marrones = 40;
  int conejos_grises = 49;
  int total;

  int venta_1, venta_2, venta_3, tipo_1, tipo_2, tipo_3;

  cout << "Cantidad de Conejos de la primera venta: ";
  cin >> venta_1;
  cout << "Tipo de conejo de la primera venta: ";
  cin >> tipo_1;

  cout << "Cantidad de Conejos de la segunda venta: ";
  cin >> venta_2;
  cout << "Tipo de conejo de la segunda venta: ";
  cin >> tipo_2;

  cout << "Cantidad de Conejos de la tercera venta: ";
  cin >> venta_3;
  cout << "Tipo de conejo de la tercera venta: ";
  cin >> tipo_3;

  switch(tipo_1){
    case 1: 
      conejos_blancos -= venta_1;
      break;
    case 2: 
      conejos_negros -= venta_1;
      break;
    case 3:
      conejos_marrones -= venta_1;
      break;
    case 4:
      conejos_grises -= venta_1;
      break;
    default:
      cout << "Error";
      break;
  }

    switch(tipo_2){
    case 1: 
      conejos_blancos -= venta_2;
      break;
    case 2: 
      conejos_negros -= venta_2;
      break;
    case 3:
      conejos_marrones -= venta_2;
      break;
    case 4:
      conejos_grises -= venta_2;
      break;
    default:
      cout << "Error";
      break;
  }

    switch(tipo_3){
    case 1: 
      conejos_blancos -= venta_3;
      break;
    case 2: 
      conejos_negros -= venta_3;
      break;
    case 3:
      conejos_marrones -= venta_3;
      break;
    case 4:
      conejos_grises -= venta_3;
      break;
    default:
      cout << "Error";
      break;
  }
  
  total = venta_1 + venta_2 + venta_3;

   cout << endl << "Cantidad de conejos vendidos: " << total;
   cout << endl << "Quedaron " << conejos_blancos << " Conejos blancos"
        << endl << "Quedaron " << conejos_negros << " Conejos negros"
        << endl << "Quedaron " << conejos_marrones << " Conejos marrones"
        << endl << "Quedaron " << conejos_grises << " Conejos grises";

  if(conejos_blancos == 45){
    cout << endl << "No se vendieron conejos blancos";
  }

  if(conejos_negros == 50){
    cout << endl << "No se vendieron conejos negros";
  }

  if(conejos_marrones == 44){
    cout << endl << "No se vendieron conejos marrones";
  }

  if(conejos_grises == 49){
    cout << endl << "No se vendieron conejos grises";
  }

  return 0;
}
