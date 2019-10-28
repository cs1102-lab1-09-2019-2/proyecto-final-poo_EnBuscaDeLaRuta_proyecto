#include "semaforo.h"
semaforo::semaforo(Entero posicion_final_x, Entero posicion_final_y, Entero posicion_inicial_x,
                   Entero posicion_inicial_y)
                   :posicion_final_y{posicion_final_y},
                   posicion_final_x{posicion_final_x},
                   posicion_inicial_x{posicion_inicial_x},
                   posicion_inicial_y{posicion_inicial_y}{}

semaforo::semaforo() {}
semaforo::~semaforo() {}

Entero semaforo::getposicion_final_x() {
    return posicion_final_x;
}

Entero semaforo::getposicion_final_y() {
    return posicion_final_y;
}

Entero semaforo::getposicion_inicial_y() {
    return posicion_inicial_y;
}

Entero semaforo::getposicion_inicial_x() {
    return posicion_inicial_x;
}
