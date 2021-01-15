#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll digitsumonetoN(ll n){
   if(n<=0)
    return 0;
    ll ans=0;
   while(n!=0){
      ans=ans+(45*(n/10));
      for(ll i=n/10*10+1;i<=n;i++)
        ans=ans+(i%10);

      n/=10;

         }

   return ans;
    }


int main(){
  int a,b;
  while(cin >> a >> b){
     if(a<0 && b<0)
        break;
        ll res=0;
        cout << digitsumonetoN(b)-digitsumonetoN(a-1) <<endl;
          }

return 0;
}
