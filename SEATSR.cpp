#include<stdlib.h>
#include<stdio.h>
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<limits>
#include<list>
#include<map>
#include<set>
#include<time.h>
#include<math.h>
#include<cstring>
#include<unordered_set>
#include<unordered_map>
#include<stack>
#include <iomanip>

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef vector<double> vd;
typedef vector<vd> vvd;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<double, double> pdd;
typedef vector<pii> vpi;
typedef vector<pll> vpl;
typedef vector<string> vs;
typedef unordered_map<int,int> umap;
typedef map<long long,long long> omap;
typedef multimap<long long,long long> mmap;

#define si(x) scanf("%d", &x)
#define sl(x) scanf("%lld", &x)
#define all(v) v.begin(),v.end()
#define Pi(x) printf("%d", x)
#define Pl(x) printf("%lld", x)
#define os() printf(" ")
#define nl() printf("\n");
#define F first
#define S second
#define MOD 1000000007
#define pb push_back
#define mp make_pair
#define PI 3.14159265
#define mem(x,i) memset(x,i,sizeof(x))
#define fori(i,s,n) for(int i=(s);i<(n);++i)
#define forl(i,s,n) for(ll i=(s);i<(n);++i)
#define forir(i,s,n) for(int i=(n)-1;i>=(s);--i)
#define forlr(i,s,n) for(ll i=(n)-1;i>=(s);--i)
#define INF 8944674407370955161LL
#define debug(i,st,arr) fori(i,0,st){cout<<arr[i]<<" ";}cout<<endl;
#define debugl(i,st,arr) forl(i,0,st){cout<<arr[i]<<" ";}cout<<endl;
#define forci(i,sw) for((i)=(sw).begin();(i)!=(sw).end();++(i))
#define forcr(i,sw) for((i)=(sw).rbegin();(i)!=(sw).rend();++(i))
inline void fastRead_int(int &x) {
    register int c = getchar_unlocked();
    x = 0;
    int neg = 0;

    for(; ((c<48 || c>57) && c != '-'); c = getchar_unlocked());

    if(c=='-') {
    	neg = 1;
    	c = getchar_unlocked();
    }

    for(; c>47 && c<58 ; c = getchar_unlocked()) {
    	x = (x<<1) + (x<<3) + c - 48;
    }

    if(neg)
    	x = -x;
}
string s1,s2;
int a,b,k;
int mini(int a,int b,int c){
    return min(min(a,b),c);
}

int cost(int m,int n){
    int dp[m+1][n+1];
    for(int i=0;i<=m;++i){
            for(int j=0;j<=n;++j){
                    if(i==0){
                        dp[i][j]=a*j;
                    }
                    else if(j==0){
                        dp[i][j]=a*i;
                    }
                    else if(s1[i-1]==s2[j-1]){
                        dp[i][j]=dp[i-1][j-1];
                    }
                    else{
                        int t1=dp[i][j-1];
                        int t2=dp[i-1][j];
                        int t3=dp[i-1][j-1];
                        int mi=mini(t1,t2,t3);
                        if(mi==t1){
                            dp[i][j]=a+t1;
                        }
                        else if(mi==t2){
                            dp[i][j]=a+t2;
                        }
                        else{
                            dp[i][j]=b+t3;
                        }

                    }
            }

    }
    /*for(int i=0;i<m+1;++i){
        for(int j=0;j<n+1;++j){
            cout<<dp[i][j]<<" ";
        }
        nl();

    }*/
    return dp[m][n];
}
int main(){
    int t;
    si(t);
    fori(i,0,t){
           cin>>s1>>s2;
           cin>>a>>b>>k;
           //cout<<a<<" "<<b<<" "<<k<<endl;
           int m=s1.length();
           int n=s2.length();
            int cc=cost(m,n);
           // cout<<"Cost="<<cc<<endl;
            if(cc<=k){
               cout<<cc<<endl;
            }
            else{
                cout<<-1<<endl;
            }
    }
    return 0;

}



