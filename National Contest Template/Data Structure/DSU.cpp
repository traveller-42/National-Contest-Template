
#include <bits/stdc++.h>
using namespace std;


struct DISJOINT_SET_UNION {

        static const int MAXN = 1e5 + 5;

        int Parent[ MAXN ] , Tot[ MAXN ];

        inline void Makeset( int k ) {
                for( int i = 0; i <= k; i++ ) {
                        Parent[ i ] = i; Tot[ i ] = 0;
                }
        }
        inline int Find( int x ) {
                if( Parent[ x ] == x ) return x;
                return Parent[ x ] = Find( Parent[ x ] );
        }
        inline void Union( int x , int y ) {
                int u = Find( x ) , v = Find( y );
                if( u != v ) Parent[ u ] = v , Tot[ v ] += Tot[ u ];
        }
} DSU;

int main( int argc , char const *argv[] ) {

        DSU.Makeset( 50 );

        return 0;
}



