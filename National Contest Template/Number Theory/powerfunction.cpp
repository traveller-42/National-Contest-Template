#include<bits/stdc++.h>
using namespace std;

int powerfunction(int x ,int n){
  if(n==0)
    return 1;
  else if(n%2==0){
    powerfunction(x*x,n/2);
      }
  else{
   return x*powerfunction(x*x,(n-1)/2);
  }

}


int main(){
 long long  a, b,m;
 cin >> a >> b ;
 long long d=powerfunction(a,b);
 cout <<d <<endl;

return 0;
}

