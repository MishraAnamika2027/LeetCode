class Solution {
public:
    string reverseParentheses(string s) {
        stack<int>st;
        string ans;
        for(char c: s){
            if(c=='('){
                st.push(ans.size());
            } else if(c==')'){
                int beg = st.top();
                st.pop();
                reverse(ans.begin()+beg, ans.end());
            } else{
                ans += c;
            }
        }
        return ans;
    }
};