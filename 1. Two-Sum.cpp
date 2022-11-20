class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        int total = nums.size();

        for (int i = 0; i < total; i++) {

            for (int j = i + 1; j < total; j++) {

                if (nums[i] + nums[j] == target) {
                    return {i, j};
                }

            }

        }
        return {};

    }

};


