#include<bits/stdc++.h>
using namespace std;

typedef si;

int calculate_Y(int x, vector<int> &poly)
{

    int y = 0;
    int temp = 1;

    
    for (auto coeff : poly)
    {   y = (y + (coeff * temp));
        temp = (temp * x);
    }
    return y;
}

void secret_sharing(int S, vector<pair<int, int>> &points,int N, int K)
{

    vector<int> poly(K);

    
    poly[0] = S;

    for (int j = 1; j < K; ++j)
    {
        int p = 0;
        while (p == 0)

            
            p = (rand() % 256);

        
        poly[j] = p;
    }

   
    for (int j = 1; j <= N; ++j)
    {
        int x = j;
        int y = calculate_Y(x, poly);
        points[j - 1] = {x, y};
    }
}

vector<pair<int, int>> fun(int s, int n, int k)
{
    vector<pair<int, int>> points(N);

    secret_sharing(s, points, n, k);

    // for (int i = 0; i < N; ++i)
    // {
    //     cout << points[i].first << " "
    //          << points[i].second << endl;
    // }

  return points;
}

int main()
{

  int m;
  cin>>m;
  while(m--)
  {
     vector<pair<int,vector<pair<int,int>>>>a;
     int v;
    for(int i=0;i<32;i++)
    {   cin>>v;
        a[i].first=v;
    } 

    int N=4;
    int k=2;   

    for(int i=0;i<32;i++)
    {
        a[i].second=fun(a[i].first,N,k);
    }
     
     for(int var=0;var<32;var++)
     {
         cout<<a[i].first<<"->";
          for(auto bar:a[i].second)
             {
                 cout<<bar.first<<" "<<bar.second<<", ";
             }
          cout<<"\n";   
     }
  }
}