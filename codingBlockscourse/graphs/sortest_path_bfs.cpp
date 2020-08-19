#include<bits/stdc++.h>
using namespace std;

template<typename T>
class Graph{
    map<T,list<T>>l; 
    public:
     
     void addEdge(T u,T v,bool bidr=true)
     {
           l[u].push_back(v);

           if(bidr)
           {
               l[v].push_back(u);
           }
     }


     void sortest_path_bfs(T src)
     {
         queue<T>q;
         map<T,int>dist;

         for(auto node:l)
         {
               dist[node.first]=INT_MAX;
         }

         q.push(src);
         dist[src]=0;

         while(!q.empty())
          {   
                T node=q.front();
                q.pop();
                for(T nodes:l[node])
                {
                    if(dist[nodes]==INT_MAX)
                      {
                          q.push(nodes);
                          dist[nodes]=dist[node]+1;
                      } 
                }
          }

          for(auto n:dist)
          {
            //  T node=n.first;
            //  int d=dist[node];

             cout<<n.first<<" "<<n.second<<"\n";   
          }
     }
};

int main()
{  
    Graph<int>g;

      g.addEdge(0,1);
      g.addEdge(1,2);
      g.addEdge(0,3);
      g.addEdge(2,3);
      g.addEdge(3,4);
      g.addEdge(4,5);

      g.sortest_path_bfs(0);
    return 0;
}