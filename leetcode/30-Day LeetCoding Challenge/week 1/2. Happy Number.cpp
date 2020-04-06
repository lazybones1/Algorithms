class Solution {
public:
    bool isHappy(int n) {
        int k = n;
        vector<int> v;
        while(1){
            for(int i=0; i<v.size(); i++){
                if(v.at(i) == k) return false;
            }
            v.push_back(k);
            int sum = 0;
            while(k/10 != 0){
                sum += (k%10) * (k%10);
                k= k/10;
            }
            sum += k * k;
            k = sum;
            if(k==1) return true;
        }
        return -1;
    }
};
