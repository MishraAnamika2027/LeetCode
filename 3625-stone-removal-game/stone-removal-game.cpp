class Solution {
public:
    bool canAliceWin(int n) {
        int a = 10;int b=0;
        while(n>=a){
         n = n-a;
         a--;
         b++;
        }
        return b%2==1;
    }
};