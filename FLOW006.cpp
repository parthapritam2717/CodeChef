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
		int n=0;
		scanf("%d",&n);
		int count=0;
		//data collection over now do the processsing part	
		while(n>0){
			int temp=n%10;
			count+=temp;
			n=n/10;
		}
		cout<<count<<"\n";
	}


	return 0;
}
 




