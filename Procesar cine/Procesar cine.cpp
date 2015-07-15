#include <iostream>
#include <string>
#include <iomanip>
#include "Multicine.h"
using namespace std;

void InterfazEntradaCine(string &n);
void InterfazEntradaVenta(int &s, int &d, int &ni, int &ad,int &ter);
void InterfazSalida(Multicine m);

int main()
{
    string n;
    int s, d, ni, ad, ter;
    char resp;
    Venta v;
    system ("color 3b");
    system ("cls");
    InterfazEntradaCine(n);
    
    Multicine m(n, v);
    do
    {
              InterfazEntradaVenta(s, d, ni, ad, ter);
              v.SetDia(d);
              v.SetSala(s);
              v.SetEntradaNino(ni);
              v.SetEntradaAdulto(ad);
              v.SetEntradaTercera(ter);
              m.ProcesarVenta(v);
              m.ProcesarTipo(v);
              cout<< "El monto de la venta es :"<<m.GetMonto()<<endl;
              cout<< "Desea Procesar Otra venta (S/N)";
              cin>> resp;
    }
    while (toupper(resp)=='S');
    InterfazSalida(m);
    return 0;
} 
 
void InterfazEntradaCine(string &n)
{
     cout<< "El nombre del cine es :";
     getline (cin, n);
     system("cls");
}
void InterfazEntradaVenta(int &s, int &d, int &ni, int &ad,int &ter)
{
     cout<< "Introduzca Sala (1) (2) (3) (4) ;";
     cin>> s;
     cout<< "Dia de la Semama (1)Lunes Martes(2) Miercoles(3) Jueves(4) viernes(5) Sabado(6) Domingo(7):";
     cin>> d;
     cout<< "Cantidad de Entradas para niños :";
     cin>> ni;
     cout<< "Cantidad de Entradas para Adultos :";
     cin>> ni;
     cout<< "Cantidad de Entradas para la Tercera Edad :";
     cin>> ter;
     system ("cls");
}

void InterfazSalida(Multicine m)
{
     cout<<setw(45)<<"MULTICINE :"<<m.GetNombre()<<endl;
     cout<<setw(45)<<"===================="<<endl;
     cout<<setw(6)<<"SALA"<<setw(26)<<"NRO. DE TICKETS VENDIDOS"<<setw(18)<<"MONTO VENDIDO"<<endl;
     cout<<setw(6)<<"1"<<setw(26)<<m.CantidadSalaP()<<setw(18)<<m.MontoSalaP()<<endl;
     cout<<setw(6)<<"2"<<setw(26)<<m.CantidadSalaS()<<setw(18)<<m.MontoSalaS()<<endl;
     cout<<setw(6)<<"3"<<setw(26)<<m.CantidadSalaT()<<setw(18)<<m.MontoSalaT()<<endl;
     cout<<setw(6)<<"4"<<setw(26)<<m.CantidadSalaC()<<setw(18)<<m.MontoSalaC()<<endl;
     cout<< "El monto total vendido fue :"<<m.MontoTotal()<<endl;
     cout<< "La sala mas concurrida es la :"<< m.SalaMayor()<< endl;
     cout<< "El tipo de espectador mas concurrido es de los :"<<m.MayorEspectador()<<endl;
     system("pause");
}

