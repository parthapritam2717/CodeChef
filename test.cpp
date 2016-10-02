#include<stdlib.h>
#include<stdio.h>
#include<iostream>
#include<string>
#include<vector>

using namespace std;
#define f(i,n) for(int i=0;i<n;i++)
#define w(i,n) while(i<n)

int main(){
	int t=0;
	scanf("%d",&t);
	f(i,t){
		vector<int> list1;
		int temp=0;
		scanf("%d",&temp);
		/*#to get string input from console with newline separated
		String s;
		String temps;
		getline(cin,temps,'\n');*/
		list1.push_back(temp);
		//data collection over now do the processsing part		
		vector<int>::iterator it=list1.begin();
		for(it;it!=list1.end();++it){
			cout<<*it;
		}
	}


	return 0;
}
 




