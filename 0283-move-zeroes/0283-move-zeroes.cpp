class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int l = 0;
        int i = 0;
        while (i < nums.size()) {
            if (nums[i] != 0) {
                swap(nums[l++], nums[i++]);
            } else {
                i++;
            }
        }
    }
};