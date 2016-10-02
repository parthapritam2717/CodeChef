#include<stdio.h>
#include<vector>
using namespace std;

int main(){
	int n,k;
	scanf("%d %d",&n,&k);
	//vector<int> item;
	int count=0;
	for(int i=0;i<n;i++){
		int temp=0;
		scanf("%d",&temp);
		//item.push_back(temp);
		if(temp%k==0){
			count+=1;
		}

	}
	printf("%d",count);
	//cout<<count;

return 0;
}

