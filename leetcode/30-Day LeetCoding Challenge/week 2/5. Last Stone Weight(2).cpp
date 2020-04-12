//다른사람 코드 참조함
//힙 사용(정렬)
class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        make_heap(stones.begin(), stones.end()); //make heap = 립을 만들어주는 함수 (stones = heap)
        while (stones.size() > 1) {
            int y = stones.front(); //[stones.size() - 1];    // heap 의 특성 : 맨 앞이 가장 큰
            pop_heap(stones.begin(), stones.end());           //제일 큰 요소를 맨 뒤로 보냄
            stones.pop_back();                                //사용한 값 제거
            int x = stones.front(); //[stones.size() - 1];
            pop_heap(stones.begin(), stones.end());
            stones.pop_back();
            if (x != y) {
                stones.push_back(y - x);
                push_heap(stones.begin(), stones.end());      //힙으로 만듬
            }
        }
        return accumulate(stones.begin(), stones.end(), 0);  // 구간들의 합을 구함, 맨마지막 파라미터는 초기값을 의미
    }
};
