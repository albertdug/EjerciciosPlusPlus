#ifndef AUTOMOVIL_H  
#define AUTOMOVIL_H

#include "Vehiculo.h"
using namespace std;
class Automovil : public Vehiculo
{
   private:
    int tipo_auto;
   public:
    Automovil ();   
    void SetTipoAuto(int);
    string GetTipoAuto();
};

Automovil::Automovil(){}

void Automovil::SetTipoAuto(int t)
{
   tipo_auto = t;  
}

string Automovil::GetTipoAuto()
{
   switch (tipo_auto)
   {
     case 1 : return "CARRO";
     case 2 : return "VAN";
     case 3 : return "CAMIONETA";
   }
}

#endif
