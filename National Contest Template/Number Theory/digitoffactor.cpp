#include<bits/stdc++.h>
using namespace std;

double logvalue[1000002];

void precal(){
 for(int i=1;i<=1000001;i++){
   logvalue[i]=logvalue[i-1]+log(i+0.0);
     }
}

int main(){
 precal();
 int tc;
 cin >> tc;
 for(int i=1;i<=tc;i++){
    int n,base;
    scanf("%d%d",&n,&base);
    double res=floor(logvalue[n]/log(base*1.0)+1);
    printf("Case %d: %.0f\n",i,res);
 }


}
