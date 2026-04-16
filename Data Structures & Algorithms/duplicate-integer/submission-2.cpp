class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, int> res;
        for (int& i : nums) {
            if (res[i] > 0) {
                return true;
            }
            res[i]++;
        }
        return false;
    }
};