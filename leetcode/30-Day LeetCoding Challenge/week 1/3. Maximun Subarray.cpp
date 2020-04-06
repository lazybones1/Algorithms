class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0;
        int large = nums[0];
        for(int i = 0; i<nums.size(); i++){
            if(nums[i]>=0){
                sum+=nums[i];
                large = max(sum, large);
            }
            else{
                if(sum+nums[i]>=0){
                    sum+=nums[i];
                }
                else{
                    sum = 0;
                    large = max(nums[i], large);
                }
            }
        }
        if(large<0) return large;
        else return max(sum, large);
    }
};
