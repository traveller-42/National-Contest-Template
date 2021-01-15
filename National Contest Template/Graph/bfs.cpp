#include<bits/stdc++.h>
using namespace std;

vector<int>graph[100];
bool visited[100];
int level[100];

void bfs(int source){
  queue<int>q;
  visited[source]=true;
  level[source]=0;
  q.push(source);
  while(!q.empty()){
    int child=q.front();
    q.pop();
    for(int i=0;i<graph[child].size();i++){
       if(visited[graph[child][i]]==false){
        visited[graph[child][i]]=true;
        level[graph[child][i]]=level[child]+1;
        q.push(graph[child][i]);
       }
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

 /*for(int i=1;i<=node;i++){
    cout << i<<" : " ;
    for(int j=0;j<graph[i].size();j++)
        cout << graph[i][j] <<" ";
    cout <<endl;
 }*/
 memset(visited,false,sizeof(visited));
 bfs(1);
 for(int i=1;i<=node;i++){
    cout << visited[i] <<endl;
 }
 cout << "Level Start "<<endl;
 cout << level[1]<<endl;
 cout << level[2]<<endl;
 cout << level[3]<<endl;
 cout << level[4]<<endl;
 cout << level[5]<<endl;
 cout << level[6]<<endl;


 return 0;
}
