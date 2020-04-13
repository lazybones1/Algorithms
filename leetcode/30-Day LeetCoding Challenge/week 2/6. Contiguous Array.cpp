//다른 사람 코드 참조함
class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int, int> m;
        int sum=0;
        int maxx = 0;
        for(int i = 0; i<nums.size(); i++){
            sum+= (nums.at(i)==0)?-1:1;

            auto it = m.find(sum);

            if(sum == 0){
                maxx = i+1;
            }
            else if(it==m.end()){     //it = m.find(sum) 없는 경우
                m.insert({sum, i});
            }
            else if(it!=m.end()){   //it = m.find(sum) 있는 경우
                if(maxx < i - it->second)
                    maxx = i-it->second;  //중화된 개수를 파악함
            }
        }
        return maxx;
    }
};
