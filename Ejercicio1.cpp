#include <iostream>

using namespace std;

class Empleado
{
private:
    float sueldo;
    int horas;
    string nombre;

public:
    Empleado();
    Empleado(float _sueldo, string _nombre);
    ~Empleado();

    float getSueldo();
    string getNombre();
    int getHoras();
    void setHoras(int _horas);
    void setSueldo(float _sueldo);
    void setNombre(string _nombre);
    virtual float calcularSueldo(float _horas);
};

float Empleado::getSueldo()
{
    return sueldo;
}

string Empleado::getNombre()
{
    return nombre;
}

int Empleado::getHoras()
{
    return horas;
}

void Empleado::setHoras(int _horas)
{
    horas = _horas;
}

void Empleado::setNombre(string _nombre)
{
    nombre = _nombre;
}
void Empleado::setSueldo(float _sueldo)
{
    sueldo = _sueldo;
}

Empleado::Empleado()
{
}
Empleado::Empleado(float _sueldo, string _nombre)
{
}

Empleado::~Empleado()
{
}

class EmpleadoxHora : public Empleado
{
private:
public:
    EmpleadoxHora();
    ~EmpleadoxHora();
};

EmpleadoxHora::EmpleadoxHora()
{
}

EmpleadoxHora::~EmpleadoxHora()
{
}

class EmpleadoxPlanta : public Empleado
{
private:
public:
    EmpleadoxPlanta();
    ~EmpleadoxPlanta();
};

EmpleadoxPlanta::EmpleadoxPlanta()
{
}

EmpleadoxPlanta::~EmpleadoxPlanta()
{
}

int main(int argc, const char **argv)
{
    EmpleadoxPlanta expl;
    return 0;
}
