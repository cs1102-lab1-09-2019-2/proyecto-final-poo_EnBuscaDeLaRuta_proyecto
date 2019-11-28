

#ifndef PROGRAMACION_ORIENTADA_A_OBJETOS_FUNCIONES_H
#define PROGRAMACION_ORIENTADA_A_OBJETOS_FUNCIONES_H

#include <queue>
#include "mapa.h"
#include "node.h"
using  namespace std;
deque <Entero> pathFind(const Entero & xStart, const Entero & yStart, const Entero & xFinish, const Entero & yFinish, Mapa map);
bool operator<(const node & a, const node & b);



#endif //PROGRAMACION_ORIENTADA_A_OBJETOS_FUNCIONES_H
