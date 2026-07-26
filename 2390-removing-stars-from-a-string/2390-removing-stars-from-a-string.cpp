class Solution {
public:
    string removeStars(string s) {
        if(s.length()==0)return s;
        stack<char> str;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] != '*') {
                str.push(s[i]);
            } else {
                str.pop();
            }
        }
        string tempstr;
        while(!str.empty()){
            tempstr.push_back(str.top());
            str.pop();
        }
        reverse(tempstr.begin(), tempstr.end());
        return tempstr;
    }
};