#include<bits/stdc++.h>
using namespace std;

  int numberDigit ( int n ) {
    int wrongAnswer = log10(n) + 1;
    int rightAnswer = ( (int) log10(n) ) + 1;
    return rightAnswer;
}
  int factorialDigit ( int n ) {
    double x = 0;
    for ( int i = 1; i <= n; i++ ) {
        x += log10 ( i );
    }
    int res = ( (int) x ) + 1;
    return res;
}
 int factorialDigitExtended ( int n, int base ) {
    double x = 0;
    for ( int i = 1; i <= n; i++ ) {
        x += log10 ( i ) / log10(base); ///Base Conversion
    }
    int res = ( (int) x ) + 1;
    return res;
}


int main(){
  int n;
  while(cin >> n){
      int res=factorialDigit(n);
      cout << res <<endl;

    }

return 0;
}
