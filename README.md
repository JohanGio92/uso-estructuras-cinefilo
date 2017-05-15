Algoritmos y Programación 2 - FI UBA

# Uso de Estructuras Dinámicas: Cinéfilo

## Enunciado

Considerando las clases:

* Actor: [`Actor.h`](../enunciado/src/Actor.h) - [`Actor.cpp`](../enunciado/src/Actor.cpp)
        
* Pelicula: [`Pelicula.h`](../enunciado/src/Pelicula.h) - [`Pelicula.cpp`](../enunciado/src/Pelicula.cpp)    

1. Implementar el método `filtrarActoresSecundarios` de la clase `Cinefilo`:

```c++

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
        Lista<Actor*>* filtrarActoresSecundarios(Lista<Actor*>* actores,
                                                 Lista<Pelicula*>* peliculasAnalizadas);
};

``` 


## Solución

1. Implementación del método `filtrarActoresSecundarios`:

* Cinefilo: [`Cinefilo.h`](../punto-01/src/Cinefilo.h) - [`Cinefilo.cpp`](../punto-01/src/Cinefilo.cpp)

* Pelicula: [`Pelicula.h`](../punto-01/src/Pelicula.h) - [`Pelicula.cpp`](../punto-01/src/Pelicula.cpp)
