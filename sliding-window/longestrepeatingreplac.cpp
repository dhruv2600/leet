class Solution {
public:
    int characterReplacement(string s, int k) {

        unordered_map<char,int>ht;

        int start=0;
        int end=0;
        int maxlen=INT_MIN;
        int maxfreq=INT_MIN;

        for(int i=0;i<s.length();i++)
        {
          ht[i]++;
          maxfreq=max(maxfreq,ht[i]);
          if(i-start+1>k+maxfreq)
          {
            maxlen=max(maxlen,i-start);
            while(i-start+1>k+maxfreq)
            {

              ht[start]--;
              start++;
            }
          }

        }
        return maxlen;

    }
};
