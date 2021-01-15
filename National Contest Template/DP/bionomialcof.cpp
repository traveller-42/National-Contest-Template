#include<bits/stdc++.h>
using namespace std;
int dp[22][22];
int ncr(int n , int r){
   int res;
   if(r==1){
      return n;
   }
   if(n==r){
      return 1;
   }
   if(n<r){
    return 0;
   }
   if(dp[n][r]!=-1)
    return dp[n][r];
   dp[n][r]=ncr(n-1 , r-1 ) + ncr(n-1 , r);
   return dp[n][r];
}

int main(){
  int n,r;
  memset(dp,-1,sizeof(dp));
  cin  >> n >> r;
  cout << ncr (n , r );
  return 0;
}
