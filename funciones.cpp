

#include "funciones.h"
bool operator<(const node & a, const node & b)
{
    return a.getPriority() > b.getPriority();
}

deque <Entero> pathFind(const Entero & xStart, const Entero & yStart, const Entero & xFinish, const Entero & yFinish, Mapa map)
{

    static priority_queue<node> pq[2]; 
    static Entero pqi;
    static node* n0;
    static node* m0;
    static Entero i, j, x, y, xdx, ydy;
    pqi=0;


    for(y=0;y<10;y++)
    {
        for(x=0;x<10;x++)
        {
            closed_nodes_map[x][y]=0;
            open_nodes_map[x][y]=0;
        }
    }


    n0=new node(xStart, yStart, 0, 0);

    n0->updatePriority(xFinish, yFinish);

    pq[pqi].push(*n0);


    open_nodes_map[xStart][yStart]=n0->getPriority(); 

    // A estrella :
    while(!pq[pqi].empty())
    {
      
        n0=new node( pq[pqi].top().getxPos(), pq[pqi].top().getyPos(),
                     pq[pqi].top().getLevel(), pq[pqi].top().getPriority());
        x=n0->getxPos();
        y=n0->getyPos();

        pq[pqi].pop(); // Retira al mayor nodo de del array
        open_nodes_map[x][y]=0;
       
        closed_nodes_map[x][y]=1;
       
        if(x==xFinish && y==yFinish)
        {
            // Genera el camino dele final a inicial
            // siguiendo las direcciones de los nodos
            deque<Entero> path;
            while(!(x==xStart && y==yStart))
            {                Entero c;
                j=dir_map[x][y];
                c = (j + dir/2) % dir;
                path.push_front(c);
                x+=dx[j];
                y+=dy[j];
            }

            delete n0;

         
            while(!pq[pqi].empty()) pq[pqi].pop();
            return path;
        }

       
        for(i=0;i<dir;i++)
        {
            xdx=x+dx[i];
            ydy=y+dy[i];
            if(!(xdx<0 || xdx>n-1 || ydy<0 || ydy>m-1 || map.getplano()[xdx][ydy]==1
                 || closed_nodes_map[xdx][ydy]==1))
            {
          
                m0=new node( xdx, ydy, n0->getLevel(),
                             n0->getPriority());
                m0->nextLevel(i);
                m0->updatePriority(xFinish, yFinish);

   
                if(open_nodes_map[xdx][ydy]==0)
                {
                    open_nodes_map[xdx][ydy]=m0->getPriority();
                    pq[pqi].push(*m0);
                    
                    dir_map[xdx][ydy]=(i+dir/2)%dir;
                }
                else if(open_nodes_map[xdx][ydy]>m0->getPriority())
                {
                    
                    open_nodes_map[xdx][ydy]=m0->getPriority();
          
                    dir_map[xdx][ydy]=(i+dir/2)%dir;

                   
                    while(!(pq[pqi].top().getxPos()==xdx &&
                            pq[pqi].top().getyPos()==ydy))
                    {
                        pq[1-pqi].push(pq[pqi].top());
                        pq[pqi].pop();cout<<endl;
                    }
                    pq[pqi].pop(); 
                  
                    if(pq[pqi].size()>pq[1-pqi].size())
                        pqi=1-pqi;
                    while(!pq[pqi].empty())
                    {
                        pq[1-pqi].push(pq[pqi].top());
                        pq[pqi].pop();
                    }
                    pqi=1-pqi;

                    pq[pqi].push(*m0); // añade el mejor nodo para reemplazar

                }
                else delete m0;

            }

        }
        delete n0; 
    }

    return deque<Entero>();
}