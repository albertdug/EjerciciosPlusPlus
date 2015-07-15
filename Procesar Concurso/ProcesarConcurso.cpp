#include <iostream>
#include <iomanip>
#include "Concurso.h"
using namespace std;

void InterfazEntrada(long &c, string &n,vector<float> &cts);
string conversion(int &ct);
void InterfazSalida(Concurso co);

int main()
{
    long c;
    string n;
    int opc, ct;
    vector<float> cts;
    Concurso co;
    system ("color 90");
    do
    {
           system("cls");
    cout<<setw(30)<<"MENU DE OPCIONES"<<endl;
    cout<<setw(30)<<"~~~~~~~~~~~~~~~~"<<endl;
    cout<<endl;
    cout<< "1) =====> Procesar una Candidata  <====="<<endl;
    cout<<endl;
    cout<< "2) =====> Mostrar Resultados Generales <====="<<endl;
    cout<<endl;
    cout<< "3) =====> Buscar una Candidata en especifico <====="<<endl;
    cout<<endl;
    cout<< "4) =====> buscar las mas altas puntuaciones <====="<<endl;
    cout<<endl;
    cout<< "5) =====> Ver nombre de las seleccionadas <====="<<endl;
    cout<<endl;
    cout<< "6) =====> FINALIZAR <====="<< endl;
    cout<<endl;
    cout<< " Seleccionar Opcion :";
    cin>> opc;
    
    switch(opc)
    {
               case 1 : InterfazEntrada(c, n, cts);
                        co.ProcesarCandidata(c, n, cts);
                        break;
               case 2 : co.Ordenar();
                        InterfazSalida(co);
                        break;
               case 3 : system("cls");
                        cout<<setw(24)<<"INTRODUZCA DATO"<<endl;
                        cout<<setw(24)<<"###############"<<endl;
                        cout<< "Ingrese la cedula da la candidata : ";
                        cin>> c;
                        int p;
                        p = co.Busqueda(c);
                        if(p!= -1)
                        {
                        int j = 0;
                            cout<<"Su nombre es : "<<co.GetCandidata(p).GetNombre()<<endl;
                            cout<<endl;
                            cout<<"Sus puntuaciones fueron :"<<endl;
                            cout<<"BELLEZA :"<<co.GetCandidata(p).GetCriterios(j)<<endl;
                            ++j;
                            cout<<endl;
                            cout<<"INTELIGENCIA :"<<co.GetCandidata(p).GetCriterios(j)<<endl;
                            ++j;
                            cout<<endl;
                            cout<<"CUERPO :"<<co.GetCandidata(p).GetCriterios(j)<<endl;
                            ++j;
                            cout<<endl;
                            cout<<"DESENVOLVIMIENTO :"<<co.GetCandidata(p).GetCriterios(j)<<endl;
                            cout<<endl;
                            cout<< "Su puntaje final fue :"<< co.GetCandidata(p).Puntaje()<<endl;
                        }
                         else
                            cout<< " La Candidata NO EXISTE"<<endl;
                         system("pause");
                         break;
               case 4 : system("cls");
                        cout<< "Elija el criterio deseado (1)B (2)I (3)C (4)D :";
                        cin>> ct;
                        cout<< "La cantidad de candidatas con la puntuacion maxima en el criterio "
                            <<conversion(ct)<<" : "<<co.PuntajeMayor(ct)<<endl;
                        system("pause"); 
                        break;
               case 5 :
                        system("cls");
                        if(co.Seleccionadas().size()!=0)
                        {
                        cout<<"Las candidatas Selecionadas fueron :"<<endl;
                        for(int i =0; i<co.Seleccionadas().size();++i)
                        cout<<setw(15)<<"***"<<co.Seleccionadas()[i]<<"***"<<endl;
                        }
                        else
                        cout<< "No hay candidastas Seleccionasdas"<<endl;
                        system("pause");
    }
    }
    while(opc != 6);
    
    return 0;
}
 
void InterfazEntrada(long &c, string &n,vector<float> &cts)
{
     float pt;
     int ct =0;
     system("cls");
     system("color 90");
     cout<<setw(24)<<"INGRESAR DATOS"<<endl;
     cout<<setw(24)<<"**************"<<endl;
     cout<<endl;
     cout<< "INGRESE LA CEDULA DE IDENTIDAD : "<<endl;
     cin>> c;
     cout<< "INGRESE EL NOMBRE DE LA CANDIDATA :"<< endl;
     cin.sync();
     getline(cin, n);
     cts.clear();
     for(int ct=1; ct<=4; ++ct)
     {
        cout<< "Puntaje de "<<conversion(ct)<<" : "<<endl;
        cin>> pt;
        cts.push_back(pt);      
     }
           
}

string conversion(int &ct)
{
       switch(ct)
       {
                 case 1 : return " BELLEZA ";
                          break;
                 case 2 : return " INTELIGENCIA ";
                          break;
                 case 3 : return " CUERPO ";
                          break;
                 case 4 : return " DESENVOVIMIENTO ";
                          break;
       }
}

void InterfazSalida(Concurso co)
{
     system("cls");
     system("color 37");
     cout<<setw(10)<<"RESULTADOS PRESELECCION CONCURSO DE BELLEZA"<<endl;
     cout<<setw(10)<<"==========================================="<<endl;
     cout<<endl;
     cout<<setw(10)<<"CEDULA"<<setw(12)<<"NOMBRE"<<setw(12)<<"BELLEZA"<<setw(12)<<"INTELIG"
         <<setw(12)<<"CUERPO"<<setw(12)<<"DESENVOL"<<setw(8)<<"TOTAL"<<endl;
     for(int i=0; i<co.GetSize(); ++i)
     {
     cout<<setw(10)<<co.GetCandidata(i).GetCedula()
         <<setw(12)<<co.GetCandidata(i).GetNombre();
     for(int j=0; j<co.GetCandidata(i).Getsize(); ++j)
        cout<<setw(12)<<co.GetCandidata(i).GetCriterios(j);
     cout<<setw(8)<<co.GetCandidata(i).Puntaje()<<endl;
     }
     
system("pause");
}
