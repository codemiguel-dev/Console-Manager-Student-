#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Estudiante {
    string nombre;
    int edad;
    float calificacion;
};

void agregarEstudiante(vector<Estudiante>& estudiantes) {
    Estudiante e;
    cout << "Introduce el nombre del estudiante: ";
    cin >> e.nombre;
    cout << "Introduce la edad: ";
    cin >> e.edad;
    cout << "Introduce la calificaci�n: ";
    cin >> e.calificacion;
    estudiantes.push_back(e);
}

void mostrarEstudiantes(const vector<Estudiante>& estudiantes) {
    for (const auto& e : estudiantes) {
        cout << "Nombre: " << e.nombre << ", Edad: " << e.edad
            << ", Calificaci�n: " << e.calificacion << endl;
    }
}

int main() {
    vector<Estudiante> estudiantes;
    int opcion;

    do {
        cout << "1. Agregar Estudiante\n2. Mostrar Estudiantes\n3. Salir\nElige una opci�n: ";
        cin >> opcion;
        switch (opcion) {
        case 1: agregarEstudiante(estudiantes); break;
        case 2: mostrarEstudiantes(estudiantes); break;
        case 3: cout << "Saliendo..." << endl; break;
        default: cout << "Opci�n no v�lida." << endl;
        }
    } while (opcion != 3);

    return 0;
}
