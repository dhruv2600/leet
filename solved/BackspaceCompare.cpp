class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char>s1;
        stack<char>t1;
        int size1=s.size();
        int size2=t.size();
        for(int i=0;i<size1;i++)
        {
            if(s[i]=='#')
            {
                if(!s1.empty())
                    s1.pop();
            }
            else
                s1.push(s[i]);

        }
        for(int i=0;i<size2;i++)
        {
            if(t[i]=='#')
            {
                if(!t1.empty())
                    t1.pop();

            }
            else
                t1.push(t[i]);

        }
        while(!s1.empty() && !t1.empty())
        {
            if(s1.top()==t1.top())
            {
                s1.pop();
                t1.pop();
            }
            else if(s1.top() !=t1.top())
                return false;
        }
        if(s1.empty() && t1.empty())
            return true;
        return false;
    }
};
