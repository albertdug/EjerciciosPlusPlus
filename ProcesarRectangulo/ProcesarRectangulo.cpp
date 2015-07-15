#include <iostream>
#include <iomanip>
#include "Rectangulo.h"
using namespace std;

void InterfazEntrada (float & base,float & alt);
void InterfazSalida (Rectangulo obj_rec);

int main ()
{
    float bas, alt;
    InterfazEntrada (bas, alt);
    Rectangulo obj_rec (bas, alt);
    InterfazSalida (obj_rec);
    return 0;
}
void InterfazEntrada (float & bas, float & alt)
{
     cout<<"ingrese los datos del rectangulo"<<endl;
     cout<<"ingrese la base:";
     cin>>bas;
     cout<<"ingrese la altura:";
     cin>>alt;
}
void InterfazSalida (Rectangulo obj_rec)
{
     system ("cls");
     cout<<"el area del rectangulo es:"<<setiosflags (ios::fixed)<<setprecision(2)<<obj_rec.Area()<<endl;
     cout<<"el perimetro del rectangulo es:"<<setiosflags (ios::fixed)<<setprecision(2)<<obj_rec. Perimetro ()<<endl;
     system ("pause");
}

