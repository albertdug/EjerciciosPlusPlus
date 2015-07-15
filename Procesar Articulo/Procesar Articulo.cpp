#include <iostream>
#include <iomanip>
#include "Articulo.h"
using namespace std;

//Funcion que permite leer los datos del articlulo por el teclado
void InterfazEntrada(long &cod,float &c);
//Funcion que permite mostrar la informacion del articlulo
void InterfazSalida(Articulo obj_art);

int main ()
{
    long cod;
    float c;
    //se leen los datos del articulo
    InterfazEntrada(cod, c);
    //Se llama alconstructor de la clase articulo
    Articulo obj_art (cod, c);
    //se imprime los precios
    InterfazSalida(obj_art);
    return 0;
}
void InterfazEntrada(long &cod, float &c)
{
     cout<< "Ingrese el codig del articulo"<<endl;
     cout<< "============================="<<endl;
     cout<<"Codigo :";
     cin>> cod;
     cout<<"Costo :";
     cin>> c;
}

void InterfazSalida(Articulo obj_art)
{
     system ("cls");
     cout<< "El codigo del Articulo es :"<<obj_art.GetCodigo()<<endl;
     cout<< "El costo base es :"<<obj_art.GetCosto()<<endl;
     cout<< "Al detal su costo es :"<<setiosflags(ios::fixed)<<setprecision(2)<<obj_art.Precio_Detal()<<endl;
     cout<< "Al mayor su costo es :"<<setiosflags(ios::fixed)<<setprecision(2)<<obj_art.Precio_Mayor()<<endl;
     system ("pause");
}



