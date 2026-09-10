class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int n = jewels.size();
        int count =0;
         unordered_map<char, int>mp;
         for(char ch:stones){
            mp[ch]++;
         }
           for(char c: jewels){
            count += mp[c];
           }
           return count;
    }
};