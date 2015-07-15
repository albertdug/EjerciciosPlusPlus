#include "Infraccion.h"
using namespace std;
class Inspectoria
{
      private:
              int c1, c2, c3, c4;
              float ac_m1, ac_m2, ac_m3, ac_m4, ac_l1, ac_l2, ac_l3, ac_l4;
      public:
             Inspectoria();
             void ProcesarInfraccion(Infraccion i);
             string CalcularZonaMayor();
             float CalcularMontoM();
             float CalcularMontoL();
};

Inspectoria :: Inspectoria()
{
            c1 = c2 = c3 = c4 = 0;
            ac_m1 = ac_m2 = ac_m3 = ac_m4 = ac_l1= ac_l2 = ac_l3 = ac_l4 = 0;
}

void Inspectoria :: ProcesarInfraccion(Infraccion i)
{
     switch(i.GetZona().GetNumero())
     {
           case 1 : 
                   ++c1;
                   ac_m1 += i.CalcularMontoTotal();
                   ac_l1 += i.CalcularLicencia();
                   break;
           case 2 :
                   ++c2;
                   ac_m2 += i.CalcularMontoTotal();
                   ac_l2 += i.CalcularLicencia();
                   break;
           case 3 :
                   ++c3;
                   ac_m3 += i.CalcularMontoTotal();
                   ac_l3 += i.CalcularLicencia();
                   break;
           case 4 :
                   ++c4;
                   ac_m4 += i.CalcularMontoTotal();
                   ac_l4 += i.CalcularLicencia();
                   break;
     }
}

string Inspectoria :: CalcularZonaMayor()
{
       int mayor1, mayor2, mayor3;
       string mayorcad1, mayorcad2, mayorcad3;
       string cad1 = "NORTE";
       string cad2 = "SUR";
       string cad3 = "ESTE";
       string cad4 = "OESTE";
       
       if(c1 == c2)
       {
             mayor1 = c1;
             mayorcad1 = cad1 + "y" + cad2;
       }
       else
           if(c1 > c2)
           {
                 mayor1 = c1;
                 mayorcad1 = cad1;
           }
           else
           {
                 mayor1 = c2;
                 mayorcad1 = cad2;
           }
           
       if(c3 == c4)
       {
             mayor2 = c3;
             mayorcad2 = cad3 + "y" + cad4;
       }
       else 
           if(c3 > c4)
           {
                 mayor2 = c3;
                 mayorcad2 = cad3;
           }
           else
           { 
                 mayor2 = c4;
                 mayorcad2 = cad4;
           }
           
       if(mayor1 == mayor2)
       {
                 mayor3 = mayor1;
                 mayorcad3 = mayorcad1 + "y" + mayorcad2;
       }
       else
           if(mayor1 > mayor2)
           {
                     mayor3 = mayor1;
                     mayorcad3 = mayorcad1;
           }
           else
           {
                     mayor3 = mayor2;
                     mayorcad3 = mayorcad3;
           }
}
                 
float Inspectoria :: CalcularMontoM()
{
      return ac_m1 + ac_m2 + ac_m3 + ac_m4;
}

float Inspectoria :: CalcularMontoL()
{
      return ac_l1 + ac_l2 + ac_l3 + ac_l4;
}
