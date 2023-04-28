#include<iostream>
using namespace std;
int main()
{
	char s;
	cout<<"enter ur letter"<<endl;
	cin>>s;
	if(s=='a'||s=='e'||s=='i'||s=='o'||s=='u'||s=='A'||s=='E'||s=='I'||s=='O'||s=='U')
	{
		cout<<"vowel"<<endl;
	}
	else if(!isalpha(s))
	{
		cout<<"not valid";
	}
	else
	{
		cout<<"consonent";
	}
}
