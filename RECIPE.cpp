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

int gcd(int a,int b){
	while(b>0){
		int t=b;
		b=a%b;
		a=t;
	}
	return a;
}	



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
			//cout<<temp<<"";
			/*#to get string input from console with newline separated
			String s;
			String temps;
			getline(cin,temps,'\n');*/
			list1.push_back(temp);
		}
		//data collection over now do the processsing part
		//we need to find the gcd of the given numbers
		
		vector<int>::iterator min=min_element(list1.begin(),list1.end());
		//cout<<*min;
		vector<int> output;		
		int count=0;
		f(k,n){
			if(list1.at(k)%*min==0){
				output.push_back(list1.at(k)/(*min));
				count+=1;
			}
			else{
				break;
			}
		}
		//cout<<count<<n;
		if(count==n){
			for(vector<int>::iterator it=output.begin();it!=output.end();++it){
				cout<<*it<<" ";
				//cout<<"h";
			}
			cout<<"\n";
		}
		else{	
			int g=list1.at(0);
			//cout<<g<<"";
			for(vector<int>::iterator it=list1.begin();it!=list1.end();++it){
				//find individual gcd and print 
				g=gcd(g,*it);
				
			}
			//cout<<"out"<<g<<"h";
			for(vector<int>::iterator it=list1.begin();it!=list1.end();++it){
				//find individual gcd and print 
				//cout<<*it<<"" ;
				cout<<int(*(it)/g)<<" ";
				
			}
			
			cout<<"\n";
			
		}
			
				
		//print output for codejam
		//cout<<"case #"<<i+1<<": "<<out<<"\n";	
		
	}


	return 0;
}
 




