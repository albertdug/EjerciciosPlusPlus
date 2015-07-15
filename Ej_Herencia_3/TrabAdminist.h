#ifndef TRABADMINIST_H
#define TRABADMINIST_H
#include "Trabajador.h"
using namespace std;
class TrabAdminist : public Trabajador
{  
  public: 
   TrabAdminist();      
   float BonoHijo();  
   float BonoAnnos();
   float Sneto();   
};
TrabAdminist::TrabAdminist(){}     
float TrabAdminist::BonoHijo()  
{
  if (GetHijos() <= 2)
     return GetHijos() * 70.00;
  else return 300.00;  
}

float TrabAdminist::BonoAnnos()
{
  if (GetAnnosEmp() < 6)
     return GetAnnosEmp() * 50.00;
  else return 450.00;  
}

float TrabAdminist::Sneto()
{
  return GetSbase() + BonoHijo() + BonoAnnos() - Descuento();
}

#endif
