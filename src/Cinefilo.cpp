/*
 * Cinefilo.cpp
 *
 *  Created on: 12 may. 2017
 *      Author: mtugnarelli
 */

#include "Cinefilo.h"

Lista<Actor*>*
    Cinefilo::filtrarActoresSecundarios(Lista<Actor*>* actores,
                                        Lista<Pelicula*>* peliculasAnalizadas) {

    Lista<Actor*>* actoresSecundarios = new Lista<Actor*>;

    actores->iniciarCursor();
    while (actores->avanzarCursor()) {
        Actor* actor = actores->obtenerCursor();

        if (this->esSecundario(actor, peliculasAnalizadas)) {

            actoresSecundarios->agregar(actor);
        }
    }

    return actoresSecundarios;
}


bool Cinefilo::esSecundario(Actor* actor,
                            Lista<Pelicula*>* peliculasAnalizadas) {

    return (! this->esProtagonista(actor, peliculasAnalizadas)) &&
           (this->estaEnElReparto(actor, peliculasAnalizadas));

}

bool Cinefilo::esProtagonista(Actor* actor,
                              Lista<Pelicula*>* peliculasAnalizadas) {

    bool esProtagonista = false;

    peliculasAnalizadas->iniciarCursor();
    while (!esProtagonista && peliculasAnalizadas->avanzarCursor()) {

        Pelicula* pelicula = peliculasAnalizadas->obtenerCursor();

        esProtagonista = pelicula->estaProtagonizadaPor(actor);
    }

    return esProtagonista;
}

bool Cinefilo::estaEnElReparto(Actor* actor,
                               Lista<Pelicula*>* peliculasAnalizadas) {

    bool estaEnElReparto = false;

    peliculasAnalizadas->iniciarCursor();
    while (!estaEnElReparto && peliculasAnalizadas->avanzarCursor()) {

        Pelicula* pelicula = peliculasAnalizadas->obtenerCursor();

        estaEnElReparto = pelicula->estaEnElReparto(actor);
    }

    return estaEnElReparto;
}

