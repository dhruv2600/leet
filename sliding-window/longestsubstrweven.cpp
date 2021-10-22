#include<iostream>
#include<unordered_map>
#include<vector>
#include<set>
#include<queue>


class solution{
public:

	int findlongest(string s)
	{
		

		unordered_map<char,int>ht;

		for(char c:s)
			ht[c]++;
		

		queue<char>q;

		while(start<end && end<s.length())
		{
			if(ht[s[start]]%2)
				inwindow=1;
			if(ht[s[end]]%2==0)
			{
				end++;
			}
		}

	}

}