class Solution {
public:
    string stringShift(string s, vector<vector<int>>& shift) {
        int move = 0;
        string answer;
        string tmp = s;
        for(int i = 0; i<shift.size(); i++){
            if(shift.at(i).front() == 0){
                move -= shift.at(i).back();
            }
            else{
                move += shift.at(i).back();
            }
        }
        for(int i=0; i<abs(move); i++){
            if(move>0){
                answer = tmp[tmp.length()-1];
                answer.append(tmp.substr(0,tmp.length()-1));
                tmp = answer;
            }
            else if(move<0){
                answer = tmp.substr(1,tmp.length()-1);
                answer += tmp.at(0);
                tmp=answer;
            }
        }
        return answer;
    }
};
