#include<bits/stdc++.h>
using namespace std;


class Graph{
  
    unordered_map<string,list<pair<string,int>>> l;

public:

   void addEdge(string u,string v,int wt,bool bidir=true)
   {
          l[u].push_back(make_pair(v,wt));

          if(bidir)
          {
              l[v].push_back(make_pair(u,wt));
          }
   }

   void display()
   {       cout<<"city  dest  cost\n";
       for(auto p:l)
        {
        
            for(auto s:p.second)
                cout << p.first << "->" << s.first << " " << s.second<<"\n";
        }
   }


};

int main()
{
   

    Graph g;

    g.addEdge("A","B",50);
    g.addEdge("C","D",60);
    g.addEdge("A","C",34);
    g.addEdge("B","C",45);
    g.addEdge("A","D",54,false);

    g.display();
    return 0;
}