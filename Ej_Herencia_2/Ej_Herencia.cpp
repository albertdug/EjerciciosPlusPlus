#include <iostream>
#include "Vehiculo.h"
#include "Automovil.h"
using namespace std;

int main()
{
  //USO DE LA CLASE VEHICULO
  Vehiculo bicicleta;
  bicicleta.SetRuedas(2);
  bicicleta.SetPasajeros(1);
  bicicleta.SetPeso(30);
  cout << "La bicicleta transporta " << bicicleta.GetPasajeros() 
       << " pasajeros" << endl;
  cout << "pesa " << bicicleta.GetPeso() 
       << " libras y tiene " << bicicleta.GetRuedas() << " ruedas" << endl;
  
  //USO DE LA CLASE AUTOMOVIL QUE HEREDA DE VEHICULO
  Automovil sedan;
  sedan.SetRuedas(4);
  sedan.SetPasajeros(5);
  sedan.SetPeso(3500);
  sedan.SetTipoAuto(2);
  cout << endl;
  cout << "El sedan transporta " << sedan.GetPasajeros() << " pasajeros" << endl;
  cout << "pesa " << sedan.GetPeso() << " libras y tiene "
       << sedan.GetRuedas() << " ruedas" << endl;
  cout << "El tipo automovil es " << sedan.GetTipoAuto() << endl;
  system("pause");
  return 0;
}
