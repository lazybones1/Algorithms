//다른사람 코드 참조함
//우선순위 큐 사용(정렬)
class Solution {
public:
  int lastStoneWeight(vector<int>& stones) {
   priority_queue<int> pq;
    for(auto i : stones)  pq.push(i);
    while(pq.size() > 1)
    {
        int a = pq.top();
        pq.pop();
        int b = pq.top();
        pq.pop();
        if(a  - b > 0)
            pq.push(a-b);
    }
    return pq.empty()?0:pq.top();
  }
};
