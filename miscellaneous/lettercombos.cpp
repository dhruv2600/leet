class Solution {
public:
    vector<string> pad={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    vector<string> res;
    void helper(int s,int e,string curr,string d)
    {
        if(s==e)
        {
          res.push_back(curr);
          return;
        }
        for(char c:pad[d[s]-'0'])
        {
          curr.push_back(c);
          helper(s+1,e,curr,d);
          curr.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
      if(digits=="")
          return res;
      helper(0,digits.length(),"",digits);
      return res;
    }
};
