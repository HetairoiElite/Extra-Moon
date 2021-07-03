#include <iostream>

using namespace std;

class Empleado
{
protected:
    float sueldo;
    int horas;
    string nombre;

public:
    Empleado();
    Empleado(float _sueldo, string _nombre, int _horas);
    ~Empleado();

    float getSueldo();
    string getNombre();
    int getHoras();
    void setHoras(int _horas);
    void setSueldo(float _sueldo);
    void setNombre(string _nombre);
    virtual float calcularSueldo() = 0;
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
Empleado::Empleado(float _sueldo, string _nombre, int _horas)
{
    sueldo = _sueldo;
    nombre = _nombre;
    horas = _horas;
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
    float calcularSueldo() = 0;
};

EmpleadoxHora::EmpleadoxHora() : Empleado::Empleado()
{
}

EmpleadoxHora::~EmpleadoxHora()
{
}

float EmpleadoxHora::calcularSueldo()
{
    return sueldo * horas;
}

class EmpleadoxPlanta : public Empleado
{
private:
public:
    EmpleadoxPlanta() : Empleado() {}
    EmpleadoxPlanta(float _sueldo, string _nombre, int _horas) : Empleado(_sueldo, _nombre, _horas)
    {
    }
    ~EmpleadoxPlanta();
    float calcularSueldo();
};
float EmpleadoxPlanta::calcularSueldo()
{
    return sueldo;
}

EmpleadoxPlanta::~EmpleadoxPlanta()
{
}

int main(int argc, const char **argv)
{
    string nombre = "John";
    EmpleadoxPlanta e1(10.10, nombre, 10);
    return 0;
}
