class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
    unordered_map<char, int>ran;
    unordered_map<char, int>mag;
        for(char c: magazine){
            mag[c]++;
        } for(char ch: ransomNote){
            if(mag[ch]==0){
                return false;
            }
            mag[ch]--;
        }
        return true;
    }
};