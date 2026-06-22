#ifndef EVALUACION_H
#define EVALUACION_H

#include <iostream>

using namespace std;


class Evaluacion {
protected:
    // Atributos
    string nombre;
    double peso;
    double calificacionBase;

public:
    // Constructor por defecto
    Evaluacion();

    // Constructor parametrizado
    Evaluacion(const string& nombre, double peso, double calificacionBase);

    // Destructor
    virtual ~Evaluacion() = default;

    // Getters
    string getNombre() const;
    double getPeso() const;
    double getCalificacionBase() const;

    // Setters
    void setNombre(const string& nombre);
    void setPeso(double peso);
    void setCalificacionBase(double calificacionBase);

    // Método virtual puro calcular calificacion
    virtual double calcularCalificacion() = 0;



};

#endif // EVALUACION_H
