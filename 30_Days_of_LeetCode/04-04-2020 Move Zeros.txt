class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> v1;
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                v1.push_back(nums[i]);
            }
        }
        count=nums.size()-v1.size();
        int p=0;
        for(int i=0;i<count;i++){
            v1.push_back(p);
        }
        for(int i=0;i<v1.size();i++){
            nums[i]=v1[i];
        }
    }
};