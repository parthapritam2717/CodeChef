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
int main(){
    long long int t;
    sl(t);
    forl(i,0,t){
            long long int  n;
            string country;
             sl(n);
            cin>>country;
            //cout<<n<<country<<endl;
            vl contestwon;
            vl bugfound;
            long long int contributor=0,host=0,win=0,bug=0;
            long long int total=0;
            forl(j,0,n){
                string temp;
                cin>>temp;
                 long long int tem;
                 //cout<<temp;
                if(temp=="TOP_CONTRIBUTOR"){
                    contributor+=300;
                }
                else if(temp=="CONTEST_HOSTED"){
                    host+=50;

                }
                else if (temp=="CONTEST_WON"){
                    cin>>tem;
                    long long  bonus=0;
                    if(tem<=20){
                        bonus=(20-tem);
                    }
                    win+=(300+bonus);
                    contestwon.pb(tem);
                }
                else if(temp=="BUG_FOUND"){
                    cin>>tem;
                    //cout<<tem;
                    bug+=tem;
                    bugfound.pb(tem);
                }
            }
		// data input over now the processing part
		total=contributor+bug+win+host;
        //cout<<win<<" "<<bug<<" "<<total<<endl;
        if(country=="INDIAN"){
            cout<<total/200;
            nl();
        }
        else if(country=="NON_INDIAN"){
            cout<<total/400;
            nl();
        }


    }
    return 0;

}


