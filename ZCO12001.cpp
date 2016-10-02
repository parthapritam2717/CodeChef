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

            int n;
            si(n);
            vi list1;
            fori(j,0,n){
                    int tem;
                    si(tem);
                    list1.pb(tem);
            }
            stack<int> ss;
            int depth=1;
            int depth_index=1;
            int max_symbol=-10;
            int temp=0;
            int position=1;
            int index=0;
            int flag=0;
            int posmax=0;
            vector<int>::iterator i;
            forci(i,list1){
                if(*i==1){
                    ss.push(*i);
                    if(ss.size()>depth){
                        depth=ss.size();
                        depth_index=index+1;
                    }

                    if(flag==0){
                        temp++;
                        flag=1;
                        position=index+1;
                    }
                    else{
                        temp++;
                    }
                }
                else if(*i==2){

                    ss.pop();
                    temp++;

                    if(ss.empty()){
                        flag=0;
                        if(temp>max_symbol){
                            max_symbol=temp;
                            temp=0;
                            posmax=position;
                        }

                        temp=0;
                    }
                }
                index++;
            }
            Pi(depth);
            os();
            Pi(depth_index);
            os();
            Pi(max_symbol);
            os();
            Pi(posmax);

    return 0;

}



