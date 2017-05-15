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

bool Pelicula::estaProtagonizadaPor(Actor* actor) {

    return estaEnLaLista(actor, this->obtenerProtagonistas());
}

bool Pelicula::estaEnElReparto(Actor* actor) {

    return estaEnLaLista(actor, this->obtenerReparto());
}

bool Pelicula::estaEnLaLista(Actor* actor, Lista<Actor*>* actores) {

    bool esta = false;

    actores->iniciarCursor();
    while (!esta && actores->avanzarCursor()) {

        esta = (actor->obtenerNombre() ==
                actores->obtenerCursor()->obtenerNombre());
    }

    return esta;
}

Pelicula::~Pelicula() {

    delete this->protagonistas;
    delete this->reparto;
}
