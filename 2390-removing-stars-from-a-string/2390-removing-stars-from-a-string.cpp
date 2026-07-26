class Solution {
public:
    string removeStars(string s) {
    
        stack<char> str;
        for (char ch: s) {
            if (ch != '*') {
                str.push(ch);
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