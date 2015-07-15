#include <iostream>
#include <iomanip>
#include <string>
#include "Inspectoria.h"
using namespace std;

void InterfazEntradaC(string &n, int &d, int &m, int &a);
void InterfazEntradaIn(int &nu, int &v, int &di, int &me, int &an);
void InterfazSalida(Inspectoria in);

int main()
{
    string n;
    int d, m, a, nu, v, di, me, an;
    char resp;
    Conductor co;
    Zona zo;
    Infraccion i;
    system ("Color 3d");
    system("cls");
    Inspectoria in();
    do
    {
                 InterfazEntradaC(n, d, m, a);
                 i.SetConductor(co);
                 InterfazEntradaIn(nu, v, di, me, an);
                 i.SetZona(zo);
                 i.SetVelocidad(v);
                 i.SetDia(di);
                 i.SetMes(me);
                 i.SetAno(an);
                 in.ProcesarInfraccion(i);
                 
                 cout<< "El Nombre del conductor es :" << i.GetConductor().GetNombre()<<endl;
                 cout<< "El monto por la multa es :" << i.CalcularMontoTotal()<<endl;
                 system("cls");
                 cout<< "Desea Procesar otro conductor (S/N):";
                 cin>> resp;
    }
    while (toupper(resp)=='S');
    InterfazSalida(in);
    return 0;
}

void InterfazEntradaC(string &n, int &d, int &m, int &a)
{
     cout<< "Nombre del Conductor :";
     getline (cin, n);
     cout<< "El dia de vencimiento de licencia es :";
     cin>> d;
     cout<< "El mes es :";
     cin>> m;
     cout<< "el año es :";
     cin>> a;
     system("cls");
}

void InterfazEntradaIn(int &nu, int &v, int &di, int &me, int &an)
{
     cout<< "La zona en donde ocurrio la infraccion es (1)Norte (2)Sur (3)Este (4)Oeste:";
     cin>> nu;
     cout<< "La velocidad que llavaba era :";
     cin>> v;
     cout<< "El dia de la infraccion es :";
     cin>> di;
     cout<< "El mes es :";
     cin>> me;
     cout<< "El año es :";
     cin>> an;
     system("cls");
}
void InterfazSalida(Inspectoria in)
{
     cout<< "El total recolectado por las multas es :"<<in.CalcularMontoM()<<endl;
     cout<< "El total reloctado por licencias vencidas es :"<< in.CalcularMontoL()<<endl; 
     cout<< "La Zona con mayor numero de infracciones fue la zona "<<in.CalcularZonaMayor()<<endl;
     system("pause");
}          
