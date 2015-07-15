/*Una compa��a tiene determinadas pol�ticas para calcular el
sueldo de sus trabajadores. Por cada trabajador se conocen los 
siguientes datos: c�dula, nombre, direcci�n, sueldo base, 
n�mero de hijos, a�os en la empresa, tipo de trabajador (Planta
o  Administrativo). 
El sueldo del empleado es igual al sueldo base m�s algunos 
benefivios que dependen de donde �ste realiza sus funciones
en la compa��a y son las siguientes:
a) Planta		   
   * Si tiene 3 hijos o menos se le paga 80,00 Bs.F. por cada
     uno, a partir de 4 un monto �nico de 450,00 Bs.F.
   * Bono transporte de 200,00 Bs F.  
b) Administrativo  
   * Si tiene 2 hijos o menos se le paga 70 Bs F., por cada uno, 
     a partir de 3 un monto �nico de 300 Bs. F.
   * Bono por a�os en la empresa: 50,00 Bs F por cada a�o
     si tiene menos de 5, en caso contrario monto de �nico de
     400 Bs. F.  
Actualmente, cualquiera sea el tipo de trabajador, se le 
descuenta el 1.5% de su sueldo base por ley de pol�tica 
habitacional y  el 4% de su sueldo base por seguro social 
obligatorio
Cualquiera sea el tipo de trabajador se debe imprimir del 
empleado su nombre y su nuevo sueldo neto, calculado seg�n 
las condiciones planteadas anteriormente.

*/

#include <cstdlib>
#include <iostream>
#include "TrabAdminist.h"
#include "TrabPlanta.h"
using namespace std;

int main()
{
  TrabAdminist ad;
  ad.SetCedula(10);
  ad.SetNombre("Rosa");
  ad.SetTipoTrab("ADMINISTRATIVO");
  ad.SetHijos(2);
  ad.SetAnnosEmp(6);
  ad.SetSbase(100.00);
  cout << "Cedula : " << ad.GetCedula() << endl;
  cout << "Nombre : " << ad.GetNombre() << endl;
  cout << "Tipo Trabajador : " << ad.GetTipoTrab() << endl;
  cout << "Sueldo : " << ad.Sneto() << endl;
  TrabPlanta pl;
  pl.SetCedula(20);
  pl.SetNombre("Maria");
  pl.SetTipoTrab("PLANTA");
  pl.SetHijos(2);
  pl.SetSbase(100.00);
  cout << endl << endl;
  cout << "Cedula : " << pl.GetCedula() << endl;
  cout << "Nombre : " << pl.GetNombre() << endl;
  cout << "Tipo Trabajador : " << pl.GetTipoTrab() << endl;
  cout << "Sueldo : " << pl.Sneto() << endl;
  system("PAUSE");
  return EXIT_SUCCESS;
}
