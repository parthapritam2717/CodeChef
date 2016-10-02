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
int main(){
    int t;
    si(t);
    fori(i,0,t){
          int k;
          string s1;
          cin>>s1;
          si(k);
          int len=s1.length();
          map<char,int> data;
          char arry[130];
          for(int j=0;j<len;++j){
                map<char,int>::iterator it=data.find(s1[j]);
                if(it!=data.end()){
                    it->second+=1;
                }
                else{
                    data.insert(pair<char,int> (s1[j],1));
                }
                arry[s1[j]]+=1;
          }

          if(len==k){
                cout<<s1<<endl;
                //nl();
          }
          else{
            int del=len-k;
            //cout<<"del="<<del<<endl;
            map<char,int>::iterator it=data.begin();
            char fst=it->first;
            int index=0;
            for(int j=0;j<len;++j){
                // find the fast occurence of the first element in the string
                if(s1[j]==fst){
                    index=j;
                    break;
                }
            }
            if(index<=del && index!=0){
                int temp=index;
                  for(int j=0;j<index;++j){
                        s1[j]=0;--del;
                  }
                  // now will see if any delete option left
                  if(del>0){
                    // find the largest elemet that is still present in the array and delete

                     while(del>0){
                        map<char,int>::iterator ll=data.end();--ll;
                        char tem=ll->first;
                        for(int j=0;j<len;j++){
                            if(s1[j]==tem){
                                s1[j]=0;
                                --del;break;
                            }
                        }
                        if(ll->second>1){
                            ll->second-=1;
                        }
                        else{
                            data.erase(ll);
                        }
                     }
                  }
            }
            else{
                    // index> del so we will have to individually find the largest elements and remove them
                    while(del>0){
                        map<char,int>::iterator ll=data.end();--ll;
                        char tem=ll->first;
                        for(int j=0;j<len;j++){
                            if(s1[j]==tem){
                                s1[j]=0;
                                --del;break;
                            }
                        }
                        if(ll->second>1){
                            ll->second-=1;
                        }
                        else{
                            data.erase(ll);
                        }
                     }
            }
            for(int j=0;j<len;j++){
                if(s1[j]!=0){
                    putchar(s1[j]);
                }
            }
            nl();
          }
    }
    return 0;

}



