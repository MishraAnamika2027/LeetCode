class Solution {
public:
    string generateTag(string caption) {
        string ans = "#";
        bool space = false;
        for (char c :caption) {
            if(c ==' ') {
                space =true;
            }else {
                if(space && ans.size()>1) {
                    ans.push_back(toupper(c));
                } else{
                    ans.push_back(tolower(c));
                }
                if(ans.size()==100)
                break;
                space =false;
            }
        }
        return ans;
    }
};