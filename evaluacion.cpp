#include "evaluacion.h"

// Constructor por defecto
Evaluacion::Evaluacion() : nombre("Evaluacion"), peso(0), calificacionBase(0) {

}

// Constructor parametrizado
Evaluacion::Evaluacion(const string& nombre, double peso, double calificacionBase) : nombre(nombre), peso(peso), calificacionBase(calificacionBase) {
    // Validaciones
    setNombre(nombre);
    setPeso(peso);
    setCalificacionBase(calificacionBase);
}

// Getters
string Evaluacion::getNombre() const {
    return nombre;
}

double Evaluacion::getPeso() const {
    return peso;
}

double Evaluacion::getCalificacionBase() const {
    return calificacionBase;
}

// Setters
void Evaluacion::setNombre(const string& nombre) {
    if (nombre.empty()) {
        throw invalid_argument("Error: El nombre no puede estar vacio");
    }
    this->nombre = nombre;
}

void Evaluacion::setPeso(double peso) {
    if (peso < 0 || peso > 1) {
        throw invalid_argument("Error: El peso debe estar entre el rango de 0 y 1");
    }
    this->peso = peso;
}

void Evaluacion::setCalificacionBase(double calificacionBase) {
    if (calificacionBase < 0 || calificacionBase > 10) {
        throw invalid_argument("Error: La calificacion base debe estar entre el rango de 0 y 10");
    }
    this->calificacionBase = calificacionBase;
}

