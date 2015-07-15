class Cliente
{
   private:
     long cedula;
     string nombrec, dirc;
   public:
     Cliente();
     Cliente (long ced, string nc, string dc);
     void SetCedula (long ced);
     void SetNombrec (string nc);
     void SetDirec (string dc);
     long GetCedula ();
     string GetNombrec ();
     string GetDirec ();
};
//Constructor
Cliente::Cliente (){}

//Constructor
Cliente::Cliente (long ced, string nc, string dc)
{
   cedula=ced;
   nombrec=nc;
   dirc= dc;
}

void Cliente::SetCedula (long ced)
{
   cedula=ced;
}

void Cliente::SetNombrec (string nc)
{
   nombrec=nc;
}

void Cliente::SetDirec (string dc)
{
   dirc=dc;
}

long Cliente::GetCedula ()
{
   return cedula;
}

string Cliente:: GetNombrec ()
{
   return nombrec;
}

string Cliente:: GetDirec ()
{
   return dirc;
}         
             
