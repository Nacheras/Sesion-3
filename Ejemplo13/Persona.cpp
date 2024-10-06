#include "Persona.hpp"
#include <iostream>
#include <cstdlib>  // Para srand y rand
#include <ctime>    // Para time

using namespace std;

// Método auxiliar para generar un DNI aleatorio
void Persona::generarDNI() {
    for (int i = 0; i < 8; ++i) {
        dni[i] = '0' + rand() % 10;  // Genera un dígito aleatorio
    }
    dni[8] = 'A' + rand() % 26;  // Genera una letra aleatoria
    dni[9] = '\0';               // Terminador de cadena
}

// Constructor
Persona::Persona(int edad) : edad(edad) {
    // Generar género aleatorio
    genero = rand() % 2;
    // Generar el DNI
    generarDNI();
}

// Destructor
Persona::~Persona() {}

// Devuelve la edad de la persona
int Persona::getEdad() const {
    return edad;
}

// Devuelve true si es mujer, false si es hombre
bool Persona::esMujer() const {
    return genero == 1;
}

// Establece una nueva edad para la persona
void Persona::setEdad(int nuevaEdad) {
    edad = nuevaEdad;
}

// Muestra la información de la persona
void Persona::mostrar() const {
    cout << "Género: " << (genero ? "Mujer" : "Hombre") << "\n";
    cout << "Edad: " << edad << "\n";
    cout << "DNI: " << dni << "\n";
    cout << "----------------------------\n";
}

