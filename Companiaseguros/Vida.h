#ifndef VIDA_H
#define VIDA_H
#include "Asegurado.h"
using namespace std;
class Vida : public Asegurado
{
      protected:
                string nombreb;
                int diaa, mesa, anoa, diab, mesb, anob, edad;
      public:
             Vida();
             void SetNombre(string no);
             void SetDiaAs(int da);
             void SetMesAs(int ma);
             void SetAnoAs(int aa);
             void SetDiaBe(int db);
             void SetMesBe(int mb);
             void SetAnoBe(int ab);
             void SetEdad(int ed);
             string GetNombre();
             int GetDiaAs();
             int GetMesAs();
             int GetAnoAs();
             int GetDiaBe();
             int GetMesBe();
             int GetAnoBe();
             int GetEdad();
             float Costo();
             float Validacion();
};

             
