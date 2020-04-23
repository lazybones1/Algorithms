class Solution {
public:
    int search(vector<int>& nums, int target) {
        int f=0, e=nums.size()-1;
        while(f<=e){
            int mid = (f+e)/2;
            int midnum = nums[mid], left = nums[f], right = nums[e];
            if(midnum == target) return mid;

            if(midnum < left){
                if (target <= right && target > midnum){
                    f = mid +1;
                }
                else e = mid-1;
            }
            else if(midnum > right){
                if (target >= left && target < midnum){
                    e = mid -1;
                }
                else f = mid +1;
            }
            else{
                if(target > midnum) f = mid + 1;
                else e = mid -1;
            }
            cout<<f<<" "<<mid<<" "<<e<<" "<<endl;
        }
        return -1;
    }
};
