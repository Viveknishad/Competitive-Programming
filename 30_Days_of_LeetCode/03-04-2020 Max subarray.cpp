class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curr_val=nums[0];
        int total_val=nums[0];
        for(int i=1;i<nums.size();i++){
            curr_val=max(nums[i],curr_val+nums[i]);
            total_val=max(total_val,curr_val);
        }
        return total_val;
    }
};