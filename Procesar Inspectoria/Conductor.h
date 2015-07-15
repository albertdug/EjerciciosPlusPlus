using namespace std;
class Conductor
{
      private:
              string nombre;
              //int dial, mesl, anol;
              Fecha fl;
      public:
             Conductor();
             Conductor(string n, int d, int m, int a);
             void SetNombre(string n);
             void SetFecha(int dl, int ml, int al);            
             string GetNombre();
             Fecha GetFecha()
             };

Conductor :: Conductor() {}

Conductor :: Conductor(string n, int d, int m, int a)
{
          nombre = n;
          dial = d;
          mesl = m;
          anol = a;
}

void Conductor :: SetNombre(string n)
{
     nombre = n;
}

void Conductor :: SetFecha(int dl, int ml, int al)
{
     fl.SetDia(dl);
     //falta
}

void Conductor :: SetMes(int m)
{
     mesl = m;
}

void Conductor :: SetAno(int a)
{
     anol = a;
}

string Conductor :: GetNombre()
{
       return nombre;
}

int Conductor :: GetDia()
{
    return dial;
}
int Conductor :: GetMes()
{
    return mesl;
}
int Conductor :: GetAno()
{
    return anol;
}
