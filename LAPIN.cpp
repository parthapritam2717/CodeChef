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
    int t;
    si(t);
    fori(i,0,t){
            string s;
            cin>>s;
            int len=s.length();
            int end1=0,start=0;
            if(len%2==1){
                end1=len/2-1;
                start=len/2+1;
            }
            else{
                end1=len/2-1;
                start=len/2;
            }
            map<char,int> dat1,dat2;
            for(int i=0;i<=end1;++i){
                char tt=s[i];
                map<char,int>::iterator it=dat1.find(tt);
                if(it!=dat1.end()){
                    it->second=it->second+1;
                }
                else{
                    pair<char,int> t(tt,1);
                    dat1.insert(t);
                }
            }
             for(int i=start;i<=len-1;++i){
                 char tt=s[i];
                map<char,int>::iterator it=dat2.find(tt);
                if(it!=dat2.end()){
                    it->second=it->second+1;
                }
                else{
                    pair<char,int> t(tt,1);
                    dat2.insert(t);
                }
             }
             bool flag=1;
             map<char,int>::iterator j=dat2.begin();
            // cout<<dat1.size()<<" "<<dat2.size()<<endl;
                 for(map<char,int>::iterator i=dat1.begin();i!=dat1.end() || j!=dat2.end();++i){

                    if(i->first==j->first){
                        if(i->second==j->second){
                                 ++j;
                                continue;

                        }
                        else{
                            flag=0;
                            cout<<"NO"<<endl;
                            break;
                        }

                    }
                    else{
                        flag=0;cout<<"NO"<<endl;
                        break;
                    }



                 }
                 if(flag==1){
                    cout<<"YES"<<endl;
                 }










		//cout<<"case #"<<i+1<<": "<<out<<"\n";
    }
    return 0;

}


