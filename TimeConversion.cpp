#include<bits/stdc++.h>

using namespace std;

string Conversion(string s)
{
    int len;
    len = s.length();

    if(s[len-2]=='A'|| s[len-2]=='a')
    {
        string hour = s.substr(0,2);
        int hr = stoi(hour);  //Converting string into integer
        if(hr == 12)
        {
            string h = "00";
            string newtime = h.append(s.substr(2,6));
            return newtime;
        }
        else
        {
            return s.substr(0,len-2);
        }
    }
    else
    {
        string hour = s.substr(0,2);
        int hr = stoi(hour);  //Converting string into integer
        if(hr == 12)
        {
            return s.substr(0,len-2);
        }
        else
        {
            int time = hr + 12;
            string newpm = to_string(time); // converting integer into string
            string finalpm =  newpm.append(s.substr(2,6));
            return finalpm;

        }
        
    }

}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    getline(cin,s);
    
    string result = Conversion(s);
    cout<<result<<"\n";
    return 0;
}