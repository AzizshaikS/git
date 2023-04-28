#include<iostream>
using namespace std;
int main()
{
	int n=0,a[10],c;
	char s[10];
	cout<<"enter a string"<<endl;
	cin>>s;
	for(int i=0;sh[i]!=NULL;i++)
	{
		a[i]=s[i];
		n++;
	}
	for(int i=0;i<n;i++)
	{
		s[n-i-1]=a[i];
	}
	cout<<s;
}
