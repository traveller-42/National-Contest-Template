#include<bits/stdc++.h>
using namespace std;
#define ll long long int
 vector<int>prime;
 int seive[1000002];

 void primeseive(int n){
  memset(seive,0,sizeof(seive));
  seive[0]=seive[1]=1;
  prime.push_back(2);
  for(int i=4;i<=n;i+=2){
      seive[i]=1;
       }
  int sqrtn=sqrt(n);
  for(int i=3;i<=sqrtn;i+=2){
      if(seive[i]==0){
          for(int j=i*i;j<=n;j+=2*i){
                seive[j]=1;
                 }
            }

       }
   for(int i=3;i<=n;i++){
      if(seive[i]==0)
         prime.push_back(i);

       }

  }

  int SOD( int n ) {
    int res = 1;
    int sqrtn = sqrt ( n );
    for ( int i = 0; i < prime.size() && prime[i] <= sqrtn; i++ ) {
        if ( n % prime[i] == 0 ) {
            int tempSum = 1; //Contains value of (p^0+p^1+...p^a)
            int p = 1;
            while ( n % prime[i] == 0 ) {
                n /= prime[i];
                p *= prime[i];
                tempSum += p;
            }
            sqrtn = sqrt ( n );
            res *= tempSum;
        }
    }
    if ( n != 1 ) {
        res *= ( n + 1 );
    }
    return res;
}



int main(){
 primeseive(1000000);
 int a , b;
 while(cin >> a){
   cout << SOD(a)-a<<endl;
 }

 return 0;
 }


