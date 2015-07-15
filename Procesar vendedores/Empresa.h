#include "Vendedor.h"
#include <vector>
using namespace std;
class Empresa
{
      private:
              vector <Vendedor> ar_emp;
      public:
             Empresa();
             void ProcesarVendedor(string, string, float, float);
             int GetSize();
             float TotalSueldos();
             float PromedioV();
             float MontoMenor();
             float MontoMayor();
             float Porcentaje();
             Vendedor GetVendedor(int i);
};

Empresa :: Empresa () {}

void Empresa :: ProcesarVendedor(string c, string n, float sb, float mv)
{
     Vendedor ven;
     ven.SetCedula(c);
     ven.SetNomnre(n);
     ven.SetSueldoBase(sb);
     ven.SetMontoVentas(mv);
     ar_emp.push_back(ven);
}

int Empresa :: GetSize()
{
    return ar_emp.size();
}

float Empresa :: TotalSueldos();
{
      float ac_sn;
      for(int i=0; i < ar_emp.size()_++i)
          ac_sn += ar_emp[i].CalcularSN();
      if(ar_emp.size() != 0)
      return ac_sn;
}

