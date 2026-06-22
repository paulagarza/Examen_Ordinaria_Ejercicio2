#ifndef ALUMNO_H
#define ALUMNO_H

#include <iostream>
#include <memory>
#include <vector>
#include "evaluacion.h"
#include "actividad.h"
#include "test.h"

using namespace std;

class Alumno {
private:
    // Atributos
    vector<shared_ptr<Evaluacion>> notas;

public:
    // Constructor por defecto
    Alumno();

    // Constructor parametrizado
    Alumno(const vector<shared_ptr<Evaluacion>>& notas);

    // Getters
    vector<shared_ptr<Evaluacion>> getNotas() const;

    // Setters
    void setNotas(const vector<shared_ptr<Evaluacion>>& notas);

    // Método calcular nota final
    double calcularNotaFinal();

    // Sobrecargar el operador <<
    friend ostream& operator<<(ostream& os, const Alumno& obj);
};

#endif // ALUMNO_H
