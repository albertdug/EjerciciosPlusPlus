#include <iostream>
#include "Derivada.h"
using namespace std;
int main()
{
 Derivada obj(10,20,30);
 /*
 Otra forma de instanciar el objeto y darle estado
 Derivada obj;
 obj.SetNum_d(30); // accesar a miembro de Derivada
 obj.SetNum1(10); // accesar a miembro de base
 obj.SetNum2(20); // accesar a miembro de base
 */
 cout<<"Miembro 1 de base : "<<obj.GetNum1()<<endl;  // accesar a miembro de base
 cout<<"Miembro 2 de base : "<<obj.GetNum2()<<endl;  // accesar a miembro de base
 cout<<"Miembro Derivada : "<<obj.GetNum_d()<<endl; // usa miembro de la clase derivada
 cout<<"La suma de los 3 numeros es : "<<obj.Suma()<<endl;
 system("pause");
 return 0;
}
