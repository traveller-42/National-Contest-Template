#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int gcd(int a, int b)
{
    if(b==0) return a;
    return gcd(b, a%b);
}

ll gcd(ll a , ll b){
    return __gcd(a,b);
 }

int main(){
 ll a , b;
 while(cin >> a >> b)
 cout << gcd(a,b)<<endl;

return 0;
}
