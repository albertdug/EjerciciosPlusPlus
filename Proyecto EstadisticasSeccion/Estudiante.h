class Estudiante
{
public:
   Estudiante();
   Estudiante(long, float);
   void SetCedula(long);
   void SetNota(float);
   float GetCedula();
   float GetNota();
private:
   long cedula;     
   float nota;       
};

Estudiante :: Estudiante(){}

Estudiante :: Estudiante(long c, float n)
{
   cedula = c;
   nota = n;
}

void Estudiante :: SetCedula(long c)
{
   cedula = c;
}

void Estudiante :: SetNota(float n)
{
   nota = n;
}

float Estudiante :: GetCedula()
{
   return cedula;
}

float Estudiante :: GetNota()
{
   return nota;
}
