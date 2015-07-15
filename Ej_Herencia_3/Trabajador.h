#ifndef TRABAJADOR_H
#define TRABAJADOR_H
#include "Persona.h"
using namespace std;
class Trabajador : public Persona
{
  protected:
   int hijos;
   float s_base;
   int annos_emp;
   string tipo_trab;
  public: 
   Trabajador();   
   void SetHijos(int);
   void SetAnnosEmp(int);
   void SetSbase(float); 
   void SetTipoTrab(string);    
   int GetHijos();
   int GetAnnosEmp();
   float GetSbase(); 
   string GetTipoTrab();     
   float Descuento();
};
Trabajador::Trabajador(){}

void Trabajador::SetHijos(int h)
{
  hijos = h;     
}

void Trabajador::SetAnnosEmp(int a)
{
  annos_emp = a;     
}

void Trabajador::SetSbase(float s)   
{
  s_base = s;
}

void Trabajador::SetTipoTrab(string t)   
{
  tipo_trab = t;
}

int Trabajador::GetHijos()
{
  return hijos;
}

int Trabajador::GetAnnosEmp()
{
  return annos_emp;
}

float Trabajador::GetSbase()
{
  return s_base;
}

string Trabajador::GetTipoTrab()
{
  return tipo_trab;
}

float Trabajador::Descuento()
{
  return (s_base * 5.5) / 100;
}

#endif
