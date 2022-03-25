//Nombre: GOMEZ NIETO ALEJANDRO
//TP Nº 1
//EJ Nº 12
//Comentarios: Hacer un programa para ingresar por teclado las cuatro notas de los exámenes obtenidas por un alumno y luego emitir uno solo de los cartel de acuerdo a las siguientes condiciones.

#include <iostream>
using namespace std;

int main (void){
  int k, result, tarifa_1, tarifa_2;
  tarifa_1 = 100 * 10;
  tarifa_2 = 100 * 12;

  cout <<"ingrese la cantidad de Kilowatios: ";
  cin >> k;

 if(k <= 100){
   result = k * 10;
 } else if (k >= 101 && k <= 200){
   result = ((k-100)*12) + tarifa_1;
 } else {
   result = ((k-200)*15) + tarifa_1 + tarifa_2;
 }

 cout << endl << "La cantidad a pagar por " << k << " kilovatios es $" << result;

  return 0;
}
