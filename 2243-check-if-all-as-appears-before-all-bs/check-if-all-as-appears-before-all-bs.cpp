class Solution {
public:
    bool checkString(string s) {
        int n = s.size();
        bool correct = true;
        string ss = s;
        sort(ss.begin(), ss.end());
       for(int i=0;i<n;i++){
        if(s[i]!=ss[i]) 
        correct = false;
       }
       return correct;
    }
};