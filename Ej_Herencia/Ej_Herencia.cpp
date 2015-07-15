#include <iostream>
#include "Vehiculo.h"
#include "Automovil.h"
using namespace std;

int main()
{
  //USO DE LA CLASE VEHICULO
  Vehiculo bicicleta(2,1,30);
  cout << "La bicicleta transporta " << bicicleta.GetPasajeros() 
       << " pasajeros" << endl;
  cout << "pesa " << bicicleta.GetPeso() 
       << " libras y tiene " << bicicleta.GetRuedas() << " ruedas" << endl;
  
  //USO DE LA CLASE AUTOMOVIL QUE HEREDA DE VEHICULO
  Automovil sedan(4,4,3000.00,1);
  cout << endl;
  cout << "El sedan transporta " << sedan.GetPasajeros() << " pasajeros" << endl;
  cout << "pesa " << sedan.GetPeso() << " libras y tiene "
       << sedan.GetRuedas() << " ruedas" << endl;
  cout << "El tipo automovil es " << sedan.GetTipoAuto() << endl;
  system("pause");
  return 0;
}

