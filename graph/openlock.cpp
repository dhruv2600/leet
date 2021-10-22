class Solution {
public:
    unordered_map<string,int>ht;
    vector<string> getdir(string curr)
    {
        vector<string>res;
        for(int i=0;i<4;i++)
        {
            if(curr[i]=='0')
            {
                curr[i]='9';
                res.push_back(curr);
                curr[i]='1';
                res.push_back(curr);
                curr[i]='0';
            }
            else if(curr[i]=='9')
            {
                curr[i]='0';
                res.push_back(curr);
                curr[i]='8';
                res.push_back(curr);
                curr[i]='9';

            }
            else
            {
                char temp=curr[i];
                curr[i]++;
                res.push_back(curr);
                curr[i]-=2;
                res.push_back(curr);
                curr[i]=temp;
            }
        }
        return res;
    }
    int openLock(vector<string>& deadends, string target) {
        for(string s:deadends)
            ht[s]=-1;
        if(ht["0000"]==-1)
            return -1;
        ht[target]=2;
        if(ht["0000"]==2)
            return 0;
        queue<string>bfs;
        ht["0000"]=1;
        int level=0;
        bfs.push("0000");
        
        while(!bfs.empty())
        {
            int sz=bfs.size();
            for(int i=0;i<sz;i++)
            {
                string s=bfs.front();
                bfs.pop();
                vector<string>moving=getdir(s);
                for(auto str:moving)
                {
                    if(ht[str]==2)
                        return ++level;
                    else if(ht[str]!=-1 && ht[str] !=1)
                    {
                        bfs.push(str);
                        ht[str]=1;
                    }
                }
            }
            ++level;
        }
        return -1;

    }
};