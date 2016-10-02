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

vl fibo;
ll counti=0;

void counter(int total,int counterr,int index,int sum,int length){
    if(sum==total && counterr==0){
        counti++;
        return;
    }
    if(counterr==0 && sum!=total){
        return ;
    }
    while(counterr>0 && index<length-1){
            counter(total,counterr-1,index,sum+fibo[index],length);
            counter(total,counterr-1,index+1,sum+fibo[index+1],length);
             index+=2;

    }
}
void calc(int total,int cnt,int len){
    counter(total,cnt,0,0,len);
}
int main(){
    int t;
    si(t);
    // calculate fibonacci and store them in the fibo list
    fibo.pb(1);
    fibo.pb(2);
    int i=2;
    ll temp=3;
    while(temp<=1000000000){
            temp=(fibo[i-2]+fibo[i-1]);
            i++;
            fibo.pb(temp);
    }
    int len=fibo.size();
    for(vl::iterator it=fibo.begin();it!=fibo.end();++it){
        cout<<*it<<endl;
    }
    fori(i,0,t){
            int n,m;
            si(n);
            si(m);
            counti=0;
            // now process the input
            calc(n,m,len);
            cout<<counti%MOD<<endl;

    }
    return 0;

}
