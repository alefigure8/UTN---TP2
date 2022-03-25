//Nombre: GOMEZ NIETO ALEJANDRO
//TP Nº 1
//EJ Nº 5
//Comentarios: Un negocio de perfumería efectúa descuentos según el importe de la venta. - Si el importe es menor a $100 aplicar un descuento del 5% - Si el importe es entre $100 y hasta $500 aplicar un descuento del 10% - Si el importe es mayor a $500 aplicar un descuento del 15% Hacer un programa donde se ingresa el importe original sin descuento y que se informe por pantalla el importe con el descuento ya aplicado.

#include <iostream>
using namespace std;

int main (void){
  float importe;

  cout << "indique el importe de la venta: ";
  cin >> importe;

  if(importe < 100){
    importe = importe * 0.95;
  } else if (importe >= 100 && importe <= 500){
    importe = importe * 0.90;
  } else {
    importe = importe * 0.85;
  }

  cout << endl << "El importe es $" << importe;

  return 0;
}
