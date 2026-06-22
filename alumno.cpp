#include "alumno.h"

// Constructor por defecto
Alumno::Alumno() {

}

// Constructor parametrizado
Alumno::Alumno(const vector<shared_ptr<Evaluacion>>& notas) : notas(notas) {

}

// Getters
vector<shared_ptr<Evaluacion>> Alumno::getNotas() const {
    return notas;
}

// Setters
void Alumno::setNotas(const vector<shared_ptr<Evaluacion>>& notas) {
    this->notas = notas;
}

// Método calcular nota final
double Alumno::calcularNotaFinal() {
    double calificacionFinal = 0;
    int sumaPesos = 0;
    for (const auto& e : notas) {
        sumaPesos += e->getPeso();
        calificacionFinal += e->calcularCalificacion();
    }
    /*
    if (sumaPesos != 1) {
        throw invalid_argument("Error: La suma de los pesos de las diferentes evaluaciones distinto al valor 1");
    }
    */
    return calificacionFinal;
}

// Sobrecargar el operador <<
ostream& operator<<(ostream& os, const Alumno& obj) {
    os << "---- Datos del Alumno ----" << endl;
    for (const auto& e : obj.notas) {
        os << "Nombre: " << e->getNombre() << endl;
        os << "Peso: " << e->getPeso() << endl;
        os << "Calificacion base: " << e->getCalificacionBase() << endl;

        // Downcasting
        shared_ptr<Actividad> ptrActividad = dynamic_pointer_cast<Actividad>(e);
        if (ptrActividad != nullptr) {
            os << "Entregada: " << ptrActividad->getEntregada();
        }
        shared_ptr<Test> ptrTest = dynamic_pointer_cast<Test>(e);
        if (ptrTest != nullptr) {
            os << "Fecha realizacion: " << ptrTest->getFechaRealizacion();
        }
        os << endl;
    }
    return os;
}
