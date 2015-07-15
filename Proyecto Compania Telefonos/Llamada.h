using namespace std;
class Llamada {
private:
   int tipo , duracion;
public:
   Llamada ();
   Llamada (int, int);   
   void SetTipo (int);
   void SetDuracion (int);
   int GetTipo ();
   int GetDuracion ();
   float CalcMonto ();
};

Llamada :: Llamada (){}

Llamada :: Llamada (int t, int d)
{
   tipo = t;
   duracion = d;
}

void Llamada :: SetTipo (int t)
{
  tipo = t;   
}

void Llamada :: SetDuracion (int d)
{
  duracion = d;   
}

int Llamada :: GetTipo ()
{
   return tipo;
}

int Llamada :: GetDuracion ()
{
   return duracion;
}

float Llamada :: CalcMonto ()
{
   float monto;  
   /*switch (tipo)   ESTO NO FUNCIONO, NO SALE EL MONTO CORRECTO
   {                 PRUEBENLO PARA QUE VEAN, PARA MI ES UNA INCOGNITA
     case 1: monto = duracion * 0,06;         
             break;
     case 2: monto = duracion * 0,50;
             break;
     case 3: monto = duracion * 0,30;
             break;        
   }*/
   if (tipo == 1)
       monto = duracion * 0.06;
   else 
     if (tipo == 2)
         monto = duracion * 0.50;
     else monto = duracion * 0.30;  
   return monto;     
   
}
