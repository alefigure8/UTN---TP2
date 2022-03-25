//Nombre: GOMEZ NIETO ALEJANDRO
//TP Nº 1
//EJ Nº 12
//Comentarios: Hacer un programa para ingresar por teclado las cuatro notas de los exámenes obtenidas por un alumno y luego emitir uno solo de los cartel de acuerdo a las siguientes condiciones.

#include <iostream>
using namespace std;

int main (void){
  int a, b, c, d, promo, final;
  promo = 0;
  final=0;

  cout <<"ingrese la primera nota: ";
  cin >> a;
  cout <<"ingrese la segunda nota: ";
  cin >> b;
  cout <<"ingrese la tercera nota: ";
  cin >> c;
  cout <<"ingrese la cuarta nota: ";
  cin >> d;

  if(a >= 7){
    promo++;
  }
  
  if(a >= 4){
    final++;
  }

  if(b >= 7){
    promo++;
  }

  if (c >=7){
    promo++;
  }

  if (d >=7){
    promo++;
  }

  if(b >= 4){
    final++;
  }

  if (c >= 4){
    final++;
  }

  if (d >= 4){
    final++;
  }

  if(promo == 4){
    cout << "Promociona";
  } else if(final > 2){
    cout << "Final";
  } else if (final > 1){
    cout << "Recupera";
  } else {
    cout << "Recursa";
  }
  return 0;
}
