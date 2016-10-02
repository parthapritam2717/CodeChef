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
bool isprime(int n){
   /** if(n==3){
        return true;
    }
    else if(n==1){
        return false;
    }
    else{
            int t1=(n+1)%6;
            int t2=(n-1)%6;
            if(t1==0 || t2==0){
                return true;
            }
            else{
                return false;
            }*/

    int sq=(int)sqrt(n);
    //cout<<sq;
    int flag=0;
    fori(i,2,sq+1){
    if(n%i==0){
        return false;

    }
    else{
        flag=1;
        continue;
    }
    if(flag==1){
        return true;
    }

}
    }

int main(){
    int t;
    si(t);
    fori(i,0,t){
            int n;
            si(n);
            if(n==2){
                cout<<"yes"<<"\n";
            }
            else if(n%2!=0){
                if(isprime(n)){
                    cout<<"yes"<<"\n";
                }
                else{
                    cout<<"no"<<"\n";
                }
            }
            else{
                cout<<"no"<<"\n";
            }
    }
    return 0;
}


