class Luz
{
   private:
     int impulsos;
   public:
     Luz();            
     void SetImpulsos (int i);
     int GetImpulsos ();
     float Monto_impulsos ();
};
//Constructor
Luz::Luz (){}

void Luz::SetImpulsos (int i)
{
   impulsos = i;
}

int Luz::GetImpulsos ()
{
   return impulsos;
}

float Luz::Monto_impulsos ()
{
   if (impulsos<1000)
       return (impulsos*0.1);
   else
     if (impulsos<=2000)
         return (impulsos*0.08);
     else
       return (impulsos*0.05);
}

      
