class Solution {
public:
    int countElements(vector<int>& arr) {
        int cnt = 0;
        if(arr.size()>1){
            sort(arr.begin(), arr.end());
            for(int i = 0; i<arr.size(); i++){
                for(int j = i; j<arr.size(); j++){
                    if(arr[i] + 1 == arr[j]){
                        cnt++;
                        break;
                    }
                    if(arr[j] > arr[i] + 1){
                        break;
                    }
                }

            }
        }
        return cnt;
    }
};
