#include <iostream>
#include <iomanip>
#include "Clinica.h"
using namespace std;

void InterfazEntrada(long &c, string &n, int &ca, float &m);
void InterfazSalida( Clinica cli);

int main()
{
    long c;
    string n;
    int ca, opc;
    float m;
    Clinica cli;
    system("color 21");
    do
    {
    cout<< "1 Procesar Doctor"<< endl;
    cout<< "2 Generar Reporte"<< endl;
    cout<< "3 Finalizar"<< endl;
    cout<< "Seleccione opcion"<< endl;
    cin>> opc;
    
    switch(opc)
    {
               case 1 : InterfazEntrada(c, n, ca, m);
                        cli.ProcesarDoctor(c, n, ca, m);
                        break;
               case 2 : InterfazSalida(cli);
                         break;
    }
    }
    while(opc != 3);
     
    return 0;
}

void InterfazEntrada(long &c, string &n, int &ca, float &m)
{
     system("cls");
     system ("color f8");
     cout<< "INGRESE LA CEDULA DE IDENTIDAD : "<<endl;
     cin>> c;
     cout<<"INGRESE NOMBRE DEL DOCTOR : "<< endl;
     cin.sync();
     getline(cin, n);
     float aux;
     float monto = 0;
     int opc;
     ca = 0;
     do
     {
         cout<< "Ingrese el monto de la operacion :"<<endl;
         cin>> aux;
         cout<< "Desea introducir otra opeacion (1)si (2)no:";
         cin>> opc;
         monto+= aux;
         m = monto;
         ++ca;
     }
     while(opc != 2);
   
}

void InterfazSalida( Clinica cli)
{
     system ("cls");
     system ("color f8");
     cout<<setw(50)<< "CENTRO MEDICO LA TRINIDAD"<<endl;
     cout<< endl;
     cout<<setw(47)<<"CARACAS - VENEZUELA"<<endl;
     cout<<setw(60)<<"LISTADO DE INGRESOS POR MONTOS DE OPERACIONES"<<endl;
     cout<<"**********************************************************************************"<<endl;
     cout<<setw(17)<<"Cedula Del Doctor"<<setw(13)<<"Cantidad"<<setw(25)<<"Monto de Operaciones"<<endl;
     for(int i = 0; i<cli.GetSize(); ++i)
     cout<<setw(17)<<cli.GetDoctor(i).GetCedula()
         <<setw(13)<<cli.GetDoctor(i).GetCantidad()
         <<setw(25)<<cli.GetDoctor(i).GetMonto()<<endl;
     cout<<"Total ingreso por operaciones:"<<cli.TotalOp()<<endl;
     cout<<"Total ingreso por operaciones de la clinica:"<< cli.TotalCl()<<endl;
     cout<<"Porcentaje de medicos con ingresos por operaciones superaron los 100000 BF:"<<cli.Porc()<< endl;
     cout<<"MAYOR CANTIDAD DE OPERACIONES:"<<endl;
     for(int i=0; i<cli.GetSize(); ++i)
         if(cli.Mayor() == cli.GetDoctor(i).GetCantidad())
         cout<<setw(25)<<cli.GetDoctor(i).GetCantidad()<<setw(25)<<cli.GetDoctor(i).GetCedula()<<endl;
         
system("pause");
}

