#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int mat[201][201];
int dp[201][201];
int n,N;
int call(int i , int j){
   if((i>=1 && i<=2*n-1) && (j>=1 && j<=n)){
      if(dp[i][j]!=-1) return dp[i][j];
      if(mat[i][j]==0) return 0;
      int res=-100000000;
      res=max(res , call(i+1, j)+mat[i][j]);
      //res=max(res , call(i+1, j-1)+mat[i][j]);
      res=max(res , call(i+1, j+1)+mat[i][j]);
      return dp[i][j]=res;
   }
   else return 0;

}

int main(){
        int t ;

        scanf("%d",&t) ;

        for(int k=1 ; k<=t ; k++)
        {
            scanf("%lld",&N) ;

            n = (2*N) - 1 ;

            //a[n][N] ;

            memset(mat,0,sizeof(mat));

            for(int i = 1 ; i<=N ;i++)
            {
                for(int j = 1 ; j<=i ; j++)
                {
                    scanf("%lld",&mat[i][j] ) ;
                }
            }
            for(int i=N+1 ,c = 1 ; i<=n ; i++, c++)
            {
                for(int j = (1+c) ; j<=N ; j++)
                {
                    scanf("%lld",&mat[i][j]);
                }

            }

            memset(dp,-1,sizeof(dp)) ;
            //long long y = packman(1,1) ;
            //printf("Case %d: %d\n",k,y);
            cout << "Case " << k << ": "<<call(1,1) <<endl;
        }

        return 0;
    }
