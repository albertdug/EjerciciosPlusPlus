#include "Venta.h"
using namespace std;
class Multicine
{
      private:
              string nombre;
              int s_p, s_s, s_t, s_c, ct_n, ct_a, ct_t;
              float s_mp, s_ms, s_mt, s_mc;
              Venta v;
      public:
             Multicine(string n, Venta v);
             string GetNombre();
             void ProcesarVenta(Venta v);
             void ProcesarTipo(Venta v);
             string SalaMayor();
             string MayorEspectador();
             int CantidadN();
             int CantidadA();
             int CantidadT();
             int CantidadSalaP();
             int CantidadSalaS();
             int CantidadSalaT();
             int CantidadSalaC();
             float MontoSalaP();
             float MontoSalaS();
             float MontoSalaT();
             float MontoSalaC();
             float MontoTotal();
             float GetMonto();
}; 

Multicine :: Multicine(string n, Venta v)
{
          nombre = n;
          s_p = s_s = s_t = s_c = ct_n = ct_a = ct_t = 0;
          s_mp = s_ms = s_mt = s_mc = 0;
}

string Multicine :: GetNombre()
{
       return nombre;
}

void Multicine :: ProcesarVenta(Venta v)
{
     switch(v.GetSala())
     {
         case 1 : s_p += v.GetEntradaNino() + v.GetEntradaAdulto() + v.GetEntradaTercera();
                  s_mp += v.CalcularPrecio();
                  break;
         case 2 : s_s += v.GetEntradaNino() + v.GetEntradaAdulto() + v.GetEntradaTercera();
                  s_ms += v.CalcularPrecio();
                  break;
         case 3 : s_t += v.GetEntradaNino() + v.GetEntradaAdulto() + v.GetEntradaTercera();
                  s_mt += v.CalcularPrecio();
                  break;
         case 4 : s_c += v.GetEntradaNino() + v.GetEntradaAdulto() + v.GetEntradaTercera();
                  s_mc += v.CalcularPrecio();
                  break;
     }
}

void Multicine :: ProcesarTipo(Venta v)
{
     if (v.GetEntradaNino() != 0)
         ct_n += v.GetEntradaNino();
         
     if(v.GetEntradaAdulto() != 0)
         ct_a += v.GetEntradaAdulto();
         
     if (v.GetEntradaTercera() != 0)
         ct_t += v.GetEntradaTercera();
}  

string Multicine :: SalaMayor()
{
       int mayor1, mayor2, mayor3;
       string mayorcad1, mayorcad2, mayorcad3;
       string cad1 = "Sala 1";
       string cad2 = "Sala 2";
       string cad3 = "Sala 3";
       string cad4 = "Sala 4";
       
       if (s_p == s_s)
       {
               mayor1 = s_p;
               mayorcad1 = cad1 + "y" + cad2;
       }
       else
           if (s_p > s_s)
           {
                   mayor1 = s_p;
                   mayorcad1 = cad1;
           }
           else
           {
                   mayor1 = s_s;
                   mayorcad1 = cad2;
           }
           
       if(s_t == s_c)
       {
              mayor2 = s_t;
              mayorcad2 = cad3 + "y" + cad4;
       }
       else
           if (s_t > s_c)
           {
                   mayor2 = s_t;
                   mayorcad2 = cad3;
           }
           else
           {
                   mayor2 = s_c;
                   mayorcad2 = cad4;
           }
           
       if (mayor1 == mayor2)
       {
                  mayor3 = mayor1;
                  mayorcad3 = mayorcad1 + "y" + mayorcad2;
       }
       else 
           if (mayor1 > mayor2)
           {
                      mayor3 = mayor1;
                      mayorcad3 = mayorcad1;
           }
           else
           {
                      mayor3 = mayor2;
                      mayorcad3 = mayorcad2;
           }
return mayorcad3;
}

string Multicine :: MayorEspectador()
{
       int mayor1, mayor;
       string mayorcad1, mayorcad;
       string cad1 = "Ninos";
       string cad2 = "Adultos";
       string cad3 = "Tercera Edad";
       
       if (ct_n == ct_a)
       {
                mayor1 = ct_n;
                mayorcad1 = cad1 + "y" + cad2;
       }
       else 
           if (ct_n > ct_a)
           {
                    mayor1 = ct_n;
                    mayorcad1 = cad1;
           }
           else 
           {
                    mayor1 = ct_a;
                    mayorcad1 = cad2;
           }
           
       if (mayor1 == ct_t)
       {
                  mayor = ct_t;
                  mayorcad = mayor1 + "y" + ct_t;
       }
       else
           if (mayor1 > ct_t)
           {
                      mayor = mayor1;
                      mayorcad = mayorcad1;
           }
           else
           {
                      mayor = ct_t;
                      mayorcad = cad3;
           }
return mayorcad;
}

int Multicine :: CantidadSalaP()
{
    return s_p;
}
int Multicine :: CantidadSalaS()
{
    return s_s;
}
int Multicine :: CantidadSalaT()
{
    return s_t;
}
int Multicine :: CantidadSalaC()
{
    return s_c;
}
float Multicine :: MontoSalaP()
{
      return s_mp;
}
float Multicine :: MontoSalaS()
{
      return s_ms;
}
float Multicine :: MontoSalaT()
{
      return s_mt;
}
float Multicine :: MontoSalaC()
{
      return s_mc;
}
float Multicine :: MontoTotal()
{
      return s_mp + s_ms + s_mt + s_mc;
} 
float Multicine :: GetMonto()
{
      return v.CalcularPrecio();
}
              
