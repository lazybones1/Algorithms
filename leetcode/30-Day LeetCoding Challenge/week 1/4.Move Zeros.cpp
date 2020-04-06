class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int zeroCnt = 0;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i] == 0){
                zeroCnt++;
            }
            else{
                nums[i-zeroCnt] = nums[i];
            }
        }
        for(int i=0;i<zeroCnt;i++){
            nums.pop_back();
        }
        for(int i=0;i<zeroCnt;i++){
            nums.push_back(0);
        }
    }
};
