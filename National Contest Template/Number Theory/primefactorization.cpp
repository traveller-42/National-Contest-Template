#include<bits/stdc++.h>
using namespace std;
#define ll long long int
 vector<int>prime;
 vector<int>factors;
 int seive[10000002];

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
   for(int i=3;i<=n;i+=2){
      if(seive[i]==0)
         prime.push_back(i);

       }

  }
  set<int>st;
  void factorization(int n){
   int sqrtn=sqrt(n);
   for(int i=0;i<prime.size()&& prime[i]<=sqrtn;i++){
       if(seive[n]==0)
        break;
       if(n%prime[i]==0){
            while(n%prime[i]==0){
               n=n/prime[i];
               factors.push_back(prime[i]);
                  }
               sqrtn=sqrt(n);
             }

         }
    if(n!=1)
        factors.push_back(n);

   }



int main(){
 primeseive(10000000);
 int a , b;
 while(cin >> a){
   factorization(a);
   for(int i=0;i<factors.size();i++){
     cout << factors[i]<<endl;
      }
    factors.clear();
 }

 return 0;
 }
