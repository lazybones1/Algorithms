class Solution {
public:
    bool checkValidString(string s) {
        stack<int> so;
        stack<int> ss;
        for(int i = 0 ; i<s.length(); i++){
            if(s.at(i)=='('){
                so.push(i);
            }
            else if(s.at(i)==')'){
                if(!so.empty()){
                    so.pop();
                }
                else if(!ss.empty()){
                    ss.pop();
                }
                else{
                    return false;
                }

            }
            else if(s.at(i)=='*'){
                 ss.push(i);
            }
        }
        while(!so.empty() && !ss.empty()){
            if(so.top() > ss.top()) return false;
            so.pop();
            ss.pop();
        }
        return so.empty();
    }
};
