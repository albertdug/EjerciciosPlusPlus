/*
Se conoce de cada uno de los estudiantes de una seccion su
cedula y nota final.
Se desea conocer por dicha seccion el porcentaje de aprobados,
el porcentaje de aplazados y promedio de notas.
*/
#include <iostream>

#include <iomanip>
#include <string>
#include "Seccion.h" //Incluye la clase Seccion en este programa

using namespace std;

//prototipos
void InterfazEntrada (long &c, float &n);
char Continuar(int x, int y, string msj);
void InterfazSalida (Seccion s);

int main()
{
    char resp;        
    float n;
    long c;   // Variable para lectura de datos por teclado
    Seccion s;	//instancia la clase Seccion (crea un objeto)
    do 
    {
       InterfazEntrada(c,n);
       s.ProcesarEstudiante(c,n); //Usa la clase Seccion
     
    resp = (Continuar (1,5,"Desea procesar otro empleado? S - N: ")); 
    }
    while (toupper(resp)=='S'); 
    InterfazSalida(s);
	return 0;
}


void InterfazEntrada (long &c, float &n)
{
   cout << "Ingrese los datos del estudiante : " << endl;
   cout << "Ingrese Cedula : ";
   cin >> c;
   cout << "Ingrese Nota : ";
   cin >> n;
}

char Continuar(int x, int y, string msj)
{
   char resp;
   cout << msj;
   cin >> resp;
   return toupper(resp);
}

void InterfazSalida (Seccion s)
{
   cout << "Porcentaje de Aprobados :  ";
   cout << setiosflags(ios::fixed)
        << setprecision(2) << s.PorcentajeAprobados() << endl;
   cout << "Porcentaje de Aplazados : " 
        << setiosflags(ios::fixed)
        << setprecision(2) << s.PorcentajeAplazados() << endl;
   cout << "Promedio de Notas : " 
        << setiosflags(ios::fixed)
        << setprecision(2) << s.PromedioNotas() << endl;
   system ("PAUSE");
}
