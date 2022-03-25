//Nombre: GOMEZ NIETO ALEJANDRO
//TP Nº 2B
//EJ Nº 2
//Comentarios:

#include <iostream>
using namespace std;

int main (void){
  int edad_1, edad_2, edad_3, edad_4, edad_5, mayores_30, edad_20_30_40;
  float alt_1, alt_2, alt_3, alt_4, alt_5, promedio, altura_rango;

  mayores_30 = 0;
  promedio = 0;
  altura_rango = 0;
  edad_20_30_40 = 0;

  cout << "ingrese la edad de la primera persona: ";
  cin >> edad_1;
  cout << "ingrese la altura de la primera persona: ";
  cin >> alt_1;

  cout << "ingrese la edad de la segunda persona: ";
  cin >> edad_2;
  cout << "ingrese la altura de la segunda persona: ";
  cin >> alt_2;

  cout << "ingrese la edad de la tercera persona: ";
  cin >> edad_3;
  cout << "ingrese la altura de la tercera persona: ";
  cin >> alt_3;

  cout << "ingrese la edad de la cuarta persona: ";
  cin >> edad_4;
  cout << "ingrese la altura de la cuarta persona: ";
  cin >> alt_4;

  cout << "ingrese la edad de la quinta persona: ";
  cin >> edad_5;
  cout << "ingrese la altura de la quinta persona: ";
  cin >> alt_5;

  if(edad_1 > 30 && alt_1 > 1.8){
    mayores_30++;
    promedio += alt_1;
  }

  if(edad_2 > 30 && alt_2 > 1.8){
    mayores_30++;
    promedio += alt_2;
  }

  if(edad_3 > 30 && alt_3 > 1.8){
    mayores_30++;
    promedio += alt_3;
  }

  if(edad_4 > 30 && alt_4 > 1.8){
    mayores_30++;
    promedio += alt_4;
  }

  if(edad_5 > 30 && alt_5 > 1.8){
    mayores_30++;
    promedio += alt_5;
  }

  if(alt_1 >= 1.7 && alt_1 <= 1.8){
    altura_rango++;
  }

   if(alt_2 >= 1.7 && alt_2 <= 1.8){
    altura_rango++;
  }

   if(alt_3 >= 1.7 && alt_3 <= 1.8){
    altura_rango++;
  }

   if(alt_4 >= 1.7 && alt_4 <= 1.8){
    altura_rango++;
  }

   if(alt_5 >= 1.7 && alt_5 <= 1.8){
    altura_rango++;
  }

  if(edad_1 == 20 || edad_1 == 30 || edad_1 == 40){
    edad_20_30_40++;
  }

  if(edad_2 == 20 || edad_2 == 30 || edad_2 == 40){
    edad_20_30_40++;
  }

  if(edad_3 == 20 || edad_3 == 30 || edad_3 == 40){
    edad_20_30_40++;
  }

  if(edad_4 == 20 || edad_4 == 30 || edad_4 == 40){
    edad_20_30_40++;
  }

  if(edad_5 == 20 || edad_5 == 30 || edad_5 == 40){
    edad_20_30_40++;
  }

  promedio = promedio / mayores_30;

  cout << endl << "Personas que tienen mas de 30 años y miden mas de 1.8mts: " << mayores_30;
  cout << endl << "Promedio de  altura de mayores de 30 años: " << promedio;
  cout << endl << "Personas que miden entre 1.7 y 1.8: " << altura_rango;
  cout << endl << "Cantidad de personas con edad 20, 30 o 40 años_ " << edad_20_30_40;

  return 0;
}
