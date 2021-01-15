#include<bits/stdc++.h>
using namespace std;
#define ll long long int

vector<int> prime;
char sieve[10000000];
void primeSieve ( int n ) {
    sieve[0] = sieve[1] = 1;

    prime.push_back(2);
    for ( int i = 4; i <= n; i += 2 ) sieve[i] = 1;

    int sqrtn = sqrt ( n );
    for ( int i = 3; i <= sqrtn; i += 2 ) {
        if ( sieve[i] == 0 ) {
            for ( int j = i * i; j <= n; j += 2 * i ) sieve[j] = 1;
        }
    }

    for ( int i = 3; i <= n; i += 2 ) if ( sieve[i] == 0 ) prime.push_back(i);
}



int main(){
  int n=1000000;
  primeSieve(n);
  int a;
  //while(cin >> a){
    //if(seive[a]==0)
        //cout << "Prime "<<endl;
    //else
        //cout <<"Not Prime"<<endl;

    //}
    for(int i=0;i<=100;i++){
    if(sieve[i]==0)
         cout <<i <<endl;
    }

 return 0;
}
