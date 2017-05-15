#ifndef PELICULA_H_
#define PELICULA_H_

#include <string>
#include "Lista.h"
#include "Actor.h"

class Pelicula {

    private:

        std::string titulo;

        Lista<Actor*>* protagonistas;

        Lista<Actor*>* reparto;

    public:

        /* post: Pelicula identificada por titulo y sin Actores asociados.
         */
        Pelicula(std::string titulo);

        ~Pelicula();

        /* post: devuelve el título de la Película.
         */
        std::string obtenerTitulo();

        /* post: devuelve los Actores que protagonizan la Película.
         */
        Lista<Actor*>* obtenerProtagonistas();

        /* post: devuelve TODOS los Actores que participaron de la Película,
         *       incluyendo los protagonistas.
         */
        Lista<Actor*>* obtenerReparto();

        /*
         * post: devuelve si 'actor' es uno de los protagonistas de la Película.
         */
        bool estaProtagonizadaPor(Actor* actor);

        /*
         * post: devuelve si 'actor' pertenece al reparto de la Película.
         */
        bool estaEnElReparto(Actor* actor);

    private:

        bool estaEnLaLista(Actor* actor, Lista<Actor*>* actores);
};













#endif /* PELICULA_H_ */
