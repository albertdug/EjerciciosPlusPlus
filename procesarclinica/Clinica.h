#include "Doctor.h"
#include <vector>
using namespace std;
class Clinica
{
      private:
              vector<Doctor> ar_doc;
      public:
             Clinica();
             void ProcesarDoctor(long c, string n, int ca, float m);
             float TotalOp();
             float Mayor();
             float TotalCl();
             float Porc();
             int GetSize();
             Doctor GetDoctor(int i);
};

Clinica :: Clinica () {}

void Clinica :: ProcesarDoctor(long c, string n, int ca, float m)   
{
     Doctor doc;
     doc.SetCedula(c);
     doc.SetNombre(n);
     doc.SetCantidad(ca);
     doc.SetMonto(m);
     ar_doc.push_back(doc);
}

float Clinica :: TotalOp()
{
      float total = 0;
      for(int i=0; i<GetSize(); ++i)
          total += ar_doc[i].GetMonto();
          return total;
}
float Clinica :: Mayor()
{
      float mayor = 0;
      for(int i = 0; i<GetSize(); ++i)
      if(ar_doc[i].GetCantidad()>mayor)
         mayor = ar_doc[i].GetCantidad();
      return mayor;
}
       
float Clinica :: TotalCl()
{
      return TotalOp()*0.2;
}  
float Clinica :: Porc()
{
      int cont = 0;
      for(int i=0; i<GetSize(); ++i)
      if(ar_doc[i].GetMonto()>100000)
         ++cont;
         
       if(GetSize() != 0)
          return (cont*100/GetSize());
       else
          return 0;
}
int Clinica :: GetSize()
{
    return ar_doc.size();
}
Doctor Clinica :: GetDoctor(int i)
{
       return ar_doc[i];
}      
