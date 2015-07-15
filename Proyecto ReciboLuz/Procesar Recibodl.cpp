#include <iostream>
#include <string>
#include "Compania.h"
#include "Cliente.h"
#include "Pago.h"
using namespace std;

void InterfazEntrada(string &n,string &d,long &telef,string &r,
                     long &ced,string &nc,string &dc,
                     int &i,int &z);
void InterfazSalida(Compania c,Cliente cl, Pago p);

int main()
{
string n,nc,d,dc,r;
long telef,ced;
int z,i;
InterfazEntrada(n,d,telef,r,ced,nc,dc,i,z);
Compania c(n, d,telef,r);
Cliente cl(ced,nc,dc);
Pago p(i,z);
InterfazSalida(c, cl, p);
return 0;
}

void InterfazEntrada(string &n,string &d,long &telef,string &r,
                     long &ced,string &nc,string &dc,
                     int &i,int &z)
{
   cout<<"Ingrese Datos de la Empresa"<<endl;
   cout<<"***************************"<<endl;
   cout<<"Nombre : ";    
   getline (cin,n);
   cout<<"Direccion : "; 
   getline (cin, d);
   cout<<"Telefono : ";  
   cin>>telef;
   cin.sync();
   cout<<"Rif : ";       
   getline (cin,r);
   cout<<"Ingrese Datos del cliente"<<endl;  
   cout<<"*************************"<<endl;
   cout<<"Cedula : ";   
   cin>>ced;
   cin.sync();
   cout<<"Nombre : ";    
   getline (cin,nc);
   cout<<"Direccion : "; 
   getline (cin, dc);
   cout<<"Cantidad de impulsos consumidos : ";
   cin>>i;
   cout<<"Zona residencial   (1)ESTE  (2)OESTE  (3)NORTE  (4)SUR : ";
   cin>>z;
}

void InterfazSalida(Compania c,Cliente cl, Pago p)
{
system("cls");
cout<<"NOMBRE : " <<c.GetNombre()<<endl;
cout<<"DIRECCION : "<<c.GetDireccion()<<endl;
cout<<"TELEFONO : "<<c.GetTelefono()<<endl;
cout<<"RIF : "<<c.GetRif()<<endl;
cout<<endl;
cout<<"CEDULA : "<<cl.GetCedula()<<endl;
cout<<"NOMBRE : "<<cl.GetNombrec()<<endl;
cout<<"DIRECCION : "<<cl.GetDirec()<<endl;
cout<<"ZONA RESIDENCIAL : "<<p.GetAseo().GetZona()<<endl;
cout<<endl;
cout<<"IMPULSOS CONSUMIDOS : "<<p.GetLuz().GetImpulsos()<<endl;
cout<<"MONTO POR LOS IMPULSOS CONSUMIDOS : "<<p.GetLuz().Monto_impulsos()<<" Bs.F"<<endl;
cout<<"MONTO POR EL SERVICIO DE ASEO : "<<p.GetAseo().Monto_aseo()<<" Bs.F"<<endl;
cout<<"TOTAL A PAGAR : "<<p.Montoapagar()<<" Bs.F"<<endl;
system ("pause");
}
