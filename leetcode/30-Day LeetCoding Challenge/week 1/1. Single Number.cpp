class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        if(nums.size() == 1) return nums.at(0);
        for(int i = 0; i< nums.size(); i++){
            if(i == 0){
                if(nums.at(i) != nums.at(i+1)){
                    return nums.at(i);
                }
            }
            else if(i == nums.size()-1){
                if(nums.at(i) != nums.at(i-1)){
                    return nums.at(i);
                }
            }
            else {
                 if(nums.at(i) != nums.at(i+1) && nums.at(i) != nums.at(i-1)){
                    return nums.at(i);
                }
            }
        }
        return -1;
    }
};
