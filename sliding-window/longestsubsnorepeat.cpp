class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s=="")
            return 0;
        unordered_map<char, int>ht;
        deque<char> dq;
        vector<int>res;
        for(char c:s)
        {


          if(ht[c]==0)
          {
            ht[c]++;
            dq.push_back(c);
          }
          else if(ht[c]!=0)
          {
            res.push_back(dq.size());
            while( dq.front()!=c) //!dq.empty()  not needed
            {
              ht[dq.front()]--;
              dq.pop_front();
            }
            ht[dq.front()]--;
            dq.pop_front();
            dq.push_back(c);
            ht[c]++;
          }




        }

        res.push_back(dq.size());
        int maxx=0;
        for(auto num:res)
        {
            cout<<num;
            maxx=max(maxx,num);
        }
        return maxx;

    }
};
