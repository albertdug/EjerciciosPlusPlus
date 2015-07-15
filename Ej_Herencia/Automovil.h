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
    Automovil (int, int, float, int);    
    void SetTipoAuto(int);
    string GetTipoAuto();
};

Automovil::Automovil(){}

Automovil::Automovil(int lla, int pa, float pe, int t):Vehiculo(lla,pa,pe)
{
   tipo_auto = t;   
}

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
