#include "actividad.h"

// Constructor por defecto
Actividad::Actividad() : Evaluacion(), entregada(false) {

}

// Constructor parametrizado
Actividad::Actividad(const string& nombre, double peso, double calificacionBase, bool entregada) : Evaluacion(nombre, peso, calificacionBase), entregada(entregada) {

}

// Getters
bool Actividad::getEntregada() const {
    return entregada;
}

// Setters
void Actividad::setEntregada(bool entregada) {
    this->entregada = entregada;
}

// Método calcular calificacion (sobreescribir)
double Actividad::calcularCalificacion() {
    if (entregada == true) {
        return peso*calificacionBase;
    }
    return 0;
}
