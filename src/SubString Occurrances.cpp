//============================================================================
// Name        : SubString.cpp
// Author      : Kartiki Khare
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void substocc(string st,string sub)
{
	int cnt=0;
	for(int i=0;i<st.size();i++)
	{
		bool flag=true;
		for(int j=0;j<sub.size() && i+j<st.size();j++)
		{
			if(st[i+j]!=sub[j])
			{
				flag=false;
				break;
			}
		}
		if(flag)
		{
			cnt++;
			i+=sub.size()-1;
		}
	}
	cout<<"Count is:"<<cnt;
}

int main() {
	string st,sub;
	cout<<"Enter string: "<<endl;
	cin>>st;
	cout<<"Enter Sub String: "<<endl;
	cin>>sub;
	substocc(st,sub);
	return 0;
}
