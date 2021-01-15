#include <bits/stdc++.h>
using namespace std;
typedef long long int LL;

struct PRIMALITY_TEST_MILLER_RABIN {

        typedef long long LL;
        typedef unsigned long long uLL;

        inline LL MulMod( LL a , LL b , LL c ) {
                LL x = 0 , y = a%c;
                while( b > 0 ) {
                        if( b&1 ) x = ( x + y ) % c; y = ( y << 1 ) % c;
                        b = b >> 1;
                }
                return x;
        }
        inline LL Modulo( LL a , LL b , LL c ) {
                LL x = 1 , y = a % c;
                while( b > 0 ) {
                        if( b&1 ) x = MulMod( x , y , c ); y = MulMod( y , y , c );
                        b = b >> 1;
                }
                return x;
        }
        inline bool Miller( LL p , int iter ) {
                if(p < 2) return false; if(p == 2) return true; if(!(p&1)) return false;
                LL s = p - 1 , a , temp , mod;
                while( !( s&1 ) ) s = s >> 1;
                for( int i = 0; i < iter; i++ ) {
                        a = rand( ) % ( p - 1 ) + 1; temp = s;
                        mod = Modulo( a , temp , p );
                        while( temp != ( p - 1) && mod != 1 && mod != ( p - 1 ) ) {
                                mod = MulMod( mod , mod , p );
                                temp = temp << 1;
                        }
                        if( mod != ( p - 1 ) && !( temp&1 ) ) return false;
                }
                return true;
        }
        inline bool Isprime( LL n ) { return Miller( n , 5 ); }
} M;

int main( int argc , char const *argv[] ) {
        int t;
        scanf("%d",&t);
        while( t-- ) {
                LL n;
                scanf("%lld",&n);
                if( M.Isprime( n ) ) printf("YES\n");
                else printf("NO\n");
        }
        return 0;
}






