#ifndef ASEGURADO_H
#define ASEGURADO_H
#include "Persona.h"
using namespace std:
class Asegurado : public Persona
{
      protected:
                float cant, porc;
                int dia, mes , ano, tipo;
      public:
             Asegurado();
             void SetCantidadAseg(float c);
             void SetPorcentaje(float p);
             void SetDia(int d);
             void SetMes(int m);
             void SetAno(int a);
             void SetTipo(int t);
             float GetCantidadAseg();
             float GetPorcentaje();
             int GetDia();
             int GetMes();
             int GetAno();
             int GetTipo();
};
Asegurado::Asegurado() {}

void Asegurado :: SetCantidadAseg(float c)
{
     cant_as = c;
}
void Asegurado :: SetPorcentaje(float p)
{
     porc = p;
}
void Asegurado :: SetDia(int d)
{
     dia = d;
}
void Asegurado :: SetMes(int m)
{
     mes = m;
}
void Asegurado :: SetAno(int a)
{
     ano = a;
}
void Asegurado :: SetTipo(int t)
{
     tipo = t;
}

float Asegurado :: GetCantidadAseg()
{
      return cant;
}
float Asegurado :: GetPorcentaje()
{
      return porc;
}
int Asegurado :: GetDia()
{
    return dia;
}
int Asegurado :: GetMes()
{
    return mes;
}
int Asegurado :: GetAno()
{
    return ano;
}
int Asegurado :: GetTipo()
{
    return tipo;
}

#endif
              
                
                
      
