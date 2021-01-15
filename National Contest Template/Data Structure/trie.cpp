#include <bits/stdc++.h>
using namespace std;

struct Node {
        bool endMark;
        Node *Next[ 27 ]; /// for string
        Node( ) {
                endMark = false;
                memset( Next , NULL , sizeof( Next ) );
        }
} *root;

void Delete( Node* cur ) {
        for( int i = 1; i <= 26; i++ ) {
                if( cur -> Next[i] ) Delete( cur -> Next[i] );
        }
        delete( cur );
}
int GetID( char ch ) {
        return ( ch - 'a' + 1 );
}
void Insert( string s ) {
        Node *cur = root;
        for( int i = 0; i < s.size(); i++ ) {
                int id = GetID( s[i] );
                if( cur -> Next[id] == NULL ) cur -> Next[id] = new Node();
                cur = cur -> Next[id];
        }
        cur -> endMark = true;
}
bool Found( string s ) {
        Node *cur = root;
        for( int i = 0; i < s.size(); i++ ) {
                int id = GetID( s[i] );
                if( cur -> Next[id] == NULL ) return false;
                cur = cur -> Next[id];
        }
        return cur -> endMark;
}
int main( int argc , char const *argv[] ) {
        ios_base::sync_with_stdio( false ); cin.tie( NULL );
        root = new Node( );
        Insert( "trie" );
        if( Found( "trie" ) ) cout << "YES" << endl;
        else cout << "NO" << endl;
        return 0;
}
