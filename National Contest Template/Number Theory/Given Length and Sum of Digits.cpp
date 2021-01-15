#include<bits/stdc++.h>
using namespace std;

int main(){
 //vector<int>store;
 int numberofdigits ,sum;
 cin >> numberofdigits >> sum;
 if(numberofdigits==1 && sum==0){
     cout << "0 " <<"0"<<endl;
     return 0;
 }
 if(numberofdigits>1 && sum==0){
   cout << "-1 " <<"-1"<<endl;
   return 0;
 }
 if(numberofdigits==1 && sum >9){
    cout << "-1 "<<"-1"<<endl;
    return 0;
 }
 if(numberofdigits*9<sum){
    cout << "-1 "<<"-1"<<endl;
    return 0;
 }
 string store;
 store.push_back('1');
 //cout << store <<endl;
 for(int i=1;i<numberofdigits;i++){
    store.push_back('0');
 }
 //cout << store <<endl;
 string s1="",s2="";
 s1=store;
 int pos=store.size()-1,i=0;
 while(i<sum-1){
   //if(i==sum)
    //break;
   if(s1[pos]=='9'){
       pos--;
         }
       s1[pos]++;
       i++;

 }
 s2=store;
 pos=0,i=0;
 while(i<sum-1){
     if(s2[pos]=='9'){
       pos++;
          }
     s2[pos]++;
     i++;
 }

  cout << s1 << " " <<s2 <<endl;



 return 0;
}
