#include<bits/stdc++.h>
using namespace std;
char so;
char in[102][102];
bool visited[102][102];
int di[]={0,0,1,-1};
int dj[]={1,-1,0,0};
int n=5,m=5;
void dfs(int a , int b){
  visited[a][b]=true;
  for(int i=0;i<4;i++){
    int sr=a+di[i];
    int sc=b+dj[i];
    if((sr>=1 && sr<=m) && (sc>=1 && sc<=n)  && visited[sr][sc]==false && in[sr][sc]!='X' && in[sr][sc]!='-' && in[sr][sc]!='|'){
        visited[sr][sc]=true;
        dfs(sr,sc);
    }

  }

}
int main(){

  int pi,pj;
  int ri,rc;
  //memset(visited,false,sizeof(visited));
  //memset(in,0,sizeof(in));

 for(int i=1;i<=n;i++){
    for(int j=1;j<=m;j++){
        cin >> in[i][j];
        if(in[i][j]=='P'){
            pi=i;
            pj=j;
        }
        if(in[i][j]=='G'){
            ri=i;
            rc=j;
        }

    }

 }
 dfs(pi,pj);
 if(visited[ri][rc]==true){
    cout << "Possible"<<endl;
 }
 else
    cout << "Impossible"<<endl;


 return 0;
}
