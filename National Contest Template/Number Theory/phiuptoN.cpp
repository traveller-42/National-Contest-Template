#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll gcd(ll a , ll b){
    return __gcd(a,b);
 }
 ll phi(ll n)
{
    ll result = n; // Initialize result as n

    // Consider all prime factors of n and subtract their
    // multiples from result
    for (int p = 2; p * p <= n; ++p) {

        // Check if p is a prime factor.
        if (n % p == 0) {

            // If yes, then update n and result
            while (n % p == 0)
                n /= p;
            result -= result / p;
        }
    }

    // If n has a prime factor greater than sqrt(n)
    // (There can be at-most one such prime factor)
    if (n > 1)
        result -= result / n;
    return result;
}

int main(){
 ll a;
 while(cin >> a && a!=0){
   if(a==1){
    cout <<"0"<<endl;
    continue;
   }
   ll res=phi(a);
   cout << res <<endl;
 }

return 0;
}

