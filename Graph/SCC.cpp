  #include <bits/stdc++.h> 
using namespace std;
using ll =long long;
#define all(v) v.begin(),v.end()
 #define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)


struct SCC {
int V;
vector<vector<int>> G;
vector<vector<int>> rG;
vector<int> vs;
vector<bool> used;
vector<int> cmp;

   
SCC(int n):V(n) {
   G=vector<vector<int>> (V,vector<int> (0));
   rG=vector<vector<int>> (V,vector<int> (0));
   vs=vector<int> (0);
   used=vector<bool> (V,false);
   cmp=vector<int> (V);
}

void add_edge(int from,int to) {
   G[from].push_back(to);
   rG[to].push_back(from);
}

void dfs(int v) {
   used[v]=true;
   for(int i=0;i<G[v].size();i++) {
      if(!used[G[v][i]]) dfs(G[v][i]);
   }
   vs.push_back(v);
}

void rdfs(int v,int k) {
   used[v]=true;
   cmp[v]=k;
   for(int i=0;i<rG[v].size();i++) {
      if(!used[rG[v][i]]) rdfs(rG[v][i],k);
   }
}

int scc() {
   used=vector<bool> (V,false);
   vs.clear();

for(int v=0;v<V;v++) {
   if(!used[v]) dfs(v);
}

used=vector<bool> (V,false);
int k=0;
for(int i=vs.size()-1;i>=0;i--) {
   if(!used[vs[i]]) rdfs(vs[i],k++);
}
return k;
}

};




  

