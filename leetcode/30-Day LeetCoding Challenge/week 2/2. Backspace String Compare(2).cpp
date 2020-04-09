//다른 사람 코드 참조함
class Solution {
public:
  string giveString(string str)
  {
    string news = "";
    for(char str : s){
      if(str == '#' && !news.empty()) news.pop_back();
      else if(str != '#') news += str;
    }
    return news;
  }
  bool backspaceCompare(string S, string T) {
    return giveString(S) == giveString(T);
  }
};
