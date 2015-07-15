#ifndef PERSONA_H
#define PERSONA_H
using namespace std;
class Persona
{
  protected:
   long cedula;
   string nombre, direccion;
  public: 
   Persona();
   void SetCedula(long);
   void SetNombre(string);
   void SetDireccion(string);
   long GetCedula();
   string GetNombre();
   string GetDireccion();
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
  
#endif
