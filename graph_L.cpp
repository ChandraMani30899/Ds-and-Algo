#include<bits/stdc++.h>
using namespace std;

class Graph
{
    unordered_map<int,list<int>>adjList;


    public:
    void addEdge(int u,int v,bool bidir=true)
           {
               adjList[u].push_back(v);

               if(bidir)
               {
                   adjList[v].push_back(u);
               }
           }

   void display()
   {
       for(auto node:adjList)
       {
           cout<<node.first<<"->";

           for(auto val:node.second)
           {
               cout<<val<<",";
           }

            cout<<endl;

       }
   }

   void bfs()
   {
       queue<int>q;

       unordered_map<int,bool>visted;
       q.push(src);
       visited[src]=true;

       while(!q.empty())
          {
              int node = q.front();
              q.pop();

              cout<<node<<" ";

              for(int neighbhor:adjList[node])
              {
                  if(visited[neigbhor]==false)
                   {
                       q.push(neighbhor);
                       visited[neighbhor]=true;
                   }
              }
          }
   }        
};

int main()
{

    Graph g;

    g.addEdge(1, 2);
    g.addEdge(1, 4);
    g.addEdge(3, 2);
    g.addEdge(3, 4);
    g.addEdge(4, 5);

    g.display();

    return 0;
}