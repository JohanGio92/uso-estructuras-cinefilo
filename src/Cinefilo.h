#ifndef CINEFILO_H_
#define CINEFILO_H_

#include "Pelicula.h"

class Cinefilo {

    public:

        /*
         * post: procesa 'actores' y devuelve aquellos que NUNCA fueron
         *       protagonistas de una Película en 'peliculasAnalizadas',
         *       es decir que están en el reparto de alguna Película
         *       pero que nunca protagonizaron ninguna.
         *       Devuelve una nueva Lista con los Actores secundarios
         *       encontrados.
         */
        Lista<Actor*>*
            filtrarActoresSecundarios(Lista<Actor*>* actores,
                                      Lista<Pelicula*>* peliculasAnalizadas);

    private:

        /*
         * post: devuelve si 'actor' es un Actor secundario (está en el
         *       reparto pero no es protagonista) en alguna Pelicula
         *       de 'peliculasAnalizadas'.
         */
        bool esSecundario(Actor* actor, Lista<Pelicula*>* peliculasAnalizadas);

        /*
         * post: devuelve si 'actor' es un Actor protagonista
         *       en alguna Pelicula de 'peliculasAnalizadas'.
         */
        bool esProtagonista(Actor* actor, Lista<Pelicula*>* peliculasAnalizadas);

        /*
         * post: devuelve si 'actor' es un Actor del reparto
         *       en alguna Pelicula de 'peliculasAnalizadas'.
         */
        bool estaEnElReparto(Actor* actor, Lista<Pelicula*>* peliculasAnalizadas);
};

#endif /* CINEFILO_H_ */
