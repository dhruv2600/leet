class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();

        std::unordered_map<int, int> m;
        for (int i = 0; i < n; i++) {
            auto it = m.find(nums[i]);
            if (m.end() == it) {
                m.insert({nums[i], 1});
            } else {
                m.insert({nums[i], m[nums[i]]++});
            }
        }

        for (auto it : m) {
            if (it.second > (n / 2)) {
                return it.first;
            }
        }

        return -1;
    }
};
