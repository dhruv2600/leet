class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char>stk;
        int moves=0;
        for(auto c:s)
        {
            if(c=='(')
                stk.push(c);
            if(c==')')
            {
                if(stk.empty() || stk.top()==')')
                {
                    moves++;
                }
                else if(stk.top()=='(')
                    stk.pop();
            }
        }
        while(!stk.empty())
        {
            moves++;
            stk.pop();
        }
        return moves;
    }
};