#include<bits/stdc++.h>
using namespace std;
#define ll long long int


ll phi(ll n)
{
    int result = n;


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
 int a , b;
 cin >> a;
 cout <<phi(8)<<endl;

return 0;
}
