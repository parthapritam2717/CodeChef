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
       unsigned long long total=0,needed=0,minimun=0,n=0;
        unsigned long long int months=0;
        bool flag=0;

        unsigned long long int total_rate_valid=0,total_height_valid=0;
        unsigned long long  calc=0;
       // cin>>n>>needed>>minimun;
       scanf("%llu", &n); scanf("%llu", &needed); scanf("%llu", &minimun);
        vector<pair<unsigned long long,pair<unsigned long long,unsigned long long>>> container;
        for(unsigned long long i=0;i<n;++i){
             unsigned long long height,rate;
             scanf("%llu", &height);
             scanf("%llu", &rate);

             unsigned long long  r;
             unsigned long long  temp=minimun-height;
             if(temp<=0){
                total_height_valid+=height;
                total_rate_valid+=rate;
                calc+=height;
                if(calc>=needed){
                cout<<0;
                exit(0);
             }
             }
             else{
             r=ceil((long double)(temp)/(long double)(rate));
             //cout<<"r="<<r<<endl;

             pair<unsigned long long,unsigned long long> t(rate,r);
             pair<unsigned long long,  pair<unsigned long long,unsigned long long>> tt(height,t);
             container.pb(tt);
             }

        }


        sort(container.rbegin(),container.rend(),[](const std::pair<unsigned long long,pair<unsigned long long,unsigned long long>>  &left, const std::  pair<unsigned long long,  pair<unsigned long long,unsigned long long>> &right) {
        return left.second.second > right.second.second;});
        /*for(vector<pair<ll,pair<ll,ll>>>::iterator it=container.begin();it!=container.end();++it){
                    cout<<it->second.second;
                    nl();
                }*/
                unsigned long long prevmonth=0,nextmonth=0;

         for(   vector<pair<unsigned long long,pair<unsigned long long,unsigned long long>>>::iterator it=container.begin();it!=container.end();++it){

            //ll te=it->second.second*it->second.first;
            total_rate_valid+=it->second.first;
            total_height_valid+=it->first;
           // cout<< total_rate_valid<<" "<<total_height_valid;
            total=(total_height_valid)+(total_rate_valid*it->second.second);
           // cout<<"t="<<total<<endl;
            if(total>=needed){
                    if(it==container.begin()){
                        prevmonth=it->second.second;
                        cout<<it->second.second;
                        exit(0);
                       // break;
                    }
                    else{
                            nextmonth=it->second.second;
                            total_rate_valid-=it->second.first;
                            total_height_valid-=it->first;

                            // now we know that out output is between prevmonth and next month
                            for(unsigned long long m=nextmonth-1;m>prevmonth;--m){
                                     total=(total_height_valid)+(total_rate_valid*m);
                                     if(total<needed){
                                        cout<<m+1;
                                        flag=1;
                                         exit(0);
                                         //break;
                                     }
                            }
                           // cout<<"t="<<total<<endl;
                            if(flag==0){
                                cout<<it->second.second;
                                 exit(0);
                                 //break;
                            }
                            else if(flag==1){
                                 exit(0);
                                break;
                            }

                    }

            }
            else{
                prevmonth=it->second.second;

            }

         }
         // till now even the minimum required is not ful filled will have to continue further with full capacity till our total exceed ths required
         months=container.end()->second.second;
         cout<<"months="<<months<<endl;
         while(true){
                total=(total_height_valid)+(total_rate_valid*months);
                cout<<total;
                if(total>=needed){
                    // check for which month the value came valid
                    unsigned long long m=months;
                    while(true){
                        --m;
                          total=(total_height_valid)+(total_rate_valid*m);
                        if(total<needed){
                            cout<<m+1;
                            exit(0);
                        }
                    }
                }
                else{
                 months=pow(months,2);
                 cout<<"j="<<months;
                }
         }


        return 0;
    }

