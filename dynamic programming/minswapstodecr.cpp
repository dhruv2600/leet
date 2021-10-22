#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:

    vector<vector<int>>dp;
  int helper(vector<int> &nums1, vector<int> &nums2, int s, bool swapped) {
    if (s >= nums1.size() && s >= nums2.size())
      return 0;

    if(dp[s][swapped]!=-1)
        return dp[s][swapped];

    if (swapped) {
      if (nums1[s] <= nums2[s - 1] || nums2[s] <= nums1[s - 1]) {
        return 1 + helper(nums1, nums2, s + 1, 1);
      } else {
        int a = INT_MAX;
        if (nums2[s] > nums2[s - 1] && nums1[s] > nums1[s - 1]) {
          a = 1 + helper(nums1, nums2, s + 1, 1);
        }
        return dp[s][swapped]=min(a, helper(nums1, nums2, s + 1, 0));
      }
    } else {
      if (nums1[s] <= nums1[s - 1] || nums2[s] <= nums2[s - 1]) {
        return 1 + helper(nums1, nums2, s + 1, 1);
      } else {
        int a = INT_MAX;
        if (nums2[s] > nums1[s - 1] && nums1[s] > nums2[s - 1]) {
          a = 1 + helper(nums1, nums2, s + 1, 1);
        }
        return dp[s][swapped]=min(a, helper(nums1, nums2, s + 1, 0));
      }
    }
  }
  int minSwap(vector<int> &nums1, vector<int> &nums2) {
    int len = nums1.size();
    dp.resize(len+1,vector<int>(2,-1));
    if (len == 1)
      return 0;
    return min(helper(nums1, nums2, 1, 0), 1 + helper(nums1, nums2, 1, 1));
  }
};