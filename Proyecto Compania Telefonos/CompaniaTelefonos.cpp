/*Una Compañía que alquila teléfonos desea un reporte 
estadístico diario. Por cada llamada se conoce el tipo 
de llamada (1-> local, 2-> internacional, 3-> celular) 
y duración de la llamada (en minutos). Para calcular 
el monto de cada llamada considere la siguiente tabla:
Tipo de llamada			Monto Bs.F/min
	1 -> local				0.06				
	2 -> internacional		0.50				
	3 -> celular			0.30				
Por otra parte se conoce de la Compañía su Nombre Dirección
y RIF.
El reporte que se requiere es el siguiente:

Compañía xxxx
RIF: xxxx
Dirección: xxxxxx

				Reporte Diario de Bs. cobrados en llamadas

Tipo de llamada		Total de llamadas	        Monto total en Bs.F
		  Local			    	  xxx	  	           xxxx		
  Internacional		    	 	  xxx			       xxxx		
		Celular			    	  xxx			       xxxx	


Monto Total en Bs.F diarios : xxxx
Tipo de llamada con mayor frecuencia : xxxxxx 
*/
#include <string>
#include <iostream>
#include <iomanip>
#include "Compania.h"

using namespace std;

void InterfazCompannia(string &nom, string &dir, string &rif);
void InterfazLLamada(int &t_ll, int &dur);
void InterfazSalida(Compania);

int main () 
{
   string nom, dir, rif;   
   char opc;
   int t_ll, dur;
   
   InterfazCompannia(nom, dir, rif);
   Compania cm (nom, dir, rif);
   do
   {
       InterfazLLamada(t_ll, dur);
       cm.ProcesarLlamada (t_ll, dur);
       cout<<"Otra llamada (S/N) : ";
       cin>>opc;
   }
   while (toupper(opc) == 'S');
   InterfazSalida(cm);
   return 0;
}

void InterfazCompannia(string &nom, string &dir, string &rif)
{
   cout << "Datos de la compania de telefonos: " << endl;  
   cout << "Nombre : ";
   cin >> nom;
   cout << "Direccion : ";
   cin >> dir;
   cout << "RIF : ";
   cin >> rif;
   cout << endl;
}

void InterfazLLamada(int &t_ll, int &dur)
{
    cout << "Datos de la llamada : " << endl;
    cout << "Tipo (1=Local, 2=Internacional, 3=Celular) : ";
    cin >> t_ll;
    cout << "Duracion (minutos) : ";
    cin >> dur;
}

void InterfazSalida(Compania cm)
{
   system ("cls");
   cout << "Compania: "<< cm.GetNombre () << endl;
   cout << "RIF: "<< cm.GetRIF () << endl;
   cout << "Direccion: " << cm.GetDireccion () << endl;
   cout << endl;
   cout << setw(35) << "Reporte diario de llamadas\n";
   cout << setw(35) << "==========================\n";
   cout << endl;
   cout << setw(13)<<"Tipo"
        << setw(22) << "Cantidad Llamadas"
        << setw(8)<<"BsF"<<endl;
   cout << setw(13) << "Local" 
        << setw(22) << cm.CantidadLocal () 
        << setw(8) << cm.MontoLocal () << endl;
   cout << setw(13)<< "Internacional" 
        << setw(22) << cm.CantidadIntern () 
        << setw(8) << cm.MontoIntern () << endl;
   cout << setw(13)<< "Celular" 
        << setw(22) << cm.CantidadCelular () 
        << setw(8) << cm.MontoCelular () << endl;
   cout << endl;
   cout << "Monto total en BsF diarios: " << cm.MontoTotaLlamadas () << endl;
   cout << "Tipo de llamada con mayor frecuencia : " << cm.MayorFrecuencia () << endl;
   cout << endl;
   system("PAUSE");
}
