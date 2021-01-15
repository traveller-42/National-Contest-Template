#include<bits/stdc++.h>
using namespace std;
#define ll long long int

 ll gcd(ll a , ll b){
    return __gcd(a,b);
 }
 ll lcm(ll a , ll b){
   ll res;
   res=(a/gcd(a,b))*b;
   return res ;
 }

int main(){
 int a , b;
 while(cin >> a >> b)
 cout << lcm(a,b)<<endl;

return 0;
}

