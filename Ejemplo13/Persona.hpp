#ifndef PERSONA_HPP
#define PERSONA_HPP

class Persona {
private:
    bool genero;  // 1 = Mujer, 0 = Hombre
    int edad;
    char dni[10];

    // Método auxiliar para generar un DNI aleatorio
    void generarDNI();

public:
    // Constructor
    Persona(int edad);

    // Destructor
    ~Persona();

    // Devuelve la edad de la persona
    int getEdad() const;

    // Devuelve true si es mujer, false si es hombre
    bool esMujer() const;

    // Establece una nueva edad para la persona
    void setEdad(int nuevaEdad);

    // Muestra la información de la persona
    void mostrar() const;
};

#endif // PERSONA_HPP
