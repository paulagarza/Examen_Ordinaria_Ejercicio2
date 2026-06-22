#ifndef ACTIVIDAD_H
#define ACTIVIDAD_H


#include "evaluacion.h"

class Actividad : public Evaluacion {
private:
    // Atributos
    bool entregada;

public:
    // Constructor por defecto
    Actividad();

    // Constructor parametrizado
    Actividad(const string& nombre, double peso, double calificacionBase, bool entregada);

    // Destructor
    ~Actividad() = default;

    // Getters
    bool getEntregada() const;

    // Setters
    void setEntregada(bool entregada);

    // Método calcular calificacion (sobreescribir)
    double calcularCalificacion() override;

};

#endif // ACTIVIDAD_H
