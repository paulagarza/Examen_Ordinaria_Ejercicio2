#include "test.h"

// Constructor por defecto
Test::Test() : Evaluacion(), fechaRealizacion("22/06/2026") {

}

// Constructor parametrizado
Test::Test(const string& nombre, double peso, double calificacionBase, const string& fechaRealizacion) : Evaluacion(nombre, peso, calificacionBase), fechaRealizacion(fechaRealizacion) {

}

// Getters
string Test::getFechaRealizacion() const {
    return fechaRealizacion;
}

// Setters
void Test::setFechaRealizacion(const string& fechaRealizacion) {
    this->fechaRealizacion = fechaRealizacion;
}

// Método calcular calificacion (sobreescribir)
double Test::calcularCalificacion() {
    if (fechaRealizacion.empty()) {
        throw invalid_argument("Error: La fechad de realizacion no puede estar vacia");
    }
    return peso*calificacionBase;
}
