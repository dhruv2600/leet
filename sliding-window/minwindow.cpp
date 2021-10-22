class Solution {
public:
    string minWindow(string s, string t) {


      unordered_map<char, int>ht;
      for(auto it:t)
        ht[it]++;

      int left=0;
      int right=left+1;

      unordered_map<char, int>window;
      window[left]++;
      window[right]++;

      vector<pair<int, int>>ans;
      while(left<right)
      {
          if()
      }


    }
};
