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
    #include<cmath>

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
    #define pi(x) printf("%d", x)
    #define pl(x) printf("%lld", x)
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
        long long total=0,needed=0,minimun=0,n=0;
        long long int months=0;
        bool flag=0;

        long long int total_rate_valid=0,total_height_valid=0;
        ll calc=0;
       // cin>>n>>needed>>minimun;
       sl(n);sl(needed);sl(minimun);
        vector<pair<ll,pair<ll,ll>>> container;
        forl(i,0,n){
             long long height,rate;
             sl(height);
             sl(rate);
             ll temp=minimun-height;
             ll r=ceil((double(temp)/double(rate))) ;
             //cout<<r<<endl;
             if(height>=minimun){
                calc+=height;
             }
             pll t(rate,r);
             pair<ll,pll> tt(height,t);
             container.pb(tt);
        }
        if(calc>=needed){
            pl(0);
            exit(0);
        }

        sort(container.rbegin(),container.rend(),[](const std::pair<ll,pll> &left, const std::pair<ll,pll> &right) {
        return left.second.second > right.second.second;});
        /*for(vector<pair<ll,pair<ll,ll>>>::iterator it=container.begin();it!=container.end();++it){
                    cout<<it->second.second;
                    nl();
                }*/

         for( vector<pair<ll,pair<ll,ll>>>::iterator it=container.begin();it!=container.end();++it){
            //ll te=it->second.second*it->second.first;
            total_rate_valid+=it->second.first;
            total_height_valid+=it->first;
            total=total_height_valid+total_rate_valid*it->second.second;
            if(total>=needed && it==container.begin()){
                pl(it->second.second);
                break;
            }
            else if(total>=needed && it!=container.begin()){
                  months=it->second.second;
                  //our data is ranging between the previous month value and present month value
                  vector<pair<ll,pair<ll,ll>>>::iterator temp=it-1;
                  ll temp_rate=total_rate_valid-it->second.first;
                  ll temp_height=total_height_valid-it->first;
                  months=temp->second.second;
                  forl(i,months,it->second.second){
                       total=temp_height+temp_rate*i;
                       if(total>=needed){
                        pl(i);
                        flag=1;
                        break;
                       }

                  }
                  if(flag==0){
                    pl(it->second.second);
                    break;
                  }


            }

         }
        return 0;
    }

