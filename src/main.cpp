
#include "Pelicula.h"

int main() {

    Pelicula starWars("Star Wars");

    Pelicula matrix("The Matrix");

    Actor neo("Keanu Reeves");
    matrix.obtenerProtagonistas()->agregar(&neo);
    matrix.obtenerReparto()->agregar(&neo);

    Actor oracle("Gloria Foster");
    matrix.obtenerReparto()->agregar(&oracle);
}
