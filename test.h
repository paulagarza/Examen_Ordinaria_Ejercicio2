#ifndef TEST_H
#define TEST_H


#include "evaluacion.h"


class Test : Evaluacion {
private:
    // Atributos
    string fechaRealizacion;

public:
    // Constructor por defecto
    Test();

    // Constructor parametrizado
    Test(const string& nombre, double peso, double calificacionBase, const string& fechaRealizacion);

    // Destructor
    ~Test() = default;

    // Getters
    string getFechaRealizacion() const;

    // Setters
    void setFechaRealizacion(const string& fechaRealizacion);

    // Método calcular calificacion (sobreescribir)
    double calcularCalificacion() override;

};

#endif // TEST_H
