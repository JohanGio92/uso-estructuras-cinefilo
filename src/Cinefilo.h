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

};

#endif /* CINEFILO_H_ */
