//j2infy -Random Thoughts
#include<bits/stdc++.h>
using namespace std;
string Convert(int n)
{
	stringstream ss;
	ss<<hex<<n;
	string s = ss.str();
	if(s=="20")
		return s ="-";
	return s;
}
int main(void)
{
	string str;
	string s="";
	cout<<"Enter the string to convert: ";
	getline(cin,str);
	for(int i=0;str[i]!='\0';i++)
	{
		s += Convert((int)str[i]);
	}
	cout<<"Here you go: "<<s;
}