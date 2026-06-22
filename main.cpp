
#include <iostream>
#include "actividad.h"
#include "alumno.h"
#include "evaluacion.h"
#include "test.h"
using namespace std;

int main() {
    try {
        Alumno a1;

        shared_ptr<Evaluacion> actividad1 = make_shared<Actividad>("Actividad 1", 1, 10, true);
        shared_ptr<Evaluacion> actividad2 = make_shared<Actividad>("Actividad 2", 0.6, 10, false);
        shared_ptr<Evaluacion> actividad3 = make_shared<Actividad>("Actividad 3", 0.5, 10, true);
        shared_ptr<Evaluacion> test1 = make_shared<Test>("Test 1", 1, 10, "20/05/2026");
        shared_ptr<Evaluacion> test2 = make_shared<Test>("Test 2", 0.2, 10, "21/05/2026");
        shared_ptr<Evaluacion> test3 = make_shared<Test>("Test 3", 0.6, 10, "22/05/2026");

        cout << "---- Calificaciones de las Actividades ----" << endl;
        cout << "Calificacion Actividad 1: " << actividad1->calcularCalificacion() << endl;
        cout << "Calificacion Actividad 2: " << actividad2->calcularCalificacion() << endl;
        cout << "Calificacion Actividad 3: " << actividad3->calcularCalificacion() << endl;

        cout << "---- Calificaciones de los Tests ----" << endl;
        cout << "Calificacion Test 1: " << test1->calcularCalificacion() << endl;
        cout << "Calificacion Test 2: " << test2->calcularCalificacion() << endl;
        cout << "Calificacion Test 3: " << test3->calcularCalificacion() << endl;

        cout << "---- Alumno ----" << endl;
        cout << a1 << endl;
        cout << "Calificacion Final: " << a1.calcularNotaFinal();

    } catch (const exception& e) {
        cout << e.what() << endl;
    }

    return 0;
}
