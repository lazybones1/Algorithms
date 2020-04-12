class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        int c = stones.size();
        int x, y;
        while(1){
            if(stones.size()<2) break;
            std::sort(stones.begin(), stones.end());
            y = stones.back();
            stones.pop_back();
            x = stones.back();
            stones.pop_back();
            if(y-x>0) stones.push_back(y-x);
        }
        if(stones.empty()) stones.push_back(0);
        return stones.at(0);
    }
};
