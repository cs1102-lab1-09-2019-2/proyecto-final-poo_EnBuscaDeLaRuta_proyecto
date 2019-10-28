#include "mapa.h"
#include "semaforo.h"
#include "implementacion.h"

Mapa::Mapa(): altura{ALTURA}, ancho{ANCHO} {
    plano = new Entero*[altura];
    for (size_t i = 0; i < altura; ++i)
        plano[i] = new Entero[ancho];
}

Mapa::~Mapa() {
    for (size_t i = 0; i < altura; ++i) {
        delete[] plano[i];
    }
    delete[] plano;
    plano = nullptr;
}

/*
void Mapa::ubicacionSemaforo(semaforo* pSemaforo) {
    semaforo** temp = new semaforo*[cantSemaforos + 1];
    for (size_t i  = 0; i < cantSemaforos; ++i){
        temp[i] = semaforojr[i];}
    temp[cantSemaforos] = pSemaforo;

    delete [] semaforojr;
    semaforojr = temp;
    cantSemaforos++;
}
*/
void Mapa::actualizarMapa() {
    for (size_t i = 0; i < altura; ++i) {
        for (size_t j = 0; j < ancho; ++j) {
            plano[i][j] = (0) + rand() % 2;

        }
    }
}
void Mapa::dibujarMapa(){
    cout << '\n';
    cout << setw(4) << ' ';
    for (size_t j = 0; j < ancho; ++j)
        cout << setw(4) << j;
    cout << '\n';
    for (size_t i = 0; i < altura ; ++i) {
        cout << setw(4) << i;
        for (size_t j = 0; j < ancho; ++j) {
            cout << setw(4) << plano[i][j];
        }
        cout << '\n';
    }
}

Entero Mapa::getAltura() {
    return altura;
}

Entero Mapa::getAncho(){
    return ancho;
}





