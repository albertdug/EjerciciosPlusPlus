#include "candidata.h"
#include <vector>
using namespace std;
 class Concurso
 {
       private:
               vector<Candidata> ar_con;
       public:
              Concurso();
              void ProcesarCandidata(long c, string n, vector<float> cts);
              void Ordenar();
              Candidata GetCandidata(int i);
              int GetSize();
              int Busqueda(long c);
              int PuntajeMayor(int j);
              vector<string> Seleccionadas();
 };
Concurso :: Concurso() {}

void Concurso :: ProcesarCandidata(long c, string n, vector<float> cts)
{
     Candidata ca;
     ca.SetCedula(c);
     ca.SetNombre(n);
     ca.SetCriterios(cts);
     ar_con.push_back(ca);
}

void Concurso :: Ordenar()
{
     bool ordenar;
     Candidata aux;
     int p = 1;
     do
     {
         ordenar = false ;
           for(int c = 0; c<GetSize()-p;++c)
              if(ar_con[c].Puntaje()<ar_con[c+1].Puntaje())
                {
                    aux = ar_con[c];
                    ar_con[c] = ar_con[c+1];
                    ar_con[c+1] = aux;
                    ordenar = true;
                }
           ++p;
     }
     while(ordenar);
}

Candidata Concurso :: GetCandidata(int i)
{
          return ar_con[i];
}

int Concurso :: GetSize()
{
    return ar_con.size();
}
int Concurso :: Busqueda(long c)
{
    bool buscar = false;
    int i = 0;
    while(i<GetSize() && not buscar)
    {
          if(ar_con[i].GetCedula()==c)
             buscar = true;
          else
             ++i;
    }
    if(buscar)
       return i;
    else 
       return -1;
}
int Concurso :: PuntajeMayor(int j)
{
    int cont =0;
    for(int i = 0; i< GetSize();++i)
        if(ar_con[i].GetCriterios(j-1)==10)
         ++cont;
        return cont;
}

vector<string> Concurso :: Seleccionadas()
{
      vector<string> cs;
      for(int i=0; i< GetSize(); ++i)
         if(ar_con[i].Puntaje()>32)
         cs.push_back(ar_con[i].GetNombre());
      return cs;
}
 
    
