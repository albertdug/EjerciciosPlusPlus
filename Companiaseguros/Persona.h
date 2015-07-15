#ifndef PERSONA_H
#define PERSONA_H
using namespace std;
class Persona
{
  protected:
   long cedula;
   string nombre, direccion, tlf;
  public: 
   Persona();
   void SetCedula(long);
   void SetNombre(string);
   void SetDireccion(string);
   void SetTlf(string);
   long GetCedula();
   string GetNombre();
   string GetDireccion();
   string GetTlf();
}; 
Persona::Persona(){}
void Persona::SetCedula(long c)
{
  cedula = c;
}
  
void Persona::SetNombre(string n)
{
  nombre = n;
}
  
void Persona::SetDireccion(string d)
{
  direccion = d;
}
 
void Persona :: SetTlf(string t)
{
  tlf = t;
}  
long Persona::GetCedula()
{
  return cedula;
}
  
string Persona::GetNombre()
{
  return nombre;
}
  
string Persona::GetDireccion()
{
  return direccion;
}

string Persona :: GetTlf()
{
return tlf;       
}
  
#endif
