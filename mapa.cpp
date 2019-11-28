#include "mapa.h"

Mapa::Mapa(): altura{ALTURA}, ancho{ANCHO} {
    plano = new Entero*[altura];
    for (size_t i = 0; i < altura; i++)
        plano[i] = new Entero[ancho];
}



void Mapa:: llenar ()
{   int opc=0;

    int auxxx=0;
    fstream fi;
    string auxinp="";
    string cadena="";
    string q ="";
    string asdf = "C:\\Users\\Arian Tamayo\\Desktop\\Programacion Orientada a Objetos FINAL - copia\\mapas.txt";

    do{
    cout<<"Ingrese un numero del 1 al 5: "<<endl<<"al numero elegido se le imprimira un mapa establecido con su ruta optima"<<endl;
    cin>>opc;
    }while  (opc<1  || 5<opc);
    fi.open(asdf);
    opc=opc*10;
    cadena= to_string(opc);

    if(fi.is_open()){
        while(true){
            fi>>auxinp;
            if(auxinp==cadena){
                break;}
        }

        for (int i=0;i<altura;i++){
            for(int j=0;j<ancho;j++){
                fi>>q;
                istringstream iss(q);
                iss >>auxxx;
                plano[i][j]=auxxx;
                if(q=="F"){
                     a=i;
                     b=j;
                    plano[i][j]=4;
                }
                if (q=="X"){
                    c=i;
                    d=j;
                    plano[i][j]=2;
                }
            }
        }
        fi.close();
    }




}


void Mapa::dibujarMapa(){
    cout << '\n';
    for (int i = 0; i <altura ; ++i) {
        for (int j = 0; j <ancho; ++j) {
            cout << setw(4) << plano[i][j];
        }
        cout << '\n';
    }
}

void Mapa::liberar(){

    for (int i = 0;  i<10;i++ )
    {
        delete [] plano[i];

    }
    plano = nullptr;
}


Entero Mapa::getAltura() {
    return altura;
}

Entero Mapa::getAncho(){
    return ancho;
}





