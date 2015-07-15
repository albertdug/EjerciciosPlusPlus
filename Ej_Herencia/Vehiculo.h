// Archivo de cabecera vehiculo.h

#ifndef VEHICULO_H
#define VEHICULO_H

class Vehiculo
{
   protected:
    int ruedas;
    float peso;
    int pasajeros;
   public:
    Vehiculo();
    Vehiculo(int, int, float);
    void SetRuedas(int);
    void SetPasajeros(int);
    void SetPeso(float);
    int GetRuedas();
    int GetPasajeros();
    float GetPeso();
    float RuedasCarga();
};

Vehiculo::Vehiculo(){}

Vehiculo::Vehiculo(int ru, int pa, float pe)
{
   ruedas = ru;
   pasajeros = pa;
   peso = pe;
}

void Vehiculo::SetRuedas(int ru)
{
   ruedas = ru;    
}

void Vehiculo::SetPasajeros(int pa)
{
   pasajeros = pa;    
}

void Vehiculo::SetPeso(float pe)
{
   peso = pe;  
}

// obtiene el numero de llantas del vehiculo
int Vehiculo::GetRuedas()
{
   return ruedas;
}

int Vehiculo::GetPasajeros()
{
   return pasajeros;
}

// retorna el peso del vehiculo
float Vehiculo::GetPeso()
{
   return peso;
}

// retorna el peso en cada llanta
float Vehiculo::RuedasCarga()
{
   return peso/ruedas;
}

#endif
