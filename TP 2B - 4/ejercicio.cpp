//Nombre: GOMEZ NIETO ALEJANDRO
//TP Nº 2B
//EJ Nº 4
//Comentarios:

#include <iostream>
using namespace std;

int main (void){
  const int alquiler = 10000;
  const float costo_caramelo = 0.5;
  const int costo_1000 = 5000;
  int caramelos, presupuesto_inicial;
  float costo_total_caramelo, total_mantenimiento, costo_mantenimiento, credito;

  cout << "Ingrese el presupuesto inicial: ";
  cin >> presupuesto_inicial;
  cout << "Ingrese la cantidad de caramelos del primer mes: ";
  cin >> caramelos;

  costo_total_caramelo = caramelos * costo_caramelo;
  costo_mantenimiento = (caramelos / 1000) * costo_1000;

  total_mantenimiento = costo_mantenimiento + alquiler + costo_total_caramelo;

  if(presupuesto_inicial >= total_mantenimiento){
    cout << endl << "El presupuesto es suficiente para cubrir los: $" << total_mantenimiento;
  } else {
    credito = total_mantenimiento - presupuesto_inicial;
    cout << endl << "El presupuesto no es suficiente para cubrir los $" << total_mantenimiento << ". Necesita un credito de: $" << credito;
  }

  return 0;
}
