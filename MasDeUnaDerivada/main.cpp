#include <iostream>
#include "Derivada2.h"

using namespace std;
int main()
{
 Derivada2 obj;
 
 obj.SetNum1(10); // accesar a miembro de base
 obj.SetNum2(20); // accesar a miembro de base
 obj.SetNum_d1(30); // accesar a miembro de Derivada
 obj.SetNum_d2(40); // accesar a miembro de Derivada
 cout<<"Miembro 1 de base : "<<obj.GetNum1()<<endl;  // accesar a miembro de base
 cout<<"Miembro 2 de base : "<<obj.GetNum2()<<endl;  // accesar a miembro de base
 cout<<"Miembro Derivada 1 : "<<obj.GetNum_d1()<<endl; // usa miembro de la clase derivada1
 cout<<"Miembro Derivada 2 : "<<obj.GetNum_d2()<<endl; // usa miembro de la clase derivada2
 cout<<"La suma de derivada 1 : "<<obj.Suma1()<<endl;
  cout<<"La suma de derivada 2 : "<<obj.Suma2()<<endl;
 system("pause");
 return 0;
}
