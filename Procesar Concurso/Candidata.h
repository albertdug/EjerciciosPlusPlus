#ifndef CANDIDATA_H
#define CANDIDATA_H
#include <vector>
#include "Persona.h"
using namespace std;
class Candidata : public Persona
{
      private:
              vector<float> ar_crit;
      public:
             Candidata();
             void SetCriterios(vector<float> cts);
             float GetCriterios(int j);
             float Puntaje();
             int Getsize();
};

Candidata :: Candidata() {}

void Candidata :: SetCriterios(vector<float> cts)
{
     ar_crit = cts;
}
float Candidata :: GetCriterios(int j)
{
      return ar_crit[j];
}
float Candidata :: Puntaje()
{
      float p = 0;
      for(int i =0; i<Getsize();++i)
         p +=ar_crit[i];
      return p;
}
int Candidata :: Getsize()
{
    return ar_crit.size();
}
#endif
