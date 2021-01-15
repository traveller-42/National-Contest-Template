#include<bits/stdc++.h>
using namespace std;
#define ll long long int

string dectobinary(ll n){
    string s="";
    while(n>0){
        int rem=n%2;
        s.push_back(rem+'0');
        n=n/2;

    }
 reverse(s.begin(),s.end());
 while(s.size()<32)
    s='0'+s;

 return s;

}
ll binarytodec(string s){
   //reverse(s.begin(),s.end());
   ll res=0;
   ll base=1;
   for(int i=s.size()-1;i>=0;i--){
    if(s[i]=='1')
    res+=base;
    base*=2;
   }

 return res ;
}


int main(){
  int n;
  cin >> n;
  string s=dectobinary(n);
  int k=binarytodec(s);
  cout << s <<endl;
  cout << k <<endl;


 return 0;
}

