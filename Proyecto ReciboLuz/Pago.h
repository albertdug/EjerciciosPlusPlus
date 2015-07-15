#include "Luz.h"
#include "Aseo.h"
using namespace std;
class Pago
{
    private:
     Luz l;
     Aseo a;
    public:
     Pago(int i, int z);
     float Montoapagar ();
     Luz GetLuz();
     Aseo GetAseo();
};
//Constructor

Pago::Pago (int i, int z)
{
   l.SetImpulsos(i);
   a.SetZona(z);
}

float Pago::Montoapagar ()
{
   return l.Monto_impulsos()+ a.Monto_aseo ();
}

Luz Pago::GetLuz()
{
   return l;
}

Aseo Pago::GetAseo()
{
   return a;
}
