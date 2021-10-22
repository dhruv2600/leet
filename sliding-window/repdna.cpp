class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {

        unordered_map<string,int>ht;
        vector<string>res;
        string temp="";
        if(s.length()<=10)
            return {};
        temp=s.substr(0,10);
        ht[temp]++;
        for(int i=10;i<s.length();i++)
        {
            temp=temp.substr(1);
            temp+=s[i];
            if(ht[temp])
            {
                res.push_back(temp);
                ht[temp]=-100000;
            }
            else
                ht[temp]++;
        }
        return res;
        
    }
};