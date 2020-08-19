#include<bits/stdc++.h>
using namespace std;

class Graph{
    int V;
    list<int>*l;
 public: 
     Graph(int v)
     {
         V=v;

          l = new list<int>[V]; 
     }

     void addEdge(int u,int v,bool directed=true)
    {
         l[u].push_back(v);

         if(directed==true)
         {
             l[v].push_back(u);
         }
    }

    void display()
    {
        for(int i=0;i<V;i++)
        {
            cout<<i<<"-> ";
               for(int nbd:l[i])
                {
                    cout<<nbd<<",";
                }
                cout<<"\n";
        }
    }

};


int main()
{  
   Graph g(4);

   g.addEdge(0,1);
   g.addEdge(1,2);
   g.addEdge(2,3);
   g.addEdge(0,2);       
  
     g.display();
     return 0;
}