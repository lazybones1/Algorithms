//다른 사람 코드 참조함
class Solution {
public:
  string stringRotation(string s, vector<vector<int>>& rotation) {
      int n = s.length();
      for(auto & r : rotation) {
          int d = r[0], cnt = r[1] % n;
          if (d == 0) rotate(s.begin(), s.begin() + cnt, s.end());
          else rotate(s.begin(), s.begin() + n - cnt, s.end());
      }
      return s;
  }
};
//rotate 함수: rotate(시작, 끝, 원래 전체 구간 끝)
