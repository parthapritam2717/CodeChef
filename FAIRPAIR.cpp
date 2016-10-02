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
int tt;
int ifnot(int n){
    return (n!=tt);

}


int main(){
        int t;
        fastRead_int(t);
    fori(i,0,t){
            int n,m;
            vi list1;
           // vi list2;
            vi ans;
            vector<pair<int,int> > list2;

            fastRead_int(n);
            for(int j=0;j<n;++j){
                    int tt;
                    fastRead_int(tt);
                    list1.pb(tt);
            }
            for(int j=0;j<n;++j){
                    int tt;
                    fastRead_int(tt);
                    list2.pb(pair<int,int> (tt,j+1));
            }
            // now the processing part
            for(vi::reverse_iterator ii=list1.rbegin();ii!=list1.rend();++ii){
                //
                tt=*ii;
                cout<<"Not="<<tt<<endl;
                //now search if any element is present in vector which is not tt and assign the value to that element
                bool f=1;
                 for(vector<pair<int,int> >::reverse_iterator ij=list2.rbegin();ij!=list2.rend();++ij){

                    //

                    int item=ij->first;
                    // cout<<"item="<<item<<endl;
                    // cout<<(tt^item)<<endl;
                    if((tt^item)!=0){
                        ans.pb(ij->second);
                        cout<<ij->second<<" "<<ij->first<<endl;
                        //list2.erase(ij);
                        std::advance(ij, 1);
                        list2.erase( ij.base() );
                        f=0;
                        break;
                    }


                 }
                 if(f==1){
                    // then do the processing
                    vector<pair<int,int> >::iterator ij=list2.end();
                    --ij;

                    cout<<ij->first<<" "<<ij->second<<endl;
                    list2.pop_back();
                    ans.pb(ij->second);

                 }


            }


            nl();
    }
    return 0;

}



