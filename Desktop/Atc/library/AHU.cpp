#include <bits/stdc++.h> 
using namespace std;
using ll =long long;
#define all(v) v.begin(),v.end()
 #define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)

struct AHU{
   map<vector<int>, int> I;
  vector< vector<int> > G;
vector<int> h;

  AHU(int n):G(n),h(n){}


  void add_edge(int u,int v){
    G[u].emplace_back(v);
    G[v].emplace_back(u);
  }

  int dfs(int v,int p){
    vector<int> hs;
    for(int u:G[v])
      if(u!=p) hs.emplace_back(dfs(u,v));
    sort(hs.begin(),hs.end());

    int sz=I.size();
    if(!I.count(hs)) I[hs]=sz;
h[v]=I[hs];

    return I[hs];
  }

  int build(int r=0){

    return dfs(r,-1);
  }
};
