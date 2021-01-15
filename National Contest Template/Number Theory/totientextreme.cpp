#include<bits/stdc++.h>
using namespace std;
#define ll long long int

 ll gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
ll phi(ll n)
{
    ll result = 1;
    for (int i = 2; i < n; i++)
        if (gcd(i, n) == 1)
            result++;
    return result;
}
ll totient(ll n)
   {
       if (n <= 1) return n == 1 ? 1 : 0;
       ll phi = n;
       if (n % 2 == 0) { phi /= 2;       n /= 2; while (n % 2 == 0) n /= 2; }
       if (n % 3 == 0) { phi -= phi / 3; n /= 3; while (n % 3 == 0) n /= 3; }
       for (int p = 5; p * p <= n; )
       {
           if (n % p == 0) { phi -= phi / p; n /= p; while (n % p == 0) n /= p; }
           p += 2;
           if (p * p > n) break;
           if (n % p == 0) { phi -= phi / p; n /= p; while (n % p == 0) n /= p; }
           p += 4;
       }
       if (n > 1) phi -= phi / n;
       return phi;
   }

int main(){
 int t;
 cin >> t;
 while(t--){
  int n;
  cin >> n;
  ll h=0;
  for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
      h+=(totient(i)*totient(j));
        }

     }
   cout << h <<endl;

  }

return 0;
}
