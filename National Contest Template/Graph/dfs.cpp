#include<bits/stdc++.h>
using namespace std;


bool visited[100];
vector<int>graph[100];

void dfs(int source){
   visited[source]=true;
   for(int i=0;i<graph[source].size();i++){
       if(visited[graph[source][i]]==false){
        dfs(graph[source][i]);
       }
   }


}



int main(){
 int node , edge;
 cin >> node >> edge ;
 for(int i=1;i<=node;i++){
    graph[i].clear();
 }

 for(int i=1;i<=edge;i++){
    int x , y;
    cin >> x >> y;
    graph[x].push_back(y);
    graph[y].push_back(x);
 }
 dfs(1);
 for(int i=1;i<=node;i++){
    cout << i <<" " <<visited[i] <<endl;
 }




 return 0;
}
