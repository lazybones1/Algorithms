class Solution {
public:
    bool backspaceCompare(string S, string T) {
        stack<char> s;
        stack<char> t;
        for(int i = 0; i<S.length(); i++){
            if(S.at(i)=='#'){
                if(s.size()>0) s.pop();
            }
            else{
                s.push(S.at(i));
            }
        }
        for(int i = 0; i<T.length(); i++){
            if(T.at(i)=='#'){
                if(t.size()>0)t.pop();
            }
            else{
                t.push(T.at(i));
            }
        }
        return s==t?true:false;
    }
};
