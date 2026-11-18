class Solution {
public:
    int minChanges(string s) {
        int n = s.size();
        int count1 =0;
   //     int count2 =0;
        for(int i=0;i<n;i+=2){
            if(s[i]!=s[i+1]) 
             count1++;
        }
      return count1;
    }
};