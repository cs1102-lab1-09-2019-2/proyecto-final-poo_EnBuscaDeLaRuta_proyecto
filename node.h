

#ifndef PROGRAMACION_ORIENTADA_A_OBJETOS_NODE_H
#define PROGRAMACION_ORIENTADA_A_OBJETOS_NODE_H

#include "implementacion.h"

class node
        {
                
        Entero xPos;
        Entero yPos;
        
        Entero level;
 
        Entero priority;  // smaller: higher priority

        public:
        node(Entero xp, Entero yp, Entero d, Entero p)
        {xPos=xp; yPos=yp; level=d; priority=p;}

        Entero getxPos() const {return xPos;}
        Entero getyPos() const {return yPos;}
        Entero getLevel() const {return level;}
        Entero getPriority() const {return priority;}

        void updatePriority(const Entero & xDest, const Entero & yDest)
        {
            priority=level+estimate(xDest, yDest)*10; //A*
        }

      
        void nextLevel(const Entero & i) // i: direction
        {
            level+=10;
        }

        
        const Entero & estimate(const Entero & xDest, const Entero & yDest) const
        {

            static Entero xd, yd, d;
            xd=xDest-xPos;
            yd=yDest-yPos;
            d=static_cast<Entero>(sqrt(xd*xd+yd*yd));
            return(d);
        }
        };


#endif //PROGRAMACION_ORIENTADA_A_OBJETOS_NODE_H
