#ifndef TRABPLANTA_H
#define TRABPLANTA_H
#include "Trabajador.h"
using namespace std;
class TrabPlanta : public Trabajador
{
  public: 
   TrabPlanta();   
   float BonoHijo();  
   float BonoTransporte();
   float Sneto();
};

TrabPlanta::TrabPlanta(){}   

float TrabPlanta::BonoHijo()
{
  if (GetHijos() <= 3)
     return GetHijos() * 80.00;
  else return 450.00;  
}

float TrabPlanta::BonoTransporte()
{
  return 200.00;
}

float TrabPlanta::Sneto()
{
  return GetSbase() + BonoHijo() + BonoTransporte() - Descuento(); 
}
#endif
