#include <string>
using namespace std;
class Compania
{
   private:
     string nombre, direccion, rif;
     long telefono;
   public:
     Compania ();
     Compania (string n, string d, long telef, string r);
     void SetNombre (string n);
     void SetDireccion (string d);
     void SetTelefono (long telef);
     void SetRif (string r);
     string GetNombre ();
     string GetDireccion ();
     long GetTelefono ();
     string GetRif ();
};

//Contructor
Compania::Compania (){}
//Constructor
Compania::Compania (string n, string d, long telef, string r)
{
   nombre=n;
   direccion=d;
   telefono=telef;
   rif=r;
}              
void Compania::SetNombre (string n)
{
   nombre=n;
}

void Compania::SetDireccion (string d)
{
   direccion=d;
}

void Compania::SetTelefono (long telef)
{
   telefono=telef;
}

void Compania::SetRif (string r)
{
   rif= r;
}

//getters
string Compania::GetNombre ()
{
   return nombre;
}

string Compania::GetDireccion ()
{
   return direccion;
}

long Compania::GetTelefono ()
{
   return telefono;
}

string Compania::GetRif ()
{
   return rif;
}
             
              
