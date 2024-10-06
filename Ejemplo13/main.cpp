#include "Persona.hpp"
#include <iostream>
#include <set>      
#include <cstdlib>  
#include <ctime>    

using namespace std;

int main() {
    srand(time(0));  // Semilla para generar números aleatorios

    set<int> edadesUnicas;  // Para garantizar que las edades sean únicas

    Persona* personas[10];  // Array para almacenar los objetos Persona

    // Generamos 10 personas con edades únicas entre 18 y 27 años
    for (int i = 0; i < 10; ++i) {
        int edad;
        do {
            edad = 18 + rand() % 10;  // Edad entre 18 y 27
        } while (edadesUnicas.find(edad) != edadesUnicas.end());  // Repetir si ya existe

        edadesUnicas.insert(edad);  // Insertar la edad única en el set

        personas[i] = new Persona(edad);  // Crear un nuevo objeto Persona

        // Mostrar la información de cada persona
        personas[i]->mostrar();
    }

    // Liberar la memoria asignada
    for (int i = 0; i < 10; ++i) {
        delete personas[i];
    }

    return 0;
}

