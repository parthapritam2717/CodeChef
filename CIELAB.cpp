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
	int a,b=0;
	scanf("%d %d",&a,&b);
	int temp=a-b;
	string s="";
	//cout<<temp<<"\n";
	while(temp>0){
		int c=temp%10;
		c+=48;
		//cout<<char(c)<<" ";
		temp/=10;
		s=s+char(c);
	}
	//cout<<s;
	//cout<<"s"<<s.size();
		int flag=0;
    while(true){
    srand(time(NULL));
	int x=rand()%s.length();
	int y=rand()%10;
	//cout<<x<<"n"<<y;
	//cout<<char(48+y);
        if(s[x]!=char(48+y)){
            s[x]=char(48+y);
            break;
        }
        else{
            continue;
        }
    }
    reverse(s.begin(),s.end());
	cout<<s;
	return 0;
}





