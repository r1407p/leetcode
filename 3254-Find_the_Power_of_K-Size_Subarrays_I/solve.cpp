class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k) {
        int n = nums.size();
        if (n==1 || k==1) return nums;
        vector<int> res(n-k+1, -1);
        
        // initial count the valid consecutive sequence length
        int valid = 0;
        for (int i = 1; i < k -1; i++){
            if (nums[i-1]+1 == nums[i]){
                valid += 1;
            }
        }

        for (int i = k-1; i<n; i++){
            // new nums that required consecutive sequence
            if (nums[i-1]+1 == nums[i]){
                valid += 1;
            }
            if (valid == k-1){
                res[i-k+1] =  nums[i];
            }
            // old nums that required consecutive sequence
            if( nums[i-k+1]+1 == nums[i-k+2] ){
                valid-=1;
            }
        }
        return res;
    }
};