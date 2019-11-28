
#include <queue>
#include "implementacion.h"
#include "mapa.h"
#include "node.h"
#include <iomanip>
#include "semaforo.h"
#include "funciones.h"
#include "Menu.h"


int main()
{

    Menu *pMenu;

    pMenu->Imprimir_Menu(cout);
    Mapa map;
    map.llenar();
    map.dibujarMapa();

    semaforo semaf(map.geta(),map.getb(),map.getc(),map.getd());

    cout <<"Llenando mapa: "<<endl;
    // randomly select start and finish locations
    int xA=semaf.getposicion_inicial_x(),
    yA=semaf.getposicion_inicial_y(),
    xB=semaf.getposicion_final_x(),
    yB=semaf.getposicion_final_y();

    cout<<"Tamanho del mapa (X,Y): "<<"10"<<","<<"10"<<endl;
    cout<<"Posicion inicial(representado por el numero 2): "<<xA<<","<<yA<<endl;
    cout<<"Posicion final(representado por el numero 4): "<<xB<<","<<yB<<endl;
    // get the route


    deque<Entero>  route=pathFind(xA, yA, xB, yB, map);


    if(route.empty()) cout<<"La ruta esta cerrada"<<endl;


    cout << endl;

    // follow the route on the map and display it
    if(!route.empty())
    {
       char c;
        int x=xA;
        int y=yA;
        map.getplano()[x][y]=2;
        for(int i=0;i<route.size();i++)
        {
            c =route.at(i);
            x=x+dx[c];
            y=y+dy[c];
            map.getplano()[x][y]=3;
        }
        map.getplano()[x][y]=4;


       map.dibujarMapa();

    }
    cout<<endl<<"Los numeros 3 conforman la ruta ideal y optima para llegar del punto inicial al final"<<endl;
    cout<<"Muchas gracias por su tiempo!!"<<endl;

    map.liberar();
    delete pMenu;
    cout<<endl;
    getchar(); // wait for a (Enter) keypress*/
    return(0);
}