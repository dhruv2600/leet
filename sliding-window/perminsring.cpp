class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char,int>ht;
        unordered_map<char,int>window;
        for(char c:s1)
            ht[c]++;

        int req=s1.length();
        
        for(int e=0;e<s1.length();e++)
        {
            window[s2[e]]++;
            
            if(window[s2[e]]<=ht[s2[e]])
                req--;
            if(e-s+1==w_s)
            {
                if(req==0)
                    return true;
            }
            else if(e-s+1>w_s)
            {
                if(window[s2[s]]>=1 && window[s2[s]]<=ht[s2[s]])
                    req++;
                window[s2[s]]--;
                s++;
                if(req==0)
                    return true;
            }
        }
        return false;
    }
};