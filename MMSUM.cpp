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
inline void fastRead_int(ll &x) {
    register int c = getchar_unlocked();
    x = 0;
    ll neg = 0;

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
int main(){
    int t;
    si(t);
    fori(i,0,t){
            ll n;
            fastRead_int(n);
            vl list1;
            forl(j,0,n){
                ll tt;
                fastRead_int(tt);
                list1.pb(tt);
            }
            // first calculate the max subarray ending at location i
            ll ans=-INF;
            ll current=0;
            long long *E=new long long[n]();
            long long *S=new long long[n]();
            for(ll j=0;j<n;++j){
                current=max(current,list1[j]+current);
                E[j]=current;
                ans=max(ans,current);
            }
            for(int ii=0;ii<n;++ii){
                    cout<<E[ii]<<" ";

            }
            nl();
            current=0;
            for(ll j=n-1;j>=0;--j){
                    current=max(current,list1[j]+current);
                    S[j]=current;
                    ans=max(ans,current);
            }
            for(int ii=0;ii<n;++ii){
                    cout<<S[ii]<<" ";

            }
            nl();
            // now we just need to calculate the max of E[i-1]+ S[i+1] and ans
            for(int j=0;j<n-1;++j){
                if(j-1<1){
                    ans=max(S[j+1],ans);
                }
                else{
                        if(j+1==n+1){
                                ans=max(ans,E[j-1]);

                        }
                        else{
                            ans=max(ans,E[j-1]+S[j+1]);
                        }

                }
            }
            Pl(ans);nl();
    }
    return 0;

}



