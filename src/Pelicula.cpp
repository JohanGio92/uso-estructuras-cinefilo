#include "Pelicula.h"

Pelicula::Pelicula(std::string titulo) {

    this->titulo = titulo;
    this->protagonistas = new Lista<Actor*>;
    this->reparto = new Lista<Actor*>;
}

std::string Pelicula::obtenerTitulo() {

    return this->titulo;
}

Lista<Actor*>* Pelicula::obtenerProtagonistas() {

    return this->protagonistas;
}

Lista<Actor*>* Pelicula::obtenerReparto() {

    return this->reparto;
}

Pelicula::~Pelicula() {

    delete this->protagonistas;
    delete this->reparto;
}
