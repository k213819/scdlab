#include<iostream>
using namespace std;
int main()
{
	int N,D;
	cin>>N;
	cin>>D;
	int *T=new int[N];
	for(int i=0;i<N;i++)
	{
		cin>>T[i];
	}
	int flag=0;
	for(int i=0;i<N;i++)
	{
		if(T[i+1]-T[i]<=D){
			flag=1;
			//break;
		}
		if(flag==1){
			cout << T[i+1];
			break;
		}
		else if(flag==0){
			cout << "-1";
			break;
		}
	
		 

	}
	
}
