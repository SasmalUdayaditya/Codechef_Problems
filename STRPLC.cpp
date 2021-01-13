//j2infy Random-Problem
//i/p: 1. a sentence 2. a string which is going to be replaced 3. string to be replaced with 
//o/p: New string with sequence number for the new word.
// exampl i/p: Hi I am Uday, Hi ,hello
// example op: hello I am Uday 85121215
#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
string Converter(string p)
{
	//map<string,string>umap{{"a","1"},{"b","2"},{"c","3"},{"d","4"},{"e","5"},{"f","6"},{"g","7"},{"h","8"},{"i","9"},{"j","10"},{"k","11"},{"l","12"},{"m","13"},{"n","14"},{"o","15"},{"p","16"},{"q","17"},{"r","18"},{"s","19"},{"t","20"},{"u","21"},{"v","22"},{"w","23"},{"x","24"},{"y","25"},{"z","26"}};
	std::string Snew="";
	int n = p.length();
	for(int i=0;i<n;i++)
	{
		int m = p[i];
		m = m-96;
		Snew+= std::to_string(m);
	}
	return Snew;
}
int main(void)
{
	IOS;
	string s,rep,repw;
	getline(cin,s);
	cin>>rep;
	cin>>repw;
	
	istringstream ss(s);
	string str;
	vector<string>vec;
	while(ss>>str)
	{
		vec.push_back(str);
	}
	int n = vec.size();
	for(int i = 0;i<n;i++)
	{
		if(vec[i] == rep)
		{
			vec[i] = repw;
			break;
		}
	}
	for(int i = 0;i<n;i++)
	{
		cout<<vec[i]<<" ";
	}
	cout<<Converter(repw);
	return 0;
}