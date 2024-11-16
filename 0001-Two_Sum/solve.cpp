class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> appeared;
        for (int i = 0; i< nums.size(); i++){
            int needed = target - nums[i];
            if (appeared.count(needed) != 0){
                return {appeared[needed], i};
            }
            appeared[nums[i]] = i; //
        }
        return {}; // No solution
    }
};