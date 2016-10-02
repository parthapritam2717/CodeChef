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

using namespace std;
#define fn(i,n) for(int i=0;i<n;i++)
#define w(i,n) while(i<n)
#define f(i,list) for (vector<int>::iterator i=list.begin();i!=list.end();++i)

int main(){
	int t=0;
	scanf("%d",&t);
	fn(i,t){
		set<int> list1;
		int n=0,m=0;
		scanf("%d %d",&n,&m);
		fn(j,m){
			int temp=0;
			scanf("%d",&temp);
			/*#to get string input from console with newline separated
			String s;
			String temps;
			getline(cin,temps,'\n');*/
			list1.insert(temp);
		}

		//data collection over now do the processsing part
		//print output for codejam
		//cout<<"case #"<<i+1<<": "<<out<<"\n";
        set<int> s;
        fn(j,n){
            s.insert(j+1);
        }
        vector<int>data;
        set_difference(s.begin(),s.end(),list1.begin(),list1.end(),inserter(data,data.begin()));
        //cout<<data.size();
        sort(data.begin(),data.end());
        int k=1;
        vector<int>chef,ast;
        fn(i,data.size()){
                if(i%2==0){
                    chef.push_back(data[i]);
                }
                else{
                    ast.push_back(data[i]);
                }

        }
        f(i,chef){
            cout<<*i<<" ";
        }
        cout<<"\n";
        f(i,ast){
        cout<<*i<<" ";
        }
        cout<<"\n";
	}


	return 0;
}





