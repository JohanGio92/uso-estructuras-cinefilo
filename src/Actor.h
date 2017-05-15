#ifndef ACTOR_H_
#define ACTOR_H_

#include <string>

class Actor {

    private:

        std::string nombre;

    public:

       /* post: Actor creado con el nombre indicado.
        */
       Actor(std::string nombre);

       /* post: nombre completo del Actor.
        */
       std::string obtenerNombre();

};

#endif /* ACTOR_H_ */
