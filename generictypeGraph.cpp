#include<bits/stdc++.h>
using namespace std;



template<typename T>
class Graph
{
    unordered_map<T,list<T>>adjList;

public:
  
   void addEdge(T u,int v,T bidir=true)
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
                    for(T val:node.second)
                    {
                        cout<<val<<",";
                    }
                    cout<<endl;
               }    
   }

   void bfs(T src)
   {
       queue<T>q;
        unordered_map<T,bool>visted;
        q.push(src);
        visited[src]=true;

        while(!q.empty())
        {
            T node=q.front();
            q.pop();

            cout<<node<<" ";

            for(T neighbor:adjList[node]){
                if(visited[neighbor]==false){
                    q.push(neighbhor);
                    visited[neighbor]=true;
                    }
            }
        }
   }

//    void dfs(T src)
//     {
          

//         unordered_map<T,bool>neighbor;
//         neighbor[src]=true;
//        for(auto neigbhor:adjList[src])
//             {
                   
//             }
    

//         cout<<src<<" ";

//    }

// int connectedComponents(){

//     unordered_map<T,bool>visited;

//     for(auto node:adjList)
//     {
//         for(auto)
//     }
// }
 
  void bfsTopologicalSort(){
      unordered_map<T,int>indegree;

  }

void journeyToMoonHelper(T node,)

  int journeyTOMoon(int n)
  {
      int total = n*(n-1)/2;


      unordered_map<T,bool>visited;

      for(auto node:adjList)
      {
          if(visited[node.first]==false){

          }
      }
  }


bool isCyclic(T src)
{
      
}


};

int main()
{
    Graph<T> g;

    // g.addEdge(1,2);
    // g.addEdge(3, 2);
    // g.addEdge(4, 2);

    // g.addEdge(1,4);
    // g.addEdge(3,4);
    // g.display();

    g.addEdge(1, 2);
    g.addEdge(1, 4);
    g.addEdge(3, 2);
    g.addEdge(3, 4);
    g.addEdge(4, 5);

    g.display();



    return 0;
}