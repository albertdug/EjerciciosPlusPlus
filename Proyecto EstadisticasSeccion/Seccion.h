#include "Estudiante.h"
class Seccion 
{
public:
   Seccion();
   void ProcesarEstudiante(long, float);
   float PromedioNotas();
   float PorcentajeAprobados();
   float PorcentajeAplazados();
private:
   float ac_notas;       
   int cont_apro, cont_apla, cont_est;
   
};

Seccion :: Seccion()
{
   ac_notas = 0;       
   cont_apro = cont_apla = cont_est = 0;
}

void Seccion :: ProcesarEstudiante(long c,float n)
{
   Estudiante E(c,n);
   if (E.GetNota() >= 48)
      ++cont_apro;
   else ++cont_apla ;
   ac_notas += E.GetNota() ;
   ++cont_est;
}

float Seccion :: PromedioNotas()
{
   if (cont_est == 0)
        return 0;
   else return ac_notas/cont_est;
}

float Seccion :: PorcentajeAprobados()
{
   if (cont_est == 0)
        return 0;
   else return cont_apro*100/cont_est;
}

float Seccion :: PorcentajeAplazados()
{
   if (cont_est == 0)
        return 0;
   else return cont_apla*100/cont_est;
}
