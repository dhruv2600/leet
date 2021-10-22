#include<iostream>
#include<stack>
using namespace std;

class Solution {
public:
    string reverseWords(string s){
        
        
        string temp="";
        stack<string>stk;
        for(char c:s)
        {
            if(c!=' ')
            {
                temp+=c;
            }
            else
            {
                if(temp !="")
                {
                    temp+=c;
                    stk.push(temp);
                    temp="";
                }
            }
        }
        string res="";
        while(!stk.empty())
        {
            res+=stk.top();
            stk.pop();
        }
        return res;        
    }
};