#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define sz 100005
#define ll long long int
#define inf 100000000005
vector<pair<int , int > >graph[sz];
ll d[sz];
int parent[sz];
int n  , m ;

struct Vertex{
 int node , dist ;
 Vertex(){};
 Vertex(int node , int dist ){
   this->node=node;
   this->dist=dist;
 }
 bool operator<(const Vertex &ano)const{
   return dist>ano.dist;
  }
};

void dijkstra(int source){
  priority_queue<Vertex>pq;
  for(int i=1;i<=n;i++){
    d[i]=inf;
    parent[i]=-1;
  }
  Vertex v(source,0);
  d[source]=0;
  pq.push(v);
  while(pq.empty()==false){
    Vertex cur=pq.top();
    pq.pop();
    int u=cur.node;
    int curr_dist=cur.dist;
    for(int i=0;i<graph[u].size();i++){
       int v = graph[u][i].first;
       int weight=graph[u][i].second;
       if(d[v] > d[u]+weight){
          d[v]=d[u]+weight ;
          parent[v]=u;
          pq.push(Vertex(v,d[v]));
       }
    }

  }

}
int main(){
  cin >> n >> m ;
  for(int i=0;i<m;i++){
    int x , y , w;
    cin >> x >> y >> w ;
    graph[x].pb(pair<int,int>(y,w));
    graph[y].pb(pair<int , int >(x,w));
  }
  dijkstra(1);
  if(d[n]==inf){
    cout << "-1" <<endl;
  }
  else{
    vector<int>path ;
    int curr=n;
    while(curr!=1){
      path.pb(curr);
      curr=parent[curr];
    }
   path.pb(1);
   for(int i=path.size()-1;i>=0;i--){
      if(i==0){
        cout << path[i] <<endl;
      }
      else{
       cout << path[i] << " " ;
      }
    }
  }
  return 0;
}
