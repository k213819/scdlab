#include<iostream>
using namespace std;
func(int x, int n, int t, int a ,int  t1 ){
 
	a=n-x;
	if(a==0)
	{
		cout<<t1;
		
	}
	else if (a<x)
	{t=t1+t1;;
	cout <<t;
	}	
	else if(a>x)
	{
		t=t+t1;
		a=a-x;
		func(x,n,t,a,t1);
	}
	}
int main(){

int n,x,t,t1;
	cin>>n;
	cin>>x;
	cin>>t1;
	int a;
	
	func(x,n,0,0,t1);

}
