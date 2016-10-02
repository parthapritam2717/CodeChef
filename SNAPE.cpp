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

using namespace std;
#define f(i,n) for(int i=0;i<n;i++)
#define w(i,n) while(i<n)
#define for(i,list) for (vector<int>::iterator i=list.begin();i!=list.end();++i)

int main(){
	int t=0;
	scanf("%d",&t);
	f(i,t){
		vector<int> list1;
		int n=0;
		scanf("%d",&n);
		f(j,n){
			int temp=0;
			scanf("%d",&temp);
			/*#to get string input from console with newline separated
			String s;
			String temps;
			getline(cin,temps,'\n');*/
			list1.push_back(temp);
		}
		//data collection over now do the processsing part	
		
		//print output for codejam
		//cout<<"case #"<<i+1<<": "<<out<<"\n";	
		
	}


	return 0;
}
 




