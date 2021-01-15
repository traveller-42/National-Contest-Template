#include<bits/stdc++.h>
using namespace std;
 long long  bigmod ( long long a, int p, int m )
{
    if ( p == 0 ) return 1;

    if ( p % 2 )
    {
        return ( ( a % m ) * ( bigmod ( a, p - 1, m ) ) ) % m;
    }
    else
    {
        long long c = bigmod ( a, p / 2, m );
        return ( (c%m) * (c%m) ) % m;
    }
}


int main(){
 long long  a, b,m;
 cin >> a >> b >> m;
 long long d=bigmod(a,b,m);
 cout <<d <<endl;

return 0;
}
