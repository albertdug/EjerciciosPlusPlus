#include "Conductor.h"
#include "Zona.h"
using namespace std;
class Infraccion
{
      private:
              Zona z;
              Conductor c;
              Fecha fi;
              int velocidad, dia, mes, ano;
      public:
             Infraccion();
             Infraccion(Zona zo, Conductor co, int v, int di, int me, int an);
             float CalcularMontoExceso();
             float CalcularLicencia();
             float CalcularMontoTotal();
             void SetZona(Zona zo);
             void SetConductor(Conductor co);
             void SetVelocidad(int v);
             void SetDia(int di);
             void SetMes(int me);
             void SetAno(int an);
             Zona GetZona();
             Conductor GetConductor();
             int GetVelocidad();
             int GetDia();
             int GetMes();
             int GetAno();
};

Infraccion :: Infraccion() {}

Infraccion :: Infraccion(int zo, string no,int dl,int ml, int al,
                         int v, int di, int me, int an)
{
           z.SetNumero(zo);
           c.SetNombre(no)
           c.SetFecha(dl,ml,al)
          
           velocidad = v;
           dia = di;
           mes = me;
           ano = an;
}

float Infraccion :: CalcularMontoExceso()
{
      switch(z.GetNumero())
      {
             case 1 : 
                  return ((velocidad - z.Limite()) * z.Monto()) + z.Papeleo();
                  break;
             case 2 : 
                  return ((velocidad - z.Limite()) * z.Monto()) + z.Papeleo();
                  break;
             case 3 :
                  return ((velocidad - z.Limite()) * z.Monto()) + z.Papeleo();
                  break;
             case 4 :
                  return ((velocidad - z.Limite()) * z.Monto()) + z.Papeleo();
                  break;
      }
}

float Infraccion :: CalcularLicencia()
{
      if(fi.GetAno() > c.GetFecha().GetAno()) //OJO CON ESTO
         return 100;
      else
         return 0;
         if(mes > c.GetMes())
            return 100;
         else
            return 0;
            if(dia > c.GetDia())
               return 100;
            else
               return 0;
}

float Infraccion :: CalcularMontoTotal()
{
      return CalcularMontoExceso() + CalcularLicencia();
}

void Infraccion :: SetZona(Zona zo)
{
     z = zo;
}

void Infraccion :: SetConductor(Conductor co)
{
     c = co;
}

void Infraccion :: SetVelocidad(int v)
{
     velocidad = v;
}

void Infraccion :: SetDia(int di)
{
     dia = di;
}
void Infraccion :: SetMes(int me)
{
     mes = me;
}

void Infraccion :: SetAno(int an)
{
     ano = an;
}

Zona Infraccion :: GetZona()
{
     return z;
}

Conductor Infraccion :: GetConductor()
{
     return c;
}

int Infraccion :: GetVelocidad()
{
    return velocidad;
}

int Infraccion :: GetDia()
{
    return dia;
}
int Infraccion :: GetMes()
{
    return mes;
}
int Infraccion :: GetAno()
{
    return ano;
}
