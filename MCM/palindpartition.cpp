class Solution {
public:
    vector<vector<string>>res;

    bool isPalindrome(string& s, int l, int r) {
        while (l < r) {
            if (s[l++] != s[r--]) {
                return false;
            }
        }
        return true;
    }
    void part(string s,vector<string>&curr)
    {
        if(isPalindrome(s))
        {
            res.push_back(curr);
        }
        for(int i=0;i<s.length();i++)
        {
            string p1=s.substr(0,i);
            curr.push_back(p1,curr);
            part(p1,curr);
            curr.pop_back();
        }
    }
    vector<vector<string>> partition(string s) {
        part(s,{});
        return res;
    }
};