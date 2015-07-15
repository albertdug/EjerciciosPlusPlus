#include <string>
#include "Llamada.h"
using namespace std;

class Compania {
private:
   string nombre, direccion, rif;
   int ct_local, ct_intern, ct_celular;
   float ac_local, ac_intern, ac_celular;
public:
   Compania (string, string, string);  
   string GetNombre ();
   string GetDireccion ();
   string GetRIF ();
   int CantidadLocal ();
   int CantidadIntern ();
   int CantidadCelular ();
   float MontoLocal ();
   float MontoIntern ();
   float MontoCelular ();
   float MontoTotaLlamadas ();
   string MayorFrecuencia ();
   void ProcesarLlamada (int, int);
};

Compania :: Compania (string n, string d, string r)
{
   nombre = n;
   direccion = d;
   rif = r;
   ct_local = ct_intern = ct_celular = 0;
   ac_local = ac_intern = ac_celular = 0;
}

string Compania :: GetNombre ()
{
   return nombre;
}

string Compania :: GetDireccion ()
{
   return direccion;
}

string Compania :: GetRIF ()
{
   return rif;
}

int Compania :: CantidadLocal ()
{
   return ct_local;
}

int Compania :: CantidadIntern ()
{
   return ct_intern;
}

int Compania :: CantidadCelular ()
{
   return ct_celular;
}

float Compania :: MontoLocal ()
{
   return ac_local;
}

float Compania :: MontoIntern ()
{
   return ac_intern;
}

float Compania :: MontoCelular ()
{
   return ac_celular;
}

float Compania :: MontoTotaLlamadas ()
{
   return ac_local + ac_intern + ac_celular;
}

string Compania :: MayorFrecuencia ()
{
   float mayor;
   string mayor_cad;
   string cad_l = "Local";
   string cad_i = "Internacional";
   string cad_c = "Celular";
   if (ct_local == ct_intern)
      { 
        mayor = ct_local;
        mayor_cad = cad_l + ", " + cad_i;//(+) CONCATENA CADENAS
      }  
   else
     if (ct_local > ct_intern)
        {
          mayor = ct_local;
          mayor_cad = cad_l;
        }              
     else 
        {
          mayor = ct_intern;
          mayor_cad = cad_i;
        }    
   //SE CHEQUEA mayor CON EL SIGUIENTE CONTADOR (ct_celular)      
   if (ct_celular == mayor)
      mayor_cad = mayor_cad + ", " + cad_c;
   else
      if (ct_celular > mayor)
         mayor_cad = cad_c;
   return mayor_cad;  
               
}

void Compania :: ProcesarLlamada (int t, int d)
{
   Llamada ll (t, d);
   switch (ll.GetTipo()) 
   {    
   case 1 : ++ct_local;           
            ac_local += ll.CalcMonto ();         
            break;
   case 2 : ++ct_intern;
            ac_intern += ll.CalcMonto ();           
            break;
   case 3 : ++ct_celular;
            ac_celular += ll.CalcMonto ();            
            break;
   }
}

