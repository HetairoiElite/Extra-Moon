#include <iostream>
#define HorasxJornada 8

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
    EmpleadoxHora() : Empleado() {}
    EmpleadoxHora(float _sueldo, string _nombre, int _horas) : Empleado(_sueldo, _nombre, _horas)
    {
    }
    ~EmpleadoxHora();
    float calcularSueldo();
};

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
    EmpleadoxPlanta e1(10.10, "John", HorasxJornada);
    std::cout << "El sueldo del empleado de planta " << e1.getNombre() << " es: " << e1.calcularSueldo() << std::endl;

    EmpleadoxHora e2(5.50, "Gato", HorasxJornada);
    std::cout << "El sueldo del empleado por hora " << e2.getNombre() << " es: " << e2.calcularSueldo() << std::endl;
    return 0;
}
