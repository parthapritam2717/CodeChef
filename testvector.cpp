#include<stdio.h>
#include<vector>
#include<iostream>
using namespace std;

int main(){
	int n,k;
	scanf("%d %d",&n,&k);
	vector<int> item(4,0);
	cout<<item.front()<<" ";	
	for(int i=0;i<n;i++){
		int temp=0;
		scanf("%d",&temp);
		item.push_back(temp);
		vector<int>::iterator it;
		for(it=item.begin();it!=item.end();++it){
			printf("%d\n",*it);
		}
	}
	return 0;
}
